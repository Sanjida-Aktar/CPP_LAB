#include<iostream>
using namespace std;

class Person{
    protected:
    string name;
    int age;

    public:
    Person(string name, int age){
        this->name= name;
        this->age= age;
    }
    
};
class Employee: public Person{
    private:
    int employeeID;
    float salary;

    public:
    Employee(string name, int age, int employeeID, float salary):Person(name,age){
        this->employeeID= employeeID;
        this->salary= salary;
    }
    void showDetails(){
        cout<< "Name: " <<name<<endl;
        cout<< "Age: "<<age<<endl;
        cout<<"employeid: "<<employeeID<<endl;
        cout<<"salary: "<<salary<<endl;
    }
};
int main(){
     Employee e("Sanjida",30 ,1449, 50000);
     e.showDetails();
    return 0;
}