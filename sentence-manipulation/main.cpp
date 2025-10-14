#include <sstream> // String stream to break up strings
#include <iostream> // Input, output
#include <string> // Strings
#include <algorithm> // Allows toupper, lower, reverse
#include <cctype> // Allows toupper, lower
#include "ex.h" // Includes header file
using namespace std;


int main()
{
    //Sentence manipulation
    string input;
    cout << "Insert sentence: "; // Asks for user input
    getline(cin, input); // Gets an entire sentence of input vs cin, which can only get 1 word

    EX myWords; // Creates an object of the EX class created
    myWords.set_input(input); // Since input is private, this function is used to set the class input value

    myWords.rev_input(); // Reverses the string and prints it out
    myWords.all_caps(); // Converts string to all caps, but doesn't print it, which is what the cout below is for
    cout << "All caps: " << myWords.get_input() << endl;
    
    myWords.rev_input(); // Reverses the string again

    myWords.all_lower(); // Converts the string to all lowercase, but does not print it, which is what the cout below is for
    cout << "All lower: " << myWords.get_input() << endl;

    myWords.remove_word("the"); // Removes the word "the" from the string, but does not work if "the" has punctiation around it
    cout << "Without 'the': " << myWords.get_input() << endl;

    // Finds and prints the longest and shortest words in the string
    cout << "Longest word: " << myWords.longest() << endl;
    cout << "Shortest word: " << myWords.shortest() << endl;
}