#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the first number: ";
    int num1;
    cin >> num1;

     cout << "Enter the second number: ";
    int num2;
    cin >> num2;

    int *ptr = &num1, *ptr2 = &num2;

    cout << "The product of the two numbers are " << *ptr * *ptr2 << endl;

    return 0;
}