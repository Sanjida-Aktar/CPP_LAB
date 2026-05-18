//problem name: Variable Sized Array
//link: https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true
//code:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int n, q;  
    cin>> n >> q;   //n= number of array , q= number of query
     
    vector<vector<int>>arr(n); //set vector size
    for( int i=0; i<n; i++)
    {
        int k;
        cin>> k;
        arr[i].resize(k);
        for(int j=0; j<k; j++){
            cin>>arr[i][j];
        }
    }
    
    //query calculation
    for(int x=0; x<q; x++){
        int i, j;
        cin>> i >> j;
        cout<< arr[i][j]<< endl;
    }
    return 0;
}
