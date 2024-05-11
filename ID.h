#ifndef ID_H
#define ID_H

#include <iostream>
#include <string>

using namespace std;

class ID
{
 public:
    //default constructor
    ID();
    //getters
    int getIDNumber() const;
    std::string getFullID() const;
    //setters
    void setIDNumber(int number);
    void setFullID(const std::string& id);
    
 private:
    int ID_number;
    std::string full_ID;
};
#endif
