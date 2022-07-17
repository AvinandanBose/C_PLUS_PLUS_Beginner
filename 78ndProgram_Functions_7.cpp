/****************************************************************
 * Factorial of a number using Function
 * ****************************************************************/
#include <iostream>
using namespace std;
int factorial(int);
int main()
{
    int num;
    cout << "Enter a number:"
         << "\n";
    cin >> num;
    if (num >= 0)
    {
        int fact = factorial(num);
        cout << "Factorial of the number is:" << fact << "\n";
    }
    else
    {
        cout << "Factorial of the number is:"
             << "Not possible"
             << "\n";
    }
    return 0;
}
int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}