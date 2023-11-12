#include "dog.h"
#include <cstring>

using namespace Shelter; 

Dog::Dog(std::string name, int age, bool isHealthy) {
    this->name = new char[name.length() + 1];
    strcpy(this-> name, name.c_str());

    this->age = age;
    this->isHealthy = isHealthy;

    std::cout << "\n" << this->name <<" has been created inside a CONSTRUCTOR";
}

Dog::~Dog() {
    if(this->name != nullptr){
        std::cout << "\n" << this->name << " has been DESTRUCTED";
    } else {
        std::cout << "\n" <<  "nullptr hass been DESTRUCTED";
    }
    delete[] name;
}

Dog::Dog(const Dog &otherDog) {
    this->name = new char[strlen(otherDog.name) + 1];
    strcpy(name, otherDog.name);

    this->age = otherDog.age;
    this->isHealthy = otherDog.isHealthy;

    std::cout << "\n" <<  this->name << " has been copied inside the COPY CONSTRUCTOR";
}

Dog::Dog(Dog &&otherDog) {
    this->name = otherDog.name;
    this->age = otherDog.age;
    this->isHealthy = otherDog.isHealthy;

    otherDog.name = nullptr;
    otherDog.age = 0;
    otherDog.isHealthy = false;

    std::cout << "\n" << this->name <<" has been moved inside the MOVE CONSTRUCTOR!";
}

void Dog::display() const {
    std::cout<<"\nName: "<<this->name<<", \nAge: "<< this->age << ", \nIs Healthy: "<< this->isHealthy << std::endl;
}

void Dog::changeName(std::string newName) {
    delete[] name;

    name = new char[newName.size() + 1];
    strcpy(name, newName.c_str());
}

void Dog::speak() const {
    std::cout << "\n" << this->name << " BARKS" << std::endl;
}

void Dog::playFetch() const {
    std::cout << "\n" << "You are playing fetch with " << this->name << std::endl;
}

Dog& Dog::operator= (const Dog &other) {
    delete[] this->name;

    this->name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);

    this->age = other.age;
    this->isHealthy = other.isHealthy;

    std::cout << "\n" << this->name << " has been copied using '=' --> overload for copy constructor"<< std::endl << std::endl;

    return *this;
}