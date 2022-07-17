/*********
 * Palindrome Number using Functions 
 * 
 * ****************************************************************/

#include <iostream>
using namespace std;
int countDigits(int);     // function declaration
int reverse(int, int);    // function declaration
int Palindrome(int, int); // function declaration
int main()
{
    int range;
    cout << "Enter a range:"
         << "\n";
    cin >> range;
    for (int i = 1; i <= range; i++)
    {
        int temp = i;
        int k = Palindrome(temp, reverse(temp, countDigits(temp)));
        if (k > 0)
        {
            cout << k << "\n";
        }
    }

    return 0;
}
int countDigits(int i)
{
    int s = 0;
    while (i != 0)
    {
        // a = a%10(is un-necessary just for showing mod op)
        i = i / 10;
        s = s + 1;
    }
    return s;
}
int reverse(int num, int s)
{
    int digit;
    int rev = 0;
    for (int i = 1; i <= s; i++)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    return rev;
}
int Palindrome(int num, int rev)
{
    if (num == rev)
    {
        return rev;
    }
    return 0;
}
