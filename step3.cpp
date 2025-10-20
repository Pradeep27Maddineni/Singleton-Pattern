#include "Singleton.h"
#include <iostream>

int main() {
    // Get the Singleton instance using the static getInstance() method.
    // In C++, the instance is typically retrieved as a reference.
    Singleton& singleton_instance = Singleton::getInstance();

    // Use the Singleton (Example of calling an arbitrary method if one exists)
    // singleton_instance.doSomething(); 
    
    std::cout << "Successfully retrieved and used the Singleton instance." << std::endl;

    return 0;
}