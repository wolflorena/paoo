#include "animal.h"

namespace Shelter {
class Cat : public IAnimal {
    protected: 
        char* name;
        int age;
    
    public:
        Cat(std::string name, int age);
        ~Cat();

        void display() const override;
        void changeName(std::string newName) override;
        void speak() const override;
        // virtual void playFetch() const;

        // Dog& operator=(const Dog &other);
        // Dog& operator=(Dog &&otherDog);
};
}