#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include "Name.h"
#include "ID.h"

using namespace std;

// Generate Unique UserName
string generateUsername(const string& firstName, const string& lastName, map<string, int>& usernameCount) {
    // Convert first char to lowercase 
    string username = string(1, tolower(firstName[0])) + lastName; 
    if (usernameCount.find(username) != usernameCount.end()) {
        username += to_string(++usernameCount[username]);
    } else {
        usernameCount[username] = 1;
    }
    return username;
}

int main() {
    ifstream namesFile("NamesLastFirst.txt");
    ofstream outputFile("existingStudents.txt"); 

    if (!namesFile || !outputFile) {
        cerr << "Failed to open files." << endl;
        return 1;
    }

    vector<Name> names;
    string line;
    while (getline(namesFile, line)) {
        Name name(line);
        names.push_back(name);
    }

    map<string, int> usernameCount;
    for (const auto& name : names) {
        string firstName = name.getFirstName();
        string lastName = name.getLastName();
        string username = generateUsername(firstName, lastName, usernameCount);

        // Generate ID
        ID id;
        int idNumber = id.getIDNumber();
        string fullID = id.getFullID();

        // Write to file
        outputFile << firstName << " " << lastName << "," << fullID << "," << username << endl;

        // Display output
        cout << firstName << " " << lastName << "," << fullID << "," << username << endl;
    }

    namesFile.close();
    outputFile.close();

    return 0;
}
