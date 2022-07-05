/*******************
 * Prime Numbers:A natural number that can be divided exactly only by itself and 1.
 * Eg: 2,3,5,7, .... etc. 0 and 1 and negative numbers are not prime numbers.
 ****************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int a;
    int k = 0;
    cout << "Enter the value of a: ";
    cin >> a;
    if(a==0 || a==1 || a<0){
        k=k+1;
    }
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            k = k + 1;
            break;
        }
    }
    if (k == 0)
    {
        cout << "The number is prime";
    }
    else
    {
        cout << "The number is not prime";
    }
}
/****************************************************************
 * Workings
 * ----------------------------------------------------------------
 * 1. Enter the value a: 2
 * 2 !=0 ; 2 !=1 and 2 >0 
 * Hence: 
 * for int i = 2; i <= 2/2 =1 (Not in range)As range must be less than or equal to 2. 
 * Hence: k=0 , hence the number is prime.
 * 
 * 2. Enter the value a: 3
 * 3 !=0 ; 3 !=1 and 3 >0 
 * Hence: 
 * for int i = 2; i <= 3/2 =1 (Not in range)As range must be less than or equal to 2. 
 * Hence: k=0 , hence the number is prime.
 * 
 * 3. Enter the value a: 4
 * 4 !=0 ; 4 !=1 and 4 >0
 * Hence:
 * for int i = 2; i <= 4/2 =2 , In range . 
 * 4%2=0, k= 0+1 =1 (break)
 *  hence the number is not prime.
 * 
 * 4. Enter the value a: 5
 * 5 !=0 ; 5 !=1 and 5 >0
 * Hence:
 * for int i = 2; i <= 5/2 =2 , In range .
 * 5%2=1, false, hence comes out of if scope, hence the number is  prime.
 * 
 * 
 * 4. Enter the value a: 6
 * 6 !=0 ; 6 !=1 and 6 >0
 * Hence:
 * for int i = 2; i <= 6/2 =3 , In range .
 * when i =2
 * 6%2=0, k= 0+1 =1 (break).
 * when i =3
 * 6%3=0, k= 0+1 =1 (break).
 * 
 * Hence not a prime number. etc......
 * 
 * ****************************************************************/