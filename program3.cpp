#include <iostream>
using namespace std;

int largestAndsmallest(int num1, int num2, int num3, int *largest)
{
    *largest = max(num1, max(num2, num3));

    return min(num1, min(num2, num3));
}


int main()
{
    cout << "Enter the numbers: " << endl;
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    int largest;
    int smallest = largestAndsmallest(num1, num2, num3, &largest); 

    cout << largest << " " << smallest << endl;
    return 0;
}