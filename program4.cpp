#include <iostream>
using namespace std;

void swapfunction(int *num1, int *num2)
{
    int num3 = *num1;
    *num1 = *num2;
    *num2 = num3;
    cout << *num1 << " " << *num2 << endl;
    return;
}


int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    swapfunction(&num1, &num2);

    return 0;
}