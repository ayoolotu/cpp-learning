#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <string>
using namespace std;

// Struct for siblings
struct Sibling {
    string name;   // name of sibling
    string gender; // gender of sibling
    int age;       // age of sibling
    Sibling* next; // pointer to next sibling in linked list
};

// Linked list class declaration
class List {
private:
    Sibling* head; // pointer to first sibling in list

public:
    // Constructor prototype
    List();

    // Function prototype to add sibling to list
    void addSibling(string name, string gender, int age);

    // Function prototype to print list to console
    void printList();

    // Function prototype to print list to file
    void printListToFile(const string& filename);

    // Function prototype to delete the entire list
    void deleteList();

    // Destructor to ensure cleanup
    ~List();
};

#endif
