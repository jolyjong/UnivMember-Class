#ifndef UNIVMEMBER_H
#define UNIVMEMBER_H

#include "ID.h"
#include "Name.h"
#include <string>

using namespace std;

class UnivMember {
public:
    // Constructors
    UnivMember();
    UnivMember(const string& fullName, const string& role);

    // Destructor
    ~UnivMember();

    // Getters
    ID getUnivID() const;
    Name getUnivName() const;
    string getRole() const;

    // Setters
    void setUnivID(const ID& id);
    void setUnivName(const Name& name);
    void setRole(const string& role);

    // Print function
    void printMember() const;

    // Friend function 
    friend UnivMember operator+(const UnivMember& member1, const UnivMember& member2);

private:
    ID univID;
    Name univName;
    string role;
};

#endif
