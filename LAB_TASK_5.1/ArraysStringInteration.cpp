#include <iostream>
#include <string> // importing the string library 

using namespace std;

int main() {
	 string arrayz[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"}; // initializng and declaring an array of strings.
	
	int arraysize = sizeof(arrayz) / sizeof(arrayz[0]); // finding the length of the bytes of the array.
	
	for (int i=0; i < arraysize; i++) {
		if (arrayz[i][0]=='B') {
			cout<< arrayz[i]<<endl; // printing the string that has its first letter 'B' 
			
		}
		 
	}
	return 0;
}