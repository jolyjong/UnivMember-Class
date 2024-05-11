#ifndef NAME_H
#define NAME_H

#include <iostream>
#include <string>

using namespace std;

class Name
{
 public:
  Name();
  Name(const string &str);
  
  string getFirstName() const;
  string getLastName() const;
  void setFirstName(const string& firstName);
  void setLastName(const string& lastName);
  void printName() const;

  
 private:
  string fname;
  string lname;
};
#endif
