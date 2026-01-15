  #include<iostream>
  using namespace std;

  void age_check(int age);
  int main()
  {
      int age;
      cin>>age;
      age_check(age);

  }
  void age_check(int age){


  if(age>=18)
       {
         cout<<"he is eligibility to vote";
       }
       else{
        cout<<"he is not eligibility to vote";
       }

}
