#pragma once

#include <string>

using namespace std;

class Person {
	public:
		Person(); // Corrected capitalization
		Person(float newWeight);
		
		~Person();
		// OVERLOAD THE ADD OPERATOR
		float operator+(const Person& otherPerson); // Corrected capitalization and type
		
	private:
		float mWeight;
		string mFirstName;
		int mAge;
};
