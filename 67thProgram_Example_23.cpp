/****************************************************************
 * Composite Numbers: Numbers formed by Multiplying two unique or more Prime Numbers.
 * ********************************/
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
         cout<<"Composite Numbers upto range:"<<range<<" are:"<<"\n";
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
            if (c > 2)
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