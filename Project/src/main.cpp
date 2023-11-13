#include "lazyDog.h"
#include "cat.h"
#include <iostream>

using namespace Shelter;

int main() {
    Dog kira("Kira", 2, true);
    kira.display();

    Dog copyOfKira = kira;
    copyOfKira.display();
    copyOfKira.changeName("new name for Kira");
    copyOfKira.display();
    kira.display();

    Dog thor("Thor", 3, true);
    thor.display();

    Dog moveOfThor(std::move(thor));
    moveOfThor.display();
    moveOfThor.changeName("new name for Thor");
    moveOfThor.display();
    
    Dog rex("Rex", 3, true);
    Dog nala("Nala", 5, true);
    rex = nala;
    rex.display();

    Dog dog1("Dog 1", 5, true);
    dog1 = Dog("Another dog name", 5, true);
    dog1.display();

    rex.speak();
    nala.speak();

    LazyDog bob("Bob", 10, true);
    kira.playFetch();
    bob.playFetch();

    Cat kimi("Kimi", 5);
    kimi.display();
    kimi.speak();
    
    return 0;
}
