#include<iostream>
using namespace std;

class Car{

    int year;
    int miles;

    public:
    string brand;
    string model;
    void set_car(int year,int miles, string brand, string model);
    void get_car();
};


int main(){
    Car car;
    return 0;
}
void Car::get_car(int year,int miles, string brand, string model){
    this->model=model;
    this->brand=brand;
    this->year=year;
    this->miles=miles;
}
void g
