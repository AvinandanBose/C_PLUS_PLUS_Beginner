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
    cout << "Decimal Numbers Upto A Given Range:" << range << "\n";
    for (int i = 1; i <= range; i++)
    {
        int temp = i;
        int temp2 = i;
        int c = 0;
        int base = 1;
        int binary = 0;
        int rem;
        while (temp != 0)
        {
            temp = temp / 2;
            c = c + 1;
        }
        for (int j = 1; j <= c; j++)
        {
            rem = temp2 % 2;
            binary = binary + rem * base;
            temp2 = temp2 / 2;
            base = base * 10;
        }
        cout << binary << "\n";
    }

    return 0;
}
