#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter an integer: ";
    cin >> num;
    
    for (; num > 0; num /= 10) {
        sum += num % 10;
    }
    
    cout << "Sum of digits: " << sum << endl;
    
    return 0;
}