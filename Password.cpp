#include <iostream>
#include <cctype>
using namespace std;

#define MIN_LENGTH 8

int main() {
    string password;
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    string specialChars = "!@#$%^&*";
    
    cout << "Enter your password: ";
    cin >> password;
    
    if (password.length() < MIN_LENGTH) {
        cout << "Weak Password: Must be at least " << MIN_LENGTH << " characters long." << endl;
        return 0;
    }
    
    for (char ch : password) {
        if (isupper(ch)) hasUpper = true;
        if (islower(ch)) hasLower = true;
        if (isdigit(ch)) hasDigit = true;
        if (specialChars.find(ch) != string::npos) hasSpecial = true;
    }
    
    if (hasUpper && hasLower && hasDigit && hasSpecial) {
        cout << "Strong Password" << endl;
    } else {
        cout << "Weak Password: Missing";
        if (!hasUpper) cout << " uppercase letter";
        if (!hasLower) cout << " lowercase letter";
        if (!hasDigit) cout << " digit";
        if (!hasSpecial) cout << " special character";
        cout << "." << endl;
    }
    
    return 0;
}
