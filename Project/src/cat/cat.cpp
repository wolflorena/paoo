#include "cat.h"
#include <cstring>

using namespace Shelter; 

Cat::Cat(std::string name, int age) {
    this->name = new char[name.length() + 1];
    strcpy(this-> name, name.c_str());

    this->age = age;
    
    std::cout << "\n" << this->name <<" has been created inside a CONSTRUCTOR";
}

Cat::~Cat() {
    if(this->name != nullptr){
        std::cout << "\n" << this->name << " has been DESTRUCTED";
    } else {
        std::cout << "\n" <<  "nullptr hass been DESTRUCTED";
    }
    delete[] name;
}

void Cat::display() const {
    std::cout<<"\nName: "<<this->name<<", \nAge: "<< this->age << std::endl;
}

void Cat::changeName(std::string newName) {
    delete[] name;

    name = new char[newName.size() + 1];
    strcpy(name, newName.c_str());
}

void Cat::speak() const {
    std::cout << "\n" << this->name << " MEOWS" << std::endl;
}
