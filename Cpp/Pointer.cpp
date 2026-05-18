//problem name :Pointer
//link: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true

//code:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


    void update(int *a,int *b) {
    
     int sum= *a + *b;
     int sub = abs(*a - *b);
     *a=sum;
     *b=sub;
    }

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>> a;
    cin>> b;
    update(pa, pb);
    cout<< a<<endl;
    cout<<b<< endl;
  
    return 0;
}
