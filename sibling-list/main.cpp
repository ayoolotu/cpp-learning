#include "list.h"            // include header for List and Sibling definitions
#include <iostream>          // include iostream for cin/cout
using namespace std;         // use the standard namespace

int main() {                 // start of main function
    List siblingList;        // create list object to store siblings
    string name;             // variable to hold a name input
    string gender;           // variable to hold gender input
    int age;                 // variable to hold age input

    cout << "Enter your name:" << endl; // ask for user name
    cin >> name;             // read user name

    cout << "Enter your gender:" << endl; // ask for user gender
    cin >> gender;           // read user gender

    cout << "Enter your age:" << endl; // ask for user age
    cin >> age;              // read user age

    siblingList.addSibling(name, gender, age); // add user as first node

    int numSiblings;         // variable for count of siblings
    cout << "How many siblings do you have?" << endl; // ask for number
    cin >> numSiblings;      // read number of siblings

    for (int i = 0; i < numSiblings; i++) { // loop for each sibling
        cout << "Enter sibling name:" << endl; // prompt for sibling name
        cin >> name;         // read sibling name

        cout << "Enter sibling gender:" << endl; // prompt for sibling gender (exact wording)
        cin >> gender;       // read sibling gender

        cout << "Enter sibling age:" << endl; // prompt for sibling age
        cin >> age;          // read sibling age

        siblingList.addSibling(name, gender, age); // add sibling node to list
    } // end for loop

    siblingList.printList(); // print list to console
    siblingList.printListToFile("siblings.txt"); // write list to file
} 