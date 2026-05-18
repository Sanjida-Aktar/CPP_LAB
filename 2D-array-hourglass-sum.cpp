#include<iostream>
#include<vector>
using namespace std;

int hourglassSum(vector<vector<int>> arr) {
    int max_sum = -63; //minimum possible sum of an hourglass is -9 * 7 = -63 
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
        int top = arr[i][j] + arr[i][j+1] + arr[i][j+2];
        int mid = arr[i+1][j+1];
        int bot = arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
        int sum = top +mid + bot;

        max_sum = max(max_sum, sum);
    }
  }    
    return max_sum;
}

int main(){
     vector<vector<int>> arr(6, vector<int>(6));
     for(int i=0;i<6;i++){
         for(int j=0;j<6;j++){
             cin>>arr[i][j];
         }
     }
    cout<<hourglassSum(arr);
    return 0;
}