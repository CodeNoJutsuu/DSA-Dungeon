#include <iostream>

using namespace std;

int main() {
    int num;
    
    // Taking input
    cout << "Enter a positive integer: ";
    cin >> num;
    
    // Checking divisibility condition
    if ((num % 5 == 0 || num % 3 == 0) && num % 15 != 0) {
        cout << num << " is divisible by 5 or 3 but not by 15.\n";
    } else {
        cout << num << " does not satisfy the condition.\n";
    }
    
    return 0;
}
