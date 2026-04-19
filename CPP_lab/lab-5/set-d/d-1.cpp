#include<iostream>
using namespace std;

class Person{

    public:
    string name;
    int id;

    Person(string name, int id){
        this->name= name;
        this->id=id;
    }

};
class Student : public Person{
    private:
    double cgpa;
    
    public:
    Student(string name, int id, double cgpa):Person(name,id){
        this->cgpa=cgpa;
    }

    void getStatus(){
        if(cgpa>=2.0){
            cout<<"PASS"<<endl;
        }
        else{
            cout<<"FAIl"<<endl;
        }
    }

    void getStatus(double value){
        if(cgpa>=value){
            cout<<"Threshold"<<endl;
        }
        else{
            cout<<"Not Threshold"<<endl;
        }
    }

};
class Teacher : public Person{
    public:
    string subject;
  Teacher(string name, int id, string subject): Person(name,id){
     this->subject=subject;
  }
};

int main(){

     Student st1("Tasfiya", 1, 3.33);
     Student st2("Eti", 2, 2.50);
     Student st3("tisa", 2, 3.83);
     Student st4("sanjida", 4,1.89);
     Student st5("israt", 5, 2.00);

     st1.getStatus(3.3);
     st2.getStatus();
     st3.getStatus();
     st4.getStatus();
     st5.getStatus();

     

    return 0;
}