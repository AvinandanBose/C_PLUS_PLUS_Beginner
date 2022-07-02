/**************
 * Perfect Number:
 * ----------------------------------------------------------------
 * Any number can be perfect number if the sum of its positive divisor
 * excluding the number itself is equal to the number itself.
 *
 * For Example: 6 is perfect number. Since, 1+2+3=6.
 * ************/

#include <iostream>
using namespace std;
int main()
{
    int range;
    cout << "Enter a range :";
    cin >> range;
    cout << "Perfect numbers upto range :" << range << "are:" <<"\n";
    for (int i = 1; i <= range; i++)
    {
        int sum = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0 && j != i)
            {
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            cout << i <<  endl;
        }
    }

    return 0;
}
