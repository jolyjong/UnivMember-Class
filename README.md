# Computer Science 2 Project 

This repository contains the final project for the 2024 Spring Semester Computer Science 2 class. It involves handling various functionalities related to professors, students, and generating lists with specific formatting requirments. 

## Table of Contents

- [Files Used](#Filesused)
- [Description](#description)
- [Compilation Instructions](#compilationinstructions)
- [Files](#files)
- [License](#license)

## Files Used


## Descriptions 
This project consists of the following functionalities:

1. **Generate a list of professors with their IDs** and save to a file.
   This program generates a list of professors with their names and IDs, and save the result into a file called `ProfessorList.txt`.
   **Files Used**
   -`ProfessorList.cpp`
   -`Name.cpp`
   -`ID.cpp`
   -`CSProfNames.txt`

   **How to compile:**
   ```bash
   g++ ProfessorList.cpp Name.cpp ID.cpp
   ```
   **Example Output:**
   - Input: `CSProfNames.txt` containing professor names
   - Output: `ProfessorList.txt` containing a list of professors and their IDs
  

2. **Generate unique usernames** for students based on their first initial and last name.
   This Program generates unique usernames for students based on their first initial and last name. If the generated username already exists, an increasing number will be appended to make it unique.
   **Files Used**
   -`Username.cpp`
   -`Name.cpp`
   -`ID.cpp`
   -`NamesLastFirst.txt`

   **How to compile:**
   ```bash
   g++ -o Username.cpp Name.cpp ID.cpp
   ```
   **Example Output:**
   - Input: `NamesLastFirst.txt` containing professor names
   - Output: `existingStudent.txt` containing student names, their IDs, and generated usernames.
        
3. **Implement friend functions** in `UnivMember` to allow external functions to access private members.
  A friend function was implemented to allow external functions to access private members of `UnivMember` class. The function uses private member data like the student's name and role to generate a new `UnivMember` object.
   **Files Used**
   -`StudentLastFirst.cpp`
   -`UnivMember.cpp`
   -`UnivMember.h`
   -`UnivMemberDriver.cpp`
   `NamesLastFirst.txt`
   **The purpose of the friend function:**
   - The purpose of the friend function added to the `UnivMember`class is give external functions access to private members such as `Name` and `role`. By doing so, we can create new `UnivMember` object externally while leveraging private data for better control and security.

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/jolyjong/UnivMember-Class.git
