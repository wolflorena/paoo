#include "dog.h"

Dog::Dog(string name, int age, bool isHealthy) {
    this->name = new char[name.length() + 1];
    strcpy(this-> name, name.c_str());

    this->age = age;
    this->isHealthy = isHealthy;

    cout << "\n" << this->name <<" has been created inside a CONSTRUCTOR";
}

Dog::~Dog() {
    if(this->name != nullptr){
        cout << "\n" << this->name << " has been DESTRUCTED";
    } else {
        cout << "\n" <<  "nullptr hass been DESTRUCTED";
    }
    delete[] name;
}

Dog::Dog(const Dog &otherDog) {
    this->name = new char[strlen(otherDog.name) + 1];
    strcpy(name, otherDog.name);

    this->age = otherDog.age;
    this->isHealthy = otherDog.isHealthy;

    cout << "\n" <<  this->name << " has been copied inside the COPY CONSTRUCTOR";
}

Dog::Dog(Dog &&otherDog) {
    this->name = otherDog.name;
    this->age = otherDog.age;
    this->isHealthy = otherDog.isHealthy;

    cout << "\n" << this->name <<" has been moved inside the MOVE CONSTRUCTOR!";

    otherDog.name = nullptr;
    otherDog.age = 0;
    otherDog.isHealthy = false;
}

void Dog::display() {
    cout<<"\nName: "<<this->name<<", \nAge: "<< this->age << ", \nIs Healthy: "<< this->isHealthy << endl;
}

void Dog::changeName(string newName) {
    delete[] this->name;

    this->name = new char[newName.size() + 1];
    strcpy(this->name, newName.c_str());
}
