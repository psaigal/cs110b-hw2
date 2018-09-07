#include <iostream>
using namespace std;

int main() {
    int step;
    int digit = 1;

    cout << "Please enter a step that is greater than 0";
    cin >> step;  

    int dig    = 1;
    int base   = 10;
    int result = 1;
    int num;

    cout << 1 << endl;

    while (step > 1)
    {
        num = result * base;
        result = num + dig;

        cout << result * result << endl;

        step -= 1;
    }

}