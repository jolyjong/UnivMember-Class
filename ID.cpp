#include "ID.h"

//default constructor 
ID::ID() {
    static int currentNumber = 10000000;
    ID_number = currentNumber++;
    full_ID = "A" + std::to_string(ID_number);
}

//getters
int ID::getIDNumber() const {
    return ID_number;
}

std::string ID::getFullID() const {
    return full_ID;
}

//setters
void ID::setIDNumber(int number) {
    ID_number = number;
}

void ID::setFullID(const std::string& id) {
    full_ID = id;
}
