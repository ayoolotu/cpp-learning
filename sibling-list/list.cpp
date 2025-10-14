#include "list.h"
#include <fstream>

// Constructor definition
List::List() {
    head = nullptr; // start with empty list
}

// Add sibling to linked list
void List::addSibling(string name, string gender, int age) {
    Sibling* newNode = new Sibling; // create new sibling node
    newNode->name = name;           // set name
    newNode->gender = gender;       // set gender
    newNode->age = age;             // set age
    newNode->next = nullptr;        // set next pointer

    if (head == nullptr) {
        head = newNode; // if list empty, new node is head
    } else {
        Sibling* temp = head;       // temporary pointer
        while (temp->next != nullptr) {
            temp = temp->next;      // move to end of list
        }
        temp->next = newNode;       // link new node at end
    }
}

// Print list to console
void List::printList() {
    Sibling* temp = head;
    cout << "List of siblings" << endl;
    while (temp != nullptr) {
        cout << temp->name << endl;
        cout << "Gender: " << temp->gender << endl;
        cout << "Age: " << temp->age << endl;
        temp = temp->next;
    }
}

// Print list to file
void List::printListToFile(const string& filename) {
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Error opening file!" << endl;
        return;
    }
    Sibling* temp = head;
    outFile << "List of siblings" << endl;
    while (temp != nullptr) {
        outFile << temp->name << endl;
        outFile << "Gender: " << temp->gender << endl;
        outFile << "Age: " << temp->age << endl;
        temp = temp->next;
    }
    outFile.close();
}

// Delete entire list
void List::deleteList() {
    Sibling* temp = head;
    while (temp != nullptr) {
        Sibling* nextNode = temp->next;
        delete temp;       // free memory
        temp = nextNode;   // move to next node
    }
    head = nullptr;
}

// Destructor calls deleteList
List::~List() {
    deleteList();
}
