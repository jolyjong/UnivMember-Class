#include "UnivMember.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    // Read Prof names
    ifstream profFile("CSProfNames.txt");
    if (!profFile.is_open()) {
        cout << "Error: Unable to open CSProfNames.txt\n";
        return 1;
    }
    vector<UnivMember> members;

    string line;
    while (getline(profFile, line)) {
        UnivMember member(line, "Prof");
        members.push_back(member);
    }
    profFile.close();

    // Read Student names
    ifstream studentFile("StudentsLastFirst.txt");
    if (!studentFile.is_open()) {
        cout << "Error: Unable to open StudentsLastFirst.txt\n";
        return 1;
    }
    while (getline(studentFile, line)) {
        UnivMember member(line, "Student");
        members.push_back(member);
    }
    studentFile.close();

    // Print all members
    for (size_t i = 0; i < members.size(); ++i) {
        members[i].printMember();
        cout << endl;
    }

    // Print Friend Function 
    UnivMember prof1("Matthieu Langlois", "Prof");
    UnivMember prof2("Charles Armesto", "Prof");

    UnivMember combined = prof1 + prof2;
    combined.printMember(); 


    return 0;
}
