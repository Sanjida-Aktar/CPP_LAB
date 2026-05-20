#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
     int s, q;
        cin>>s>>q;
        vector<string> str(s);
        for(int i=0;i<s;i++){
            cin>>str[i];
        }
        vector<string> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }

        for(int i=0;i<q;i++){
            int cnt = 0;
            for(int j=0;j<s;j++){
                if(query[i] == str[j]){
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }

    return 0;
    }