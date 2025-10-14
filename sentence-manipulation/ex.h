#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

class EX {
    private: // Initializes private variables that will be used in the class
        string name;
        string input;
    
    public: // Public functions that can be called on in the main class unline private vars
        EX();
        void set_input(string);
        void set_name(string);
        void set_name(); // Overloaded function
        void rev_input();
        void all_caps();
        void all_lower();
        void remove_word(string);
        string longest();
        string shortest();
        string get_input(); 
        string get_name(); 
}; // Class must end with semicolon