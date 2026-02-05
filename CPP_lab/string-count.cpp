#include<iostream>
#include<string>
using namespace std;
int main(){
    string txt = "hello world welcome to the world of C++ programming";
    int count[26]= {0};

    for(int i=0; i<txt.length(); i++){
        count[txt[i]-'a']++;

    }
    int  big_value=0;
    char ch='a';

    cout<<"Missing charactrs are: "<<endl;
    for(int i=0; i<26; i++){
        if(count[i]==0){
            cout<< (char)(i+'a')  << endl;
        }
        if(count[i]>big_value){
            big_value = count[i];
            ch = (char)(i+'a');

        }
    }
  cout<<" Maximum character is: "<< ch<< " = "<<big_value<<endl;
}