#include <iostream>
#include <string>

using namespace std;

class Dog {
    private: 
        char* name;
        int age;
        bool isHealthy;
    
    public:
        /**
         * @brief Construct a new Dog object
         * 
         * @param name The name of the dog
         * @param age The age of the dog
         * @param isHealthy whether the dog is healthy
         */
        Dog(string name, int age, bool isHealthy);

        /**
         * @brief Destructor for the Dog class
         * 
         * This destructor is responsible for cleaning up resources associated with a Dog object.
         * 
         * @details 
         * The destructor is automatically called when a Dog object goes out of scope or is explicitly deleted.
         * Its primary purpose is to release any resources or clean up any state associated with the Dog object.
         */
        ~Dog();

        /**
         * @brief Copy Constructor for the Dog class.
         * 
         * This constructor creates a copy of a Dog object based on an existing Dog object.
         * 
         * @param anotherDog the Dog object to be copied
         * 
         * @details
         * This constructor creates a new Dog object by copying the attributes (name, age, and health status)
         * of an existing Dog object specified by the `otherDog` parameter. A deep copy is performed for the
         * `name` attribute to ensure that the new Dog object has its own separate memory for the name.
         *
         */
        Dog(const Dog &anotherDog);

        /**
         * @brief Move Constructor for the Dog class.
         * 
         * This constructor moves the content of an existing Dog object into a new Dog object.
         * 
         * @param anotherDog The Dog object to be moved.
         * 
         * @details
         * This constructor creates a new Dog object by transferring ownership of the attributes (name, age, and health status)
         * from an existing Dog object specified by the `otherDog` parameter. The `name` attribute is moved by
         * directly transferring the pointer to the new object, avoiding unnecessary copying. The source object is put into
         * an undefined state by setting its attributes to null or 0 to prevent further use.
         * 
         */
        Dog(Dog &&anotherDog);

        /**
         * @brief Display information about the Dog
         * 
         * This member function prints information about the Dog object to the standard output.
         * 
         * @details
         * This member function displays the name, age, and health status of the Dog object by printing
         * them to the standard output. It provides a human-readable representation of the Dog's attributes.
         * 
         */
        void display();

        /**
         * @brief Change the name of the Dog
         * 
         * This member function updates the name of the Dog object.
         * 
         * @param newName The new name for the Dog
         * 
         * @details
         * This member function changes the name of the Dog object to the provided `newName`. It first deallocates
         * the memory used for the current name and then allocates new memory to store the updated name. The name
         * is updated to match the `newName` parameter.
         * 
         */
        void changeName(string newName);
};