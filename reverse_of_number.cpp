#include <iostream>
using namespace std;
int main() {
    int rem;
    int num;
    int reverse = 0;
    cout << "Enter number to find reverse of it\n";
    cin >> num;
    rem = num;
    while (num != 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    cout << "reverse of a given number: " << reverse << endl;
    return 0;
f}                                                                       
