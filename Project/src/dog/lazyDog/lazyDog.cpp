#include "LazyDog.h"
#include <cstring>

using namespace Shelter;

LazyDog::LazyDog(std::string name, int age, bool isHealthy) : Dog(name, age, isHealthy){

}

// LazyDog::LazyDog(const LazyDog &otherDog) {
//     this->name = new char[strlen(otherDog.name) + 1];
//     strcpy(name, otherDog.name);

//     this->age = otherDog.age;
//     this->isHealthy = otherDog.isHealthy;

//     std::cout << "\n" <<  this->name << " has been copied inside the COPY CONSTRUCTOR";
// }

// LazyDog::LazyDog(LazyDog &&otherDog) {
//     this->name = otherDog.name;
//     this->age = otherDog.age;
//     this->isHealthy = otherDog.isHealthy;

//     otherDog.name = nullptr;
//     otherDog.age = 0;
//     otherDog.isHealthy = false;
//     std::cout << "\n" << this->name << " has been moved inside the MOVE CONSTRUCTOR!";
// }

LazyDog::~LazyDog() {
    if (this->name) {
        std::cout << "\n" << "Lazy dog: " << this->name << " has been DESTRUCTED";
    } else {
        std::cout << "A lazy dog has been DESTRUCTED";
    }
}

void LazyDog::playFetch() const {
    std::cout << std::endl << "You want to play fetch with " << this->name << " but the dog is too lazy to play with you." << std::endl;
}

LazyDog& LazyDog::operator=(const LazyDog &other) {
    if (this != &other) {
        IAnimal::operator=(other);
        isHealthy = other.isHealthy;
    }
    return *this;
}