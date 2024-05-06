#include "person.h"

// Default constructor
Person::Person() {
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

// Constructor with weight parameter
Person::Person(float newWeight) {
    mWeight = newWeight;
    mFirstName = "";
    mAge = 0;
}

// Destructor
Person::~Person() {
    // Cleanup code if needed
}

// Overloaded addition operator
float Person::operator+(const Person& otherPerson) {
    return mWeight + otherPerson.mWeight;
}
