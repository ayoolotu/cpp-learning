#include <sstream>
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include "ex.h"
using namespace std;

EX::EX(){
    name = "Ayo";
    input = "";
}

void EX::set_input(string s) {
    input = s;
}

void EX::set_name(string s) {
    name = s;
}

void EX::set_name(){
    cout << "Enter your name, please: ";
    getline(cin, name);
}

void EX::rev_input(){
    reverse(input.begin(), input.end());
    cout << input << endl;
}

void EX::all_caps() {
    transform(input.begin(), input.end(), input.begin(), ::toupper);
}

void EX::all_lower() {
    transform(input.begin(), input.end(), input.begin(), ::tolower);
}

void EX::remove_word(string word) {
    string word1;
    string newSentence = "";
    istringstream ss(input); 
    while (ss >> word1) {
        if (word1 != word) {
            newSentence.append(word1 + " ");
        }
    }
    input = newSentence; 
}

string EX::longest() {
    int length = 0;
    string longestWord = "";
    string word;
    istringstream ss(input); 

    while (ss >> word) {
        if (word.length() > length) {
            length = word.length();
            longestWord = word;
        }
    }
    return longestWord;
}

string EX::shortest() {
    int length = 999;
    string shortestWord = "";
    string word;
    istringstream ss(input); 

    while (ss >> word) {
        if (word.length() < length) {
            length = word.length();
            shortestWord = word;
        }
    }
    return shortestWord;
}

string EX::get_input() {
    return input;
}

string EX::get_name() {
    return name;
}