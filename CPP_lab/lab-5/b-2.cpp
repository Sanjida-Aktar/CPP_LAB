#include<iostream>
using namespace std;

class Shape{
    public:
    double area(double r){
        double PI = 3.1416;
        return PI*r*r;
    }
    double area(double length, double width){
        return length*width;
    }
    double area(double base , double hight, bool isTraiangle){
        return (0.5*base* hight);
    }
};
int main(){
     
    Shape s;
    cout<<"circle: "<<s.area(4)<<endl;
    cout<<"Rectengle: " <<s.area(20.5, 5.6)<<endl;
    cout<<"Triangle: "<<s.area(10, 15.4, 1);
    return 0;
}