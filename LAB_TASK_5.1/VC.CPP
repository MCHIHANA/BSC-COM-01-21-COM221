#include <iostream>
#include <string>

using namespace std;

// Contact class definition
class Contact {
private:
    string firstName;
    string lastName;
    string phoneNumber;

public:
    // Default constructor
    Contact() : firstName(""), lastName(""), phoneNumber("") {}

    // Overloaded constructor
    Contact(string first, string last, string phone)
        : firstName(first), lastName(last), phoneNumber(phone) {}

    // Accessor methods
    string getFirstName() const { return firstName; }
    string getLastName() const { return lastName; }
    string getPhoneNumber() const { return phoneNumber; }

    // Overloading == operator
    bool operator==(const Contact& other) const {
        return phoneNumber == other.phoneNumber;
    }
};

// Phonebook class definition
class Phonebook {
private:
    Contact* contacts; // Dynamic array of contacts
    int numOfContacts; // Number of valid contacts
    const int maxSize; // Size of the dynamic array
    

public:
    // Constructor
    Phonebook() : numOfContacts(0), maxSize(5) {
        contacts = new Contact[maxSize]; // Allocating memory for dynamic array
    }

    // Destructor
    ~Phonebook() {
        delete[] contacts; // Deallocating memory for dynamic array
    }

    // Function to add a contact to the phonebook
    void addContact(const Contact& contact) {
        if (numOfContacts < maxSize) {
            contacts[numOfContacts] = contact;
            numOfContacts++;
            cout << "Contact added successfully." << endl;
        } else {
            cout << "Phonebook is full. Cannot add more contacts." << endl;
        }
    }
};



   void AddContact( const contact, ){
    cout<<"enter the contacts first name"<<endl;
    cin >> string firstname;

    cout<<"enter the contacts last name"<<endl;
    cin>> string lastname;

    cout <<"enter the phone number"<<endl;
    cin >> int contact<<endl;

    if (contatc== contatc[i]){
        cout<< "the number already exist, please add another number"<<endl;
        else {
            cout<< "contact accepted"
        }
    }
   }
  
void saveContactsToFile (const string& filename)