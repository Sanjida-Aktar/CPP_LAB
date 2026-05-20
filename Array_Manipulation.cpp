#include<iostream>
#include<vector>
using namespace std;
int main(){
     int n, q;
        cin>>n>>q;
        vector<int> arr(n, 0);
        for(int i=0;i<q;i++){
            int a, b, k;
            cin>>a>>b>>k;
            for(int j=a-1;j<b;j++){
                arr[j] += k;
            }
        }
        long long max = 0;
        for(int i=0;i<n;i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        cout<<max<<endl;
    return 0;
}

// int main() {
//     int n, q;
//     cin >> n >> q;

//     vector<long long> arr(n+2, 0); // difference array

//     for (int i = 0; i < q; i++) {
//         int a, b, k;
//         cin >> a >> b >> k;
//         arr[a] += k;
//         arr[b+1] -= k;
//     }

//     long long maxVal = 0, current = 0;
//     for (int i = 1; i <= n; i++) {
//         current += arr[i];
//         if (current > maxVal) maxVal = current;
//     }

//     cout << maxVal << endl;
//     return 0;
// }
