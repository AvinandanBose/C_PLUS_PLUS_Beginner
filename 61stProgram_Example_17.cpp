/*******************
 * Upto a given range.
 * Prime Numbers:A natural number that can be divided exactly only by itself and 1.
 * Eg: 2,3,5,7, .... etc.
 ****************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int range;
    cout << "Enter the range: ";
    cin >> range;
    cout << "Prime Numbers Upto a given range:" << range <<"\n";
    if (range > 1)
    {
        for (int i = 2; i <= range; i++)
        {
            int k = 0;
            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    k = k + 1;
                    break;
                }
            }
            if (k == 0)
            {
                cout << i << "\n";
            }
        }
    }
    else
    {
        cout << "Invalid range";
    }
}