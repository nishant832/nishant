#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0;
    cout << "Enter an integer: ";
    cin >> num;
    
    for (; num > 0; num /= 10) {
        reversedNum = reversedNum * 10 + (num % 10);
    }
    
    cout << "Reversed number: " << reversedNum << endl;
    
    return 0;
}
