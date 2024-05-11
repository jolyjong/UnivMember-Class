#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <sstream>
#include "Name.h"
#include "ID.h"

using namespace std;

// Generate IDs for professor 
void generateProfessorIDs(const vector<string>& professorNames, map<string, string>& professorIDMap) {
    for (const string& name : professorNames) {
        Name professorName(name);
        string fullName = professorName.getLastName() + ", " + professorName.getFirstName();
        ID id;
        professorIDMap[fullName] = id.getFullID();
    }
}

// Read Professor Names from file 
vector<string> readProfessorNames(const string& filename) {
    vector<string> professorNames;
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            professorNames.push_back(line);
        }
        file.close();
    } else {
        cout << "Unable to open file: " << filename << endl;
    }
    return professorNames;
}

// Save Professor List with ID's into a file 
void saveProfessorList(const map<string, string>& professorIDMap, const string& filename) {
    ofstream outputFile(filename);
    if (outputFile.is_open()) {
        for (const auto& pair : professorIDMap) {
            outputFile << pair.first << ": " << pair.second << endl;
        }
        outputFile.close();
    } else {
        cout << "Unable to create file: " << filename << endl;
    }
}

int main() {
    // read professor names
    vector<string> professorNames = readProfessorNames("CSProfNames.txt");

    // generate IDs
    map<string, string> professorIDMap;
    generateProfessorIDs(professorNames, professorIDMap);

    // save professor into text file
    saveProfessorList(professorIDMap, "ProfessorList.txt");

    //show its saved properly 
    cout << "Professor list with IDs saved." << endl;

    return 0;
}
