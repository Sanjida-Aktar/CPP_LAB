//problem name: Strings
//link: https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true

//code:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s1, s2;
      cin>> s1;
      cin>>s2;
      string add = s1 + s2; // add two strings
      cout<<s1.length()<<" "<<s2.length()<<endl; //calculate length two string
      cout<<add<<endl;
      swap(s1[0],s2[0]); // swap two strings first index element
      cout<< s1 <<" "<<s2;
    return 0;
}

