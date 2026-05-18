#include<iostream>
using namespace std;
int main(){
     int n, d;
     cin>>n>>d;
     int arr[n];
        for(int i=0;i<n;i++){ //input array elements
            cin>>arr[i];
        }
        int temp[n];
        for(int i=d;i<n;i++){
            temp[i-d] = arr[i];
        }
        for(int i=0; i<d; i++){
            temp[n-d+i] = arr[i];
        }
        for(int i=0;i<n;i++){
            cout<<temp[i]<<" ";
        }
    return 0;
}