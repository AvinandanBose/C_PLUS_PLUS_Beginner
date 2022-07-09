#include <iostream>
using namespace std;
int main()
{
    int range;
    cout << "Enter a range:"
         << "\n";
    cin >> range;
    cout << "Prime Palindromic numbers upto range:" << range << "are:"
         << "\n";
    for (int i = 2; i <= range; i++)
    {
        int s = 0;
        int count;
        int rev = 0;
        int temp = i;
        int temp1 = i;
        int temp2 = i;
        int digit;
        while (temp != 0)
        {
            temp = temp / 10;
            s = s + 1;
        }
        for (int i = 1; i <= s; i++)
        {
            digit = temp1 % 10;
            rev = rev * 10 + digit;
            temp1 = temp1 / 10;
        }
        if (rev == temp2)
        {
            count = 0;
            for (int j = 2; j <= temp2 / 2; j++)
            {
                if (temp2 % j == 0)
                {
                    count = count + 1;
                    break;
                }
            }
            if (count == 0)
            {
                cout << temp2 << "\n";
            }
        }
    }

    return 0;
}