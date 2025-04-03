#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

// Function to convert string to uppercase
void toUpperCase(string &str) {
    transform(str.begin(), str.end(), str.begin(), ::toupper);
}

// Function to count vowels in a string
int countVowels(const string &str) {
    int count = 0;
    string vowels = "AEIOU";
    for (char ch : str) {
        if (vowels.find(ch) != string::npos) {
            count++;
        }
    }
    return count;
}

// Function to reverse a string
string reverseString(const string &str) {
    return string(str.rbegin(), str.rend());
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    toUpperCase(str);
    int vowelCount = countVowels(str);
    string reversedStr = reverseString(str);
    
    cout << "Uppercase string: " << str << endl;
    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Reversed string: " << reversedStr << endl;
    
    return 0;
}
