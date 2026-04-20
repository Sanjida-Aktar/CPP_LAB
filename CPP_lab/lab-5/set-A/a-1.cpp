#include<iostream>
using namespace std;

class Student {
    string name ;
    int rollNo; 
    double cgpa;
 
    public:
    Student(){}

    Student(string name, int rollNo, double cgpa){
        this->name = name;
        this->rollNo= rollNo;
        this->cgpa= cgpa;
    }
    void display(){
        cout<<"Name: "<< name << endl;
        cout<<"Roll Number : "<< rollNo<< endl;
        cout<<"CGPA: "<< cgpa;
    }
};

int main(){
     Student st("Sanjida", 3, 3.33);
     st.display();
    return 0;
}