#include "dog.h"
#include <iostream>

using namespace std;

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
    
    return 0;
}
