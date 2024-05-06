#include <iostream>
#include <string>

class Person {
private:
    std::string mFirstName;
public:
    Person(const std::string& firstName) : mFirstName(firstName) {}

    // Overloading == operator
    bool operator==(const Person& other) const {
        return mFirstName == other.mFirstName;
    }

    // Overloading != operator
    bool operator!=(const Person& other) const {
        return !(*this == other);
    }
};

int main() {
    Person person1("John");
    Person person2("Jane");
    Person person3("John");

    if (person1 == person2) {
        std::cout << "person1 is the same as person2\n";
    } else {
        std::cout << "person1 is not the same as person2\n";
    }

    if (person1 != person3) {
        std::cout << "person1 is not the same as person3\n";
    } else {
        std::cout << "person1 is the same as person3\n";
    }

    return 0;
}
