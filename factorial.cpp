#include <iostream>
using namespace std;
int main() {
    int temp;
    int num;
    int result = 1;
    cout << "Enter a number to find a factorial\n";
    cin >> num;
    temp = num;
    while (temp != 0) {
        result = result * temp;
        temp = temp - 1;
    };
    cout << "factorial of given number is: " << result << "\n";
    return 0;
}
