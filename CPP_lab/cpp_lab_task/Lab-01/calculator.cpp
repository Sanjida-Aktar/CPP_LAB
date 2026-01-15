#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    char result;
    cin>>result;
   switch(result)
   {
        case '+':
        cout<<a+b;
        break;


    case '-':
        cout<<a-b;
        break;


    case '*':
        cout<<a*b;
        break;


    case '/':
        cout<<a/b;
        break;
   }

}
