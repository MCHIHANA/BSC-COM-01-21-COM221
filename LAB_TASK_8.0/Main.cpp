#include <iostream> 
#include "person.h"

using namespace std; 

int main() {
    // Create instances of Person
    Person jane = Person(60.0f); 
    Person john = Person(75.0f); 
    
    // Use the overloaded + operator
    float totalWeight = jane + john;
    
    // Output the total weight
    cout << "Total weight: " << totalWeight << endl;
    
    return 0;
}

