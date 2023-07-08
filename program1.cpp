#include <iostream>
using namespace std;

int main()
{
    int val;
    cout << "Enter an integer: ";
    cin >> val;

    cout << "The address of the integer variable is " << &val << endl;

    return 0;
}