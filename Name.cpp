#include "Name.h"
#include <iostream>
#include <string>

using namespace std;

//default constructor
Name::Name()
{
	fname = "First";
	lname = "Last";
}

// Constructor to find the first and last name from an input 
Name::Name(const string &str) {
    size_t count = str.find(",");
    if (count != string::npos) {
        
        lname = str.substr(0, count);
        fname = str.substr(count + 1);
        
        size_t pos = fname.find_last_not_of(" \t");
        if (pos != string::npos) {
            fname = fname.substr(0, pos + 1);
        }
    }
}


//getters 
string Name::getFirstName() const 
{
	return fname;
}

string Name::getLastName() const 
{
	return lname;
}

//setters
void Name::setFirstName(const string& firstName)
{
	fname = firstName;
}

void Name::setLastName(const string& lastName) 
{
	lname = lastName;
}

//print name 
void Name::printName()const 
{
	cout << fname << " " <<lname <<endl;
}


