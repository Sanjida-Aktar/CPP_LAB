#include<iostream>
using namespace std;

class Student{
    double cgpa;
    public:
    Student(double cgpa){
        this->cgpa=cgpa;
    }
    Student(const Student & obj){
        this->cgpa=obj.cgpa;
    }
    
    void setcgpa(double cgpa){
        this->cgpa= cgpa;
    }
    void display(){
        cout<< "CGPA: "<< cgpa<<endl;
    }
};
int main(){
    Student s1(3.33);

    Student s2=s1;

    cout<<"before change cgpa:"<<endl;
    s1.display();
    s2.display();
 
    //change cgpa
    s1.setcgpa(2.50);

    cout<<"Aftar change cgpa:"<<endl;
    s1.display();
    s2.display();
    return 0;
}