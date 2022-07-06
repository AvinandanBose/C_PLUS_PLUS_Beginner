/****************************************************************
 * Composite Numbers: Numbers formed by Multiplying two unique or more Prime Numbers.
 * ********************************/
#include <iostream>
using namespace std;
int main()
{
    int range;
    bool t;
    cout << "Enter a range:"
         << "\n";
    cin >> range;
     cout << "Composite Numbers Upto a given range:" << range <<"\n";
  if(range>1){
    for (int i = 2; i <= range; i++)
    {
        t = false;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                t = true;
                break;
                
            }
        }
        if (t == true)
        {
            cout << i << "\n";
        }
    }
  }
  else{
     cout << "Invalid range";
  }
    return 0;
}