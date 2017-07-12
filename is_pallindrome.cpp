#include <iostream>
using namespace std;
int main() {
    int rem;
    int num;
    int reverse = 0;
    int temp;
    cout << "Enter number to check for pallindrome\n";
    cin >> num;
    rem = num;
    temp = num;
    while (num != 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    //cout << "reverse of a given number: " << reverse << endl;
    if (reverse == temp)
        cout << temp << " is pallindrome\n";
    else
        cout << temp << " is not a pallindrome\n";

    return 0;
}                                                                       
