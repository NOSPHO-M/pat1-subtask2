#include <iostream>
#include <map>
#include <string>

using namespace std;

// Function to initialize the Morse code dictionary
map<char, string> createMorseDictionary() {
    map<char, string> morseCode = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
        {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
        {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
        {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
        {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
        {'Z', "--.."}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"},
        {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."},
        {'8', "---.."}, {'9', "----."}, {'0', "-----"}, {' ', " / "}
    };
    return morseCode;
}

// Function to translate text to Morse code
string translateToMorse(string text) {
    map<char, string> morseDict = createMorseDictionary();
    string morseTranslation;

    for (char c : text) {
        c = toupper(c); // Convert to uppercase to match the dictionary
        if (morseDict.find(c) != morseDict.end()) {
            morseTranslation += morseDict[c] + " ";
        }
    }
    return morseTranslation;
}

int main() {
    string userInput;
    
    cout << "Enter a short message: ";
    getline(cin, userInput);
    
    string morseCode = translateToMorse(userInput);
    cout << "Morse Code: " << morseCode << endl;

    return 0;
}
