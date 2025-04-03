#include <iostream>
using namespace std;

#define LIMIT 50
#define SQUARE(x) ((x) * (x))

int main() {
    constexpr unsigned int maxLimit = LIMIT;
    unsigned int a = 5;
    unsigned int b = SQUARE(a);
    
    cout << "The value of a is: " << a << "\n";
    cout << "The value of b is: " << b << "\n";
    
    for (unsigned int i = 2; i <= maxLimit; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}
