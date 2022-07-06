/*******************
 * Prime Numbers Check Using Boolean Flag
 * ************************************************/

#include <iostream>
using namespace std;
int main()
{
    int range;
    bool t;
    cout << "Enter a range:"
         << "\n";
    cin >> range;
     cout << "Prime Numbers Upto a given range:" << range <<"\n";
  if(range>1){
    for (int i = 2; i <= range; i++)
    {
        t = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                t = false;
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

/*********************************
 * Workings
 * --------------
 * int i = 2 to range say : 4 
 * 
 * i= 2
 * hence j will go to 2 - 1(Not in range)=> t is true 
 * i=3         
 * hence j will go to 2 - 2(only 1 loop)
 *          j =2: 
 *          3%2 !=0 (false) => Hence t is true
 * i=4
 * hence j will go to 2 - 3(only 2 loop)
 *          j =2: 
 *          4%2 ==0 (false) => Hence t is false 
 *          break;
 * 
 * Hence we will print out : 2, and 3 upto range 4
 * 
 * 
 * 
 * 
 * ****************************************/