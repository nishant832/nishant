#include <iostream>

using namespace std;

namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }
}

namespace TextOperations {
    string concat(string str1, string str2) {
        return str1 + str2;
    }
}

int main() {
    // Using MathOperations namespace
    int sum = MathOperations::add(10, 20);
    cout << "Sum: " << sum << endl;
    
    // Using TextOperations namespace
    string combined = TextOperations::concat("Hello, ", "World!");
    cout << "Concatenated String: " << combined << endl;
    
    return 0;
}
