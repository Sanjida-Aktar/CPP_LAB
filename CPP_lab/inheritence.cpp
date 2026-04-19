#include<iostream>
using namespace std;
class Animal {
    protected:
    string animalID;
    string name;
    int age;

    public:

    void setAnimalDetals(string animalID, string name, int age){
        this-> animalID= animalID;
        this-> name= name;
        this-> age= age;
        
    }

    void displayAnimalDteails();
};


//dog class
class  Dog : public Animal
{
public:
    string breed;
    bool isVaccinated;

    

   void setDogDetails(string breed, bool isVaccinated){
    this-> breed= breed;
   this-> isVaccinated= isVaccinated;
   }

//    void displayAnimalDteails();
   void displayDogDetals();
   
};

class Cat : public Animal
{
public:
    string furColor;
    bool isIndoor;

    

    void setCatDetails(string furColor, bool isIndoor){
    this-> furColor= furColor;
   this-> isIndoor= isIndoor;
   }

//    void displayAnimalDteails();
   void displayCatDetals();

};

class ServiceDog :  public Dog
{
    public:
    string badgeNumber;
    string assignedUnit;
    int yearsOfService;

    void setServiceDetails(string badgeNumber, string assignedUnit, bool yearsOfService){
    this-> badgeNumber= badgeNumber;
    this-> assignedUnit= assignedUnit;
   this-> yearsOfService= yearsOfService;
   }

   void displayServiceDetals();

};

void displayDogDetals();
void displayFullProfile();




 int main(){
    Animal a1;
    a1.setAnimalDetals("102","cat",1234);
    Dog d1;
    d1.setDogDetails("xyz",0);
    Cat c1;
    c1.setCatDetails("red", 1);
    ServiceDog s1;
    s1.setServiceDetails("aa5a","asad",20);
 }


 void Animal ::displayAnimalDteails(){
    cout<<"AnimalID = "<<animalID<< endl;
    cout<<"Name = "<<name<< endl;
    cout<<"Age = "<<age<< endl;

 }

 void Dog :: displayDogDetals(){
    cout<<"Breed = "<<breed<< endl;
    cout<<"IS vaccinated = "<<isVaccinated<< endl;
 }

 void Cat :: displayCatDetals(){
    cout<<"FurColor = "<<furColor<< endl;
    cout<<"IS Indoor = "<<isIndoor<< endl;
 }