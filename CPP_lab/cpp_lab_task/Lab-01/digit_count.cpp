#include<iostream>
  using namespace std;

  void digit_check(int num);
  int main()
  {
      int num;
      cin>>num;
      digit_check(num);

  }
  void digit_check(int num){
      int result=0;
      int temp=num , r;

   while(temp!=0)
   {
       r= temp %10;

       result++;
       temp/= 10;
   }
   cout<< result;

}

