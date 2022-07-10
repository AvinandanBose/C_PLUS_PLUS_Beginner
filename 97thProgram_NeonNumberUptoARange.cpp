/*********
 * Neon Number : A neon number is that where sum of digits of square
 * of the number is equal to the number itself.
 * Suppose: - n = 9 = 9^2 = 81 = 8+1 =9
 * ****************************************************************/
#include <iostream>
using namespace std;
int power(int, int);
int main()
{
    int range;
    cout << "Enter the range: ";
    cin >> range;
    for (int i = 0; i <= range; i++)
    {
        int count = 0;
        int sum = 0;
        int sq = power(i, 2);
        int temp = sq;
        int digit;
        while (temp != 0)
        {
            temp = temp / 10;
            count++;
        }
        for (int j = 1; j <= count; j++)
        {
            digit = sq % 10;
            sum = sum + digit;
            sq = sq / 10;
        }
        if (i == sum)
        {
            cout << i << "is Neon Number"<<"\n";
        }
    }

    return 0;
}
int power(int power, int range)
{

    int multiply = 1;
    for (int i = 1; i <= range; i++)
    {
        multiply = multiply * power;
    }

    return multiply;
}
/**********************************
 * Hence we only have 3 neon numbers i.e. 0,1,9 only
 * 
 * *********************************/