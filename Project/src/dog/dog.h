#include "animal.h"

namespace Shelter {
class Dog : public IAnimal {
    protected: 
        char* name;
        int age;
        bool isHealthy;
    
    public:
        Dog(std::string name, int age, bool isHealthy);
        ~Dog();
        Dog(const Dog &anotherDog);
        Dog(Dog &&anotherDog);

        void display() const override;
        void changeName(std::string newName) override;
        void speak() const override;
        virtual void playFetch() const;

        Dog& operator=(const Dog &other);
};
}
