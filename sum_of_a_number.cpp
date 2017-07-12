#include <iostream>
using namespace std;
int main() {
    int rem;
    int num;
    int sum = 0;
    cout << "Enter number to find sum of digits in it\n";
    cin >> num;
    rem = num;
    while (num != 0) {
        rem = num % 10;
        sum += rem;
        num = num / 10;
    }
    cout << "sum of digits in a given number: " << sum << endl;
    return 0;
}
