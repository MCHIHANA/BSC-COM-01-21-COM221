#include <iostream>
#include <string>

class Person {
private:
    std::string mFirstName;
    int mAge;
public:
    Person(const std::string& firstName, int age) : mFirstName(firstName), mAge(age) {}
//THE FOLLOWING CODE IS OVERLOADED WITH THE OPERATORS: > , <
    // Overloading > operator
    bool operator>(const Person& other) const {
        return mAge > other.mAge;
    }

    // Overloading < operator
    bool operator<(const Person& other) const {
        return mAge < other.mAge;
    }
};

int main() {
    Person person1("John", 30);
    Person person2("Jane", 25);
    
    if (person1 > person2) {
        std::cout << "John is older than Jane\n";
    } else {
        std::cout << "Jane is older than John\n";
    }

    if (person1 < person2) {
        std::cout << "Jane is younger than John\n";
    } else {
        std::cout << "John is younger than Jane\n";
    }

    return 0;
}
