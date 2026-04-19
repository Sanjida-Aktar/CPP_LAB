#include<iostream>
using namespace std;

class Calculator{
    public:
    void add(int a,int b){
        cout<<a+b<<endl;
    }
    void add(double a,double b){
        cout<<a+b<< endl;
    }
    double add (int a, int b, int c){
         return a+b+c;
    }

};

int main(){
     Calculator sum;
     cout<<sum.add(2,5)<<endl;
     sum.add(6.2, 5.9);
     sum.add(2,4,6);
    return 0;
}