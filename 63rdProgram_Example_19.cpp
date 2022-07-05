/*******************
 * Prime Numbers:A natural number that can be divided exactly only by itself and 1.
 * Eg: 2,3,5,7, .... etc. 0 and 1 and negative numbers are not prime numbers.
 ****************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int range;
    cout << "Enter a  range:";
    cin >> range;
    int c;
    if (range > 1)
    {
        for (int i = 2; i <= range; i++)
        {
            c = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    c = c + 1;
                }
            }
            if (c == 2)
            {
                cout << i << "\n";
            }
        }
    }
    else
    {
        cout << "Invalid range";
    }

    return 0;
}