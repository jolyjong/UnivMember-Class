#include "UnivMember.h"
#include <fstream>
#include <sstream>
#include <iostream>

// Constructors
UnivMember::UnivMember() {}

UnivMember::UnivMember(const string& fullName, const string& role)
    : univName(Name(fullName)), role(role) {}

// Destructor
UnivMember::~UnivMember() {}

// Getters
ID UnivMember::getUnivID() const {
    return univID;
}

Name UnivMember::getUnivName() const {
    return univName;
}

string UnivMember::getRole() const {
    return role;
}

// Setters
void UnivMember::setUnivID(const ID& id) {
    univID = id;
}

void UnivMember::setUnivName(const Name& name) {
    univName = name;
}

void UnivMember::setRole(const string& role) {
    this->role = role;
}


// Print function
void UnivMember::printMember() const {
    cout << role << ": ";
    cout << univName.getFirstName() << " " << univName.getLastName() << endl;
    cout << "ID: " << univID.getFullID() << endl;
}


// Friend function definition
UnivMember operator+(const UnivMember& member1, const UnivMember& member2) {
    // Set the name and role 
    string fullName = member1.getUnivName().getFirstName() + " " + member1.getUnivName().getLastName() + " " +
                      member2.getUnivName().getFirstName() + " " + member2.getUnivName().getLastName();
    string role = member1.getRole() + " & " + member2.getRole();

    // A New UnivMember
    UnivMember combinedMember(fullName, role);
    
    return combinedMember;
}


