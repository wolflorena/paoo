#include <iostream>
#include <string>

namespace Shelter {
    class IAnimal {

    public:
        virtual void display() const = 0;
        virtual void changeName(std::string newName) = 0;
        virtual void speak() const = 0;
    };
}
