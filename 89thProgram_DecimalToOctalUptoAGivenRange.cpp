/*********
 * Decimal to Binary:
 * Given a decimal number, convert it to binary number.
 * ************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int range;
    cout << "Enter the range : ";
    cin >> range;
    cout << "Octal Numbers Upto A Given Range:" << range << "\n";
    for (int i = 1; i <= range; i++)
    {
        int temp = i;
        int temp2 = i;
        int c = 0;
        int base = 1;
        int octal = 0;
        int rem;
        while (temp != 0)
        {
            temp = temp / 8;
            c = c + 1;
        }
        for (int j = 1; j <= c; j++)
        {
            rem = temp2 % 8;
            octal = octal + rem * base;
            temp2 = temp2 / 8;
            base = base * 10;
        }
        cout << octal << "\n";
    }

    return 0;
}