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
int main(){
    int num;
    cout<<"Enter a number :" ;
    cin >> num;
    int sum = 0;
    for(int i=1;i<=num;i++){
        if(num%i == 0 && i != num){
            sum = sum + i;
        }
    }
    if(sum == num){
        cout << sum << " is a Perfect Number" << endl;
    }
    else{
        cout << sum << " is Not a Perfect Number" << endl;
    }
    return 0;
}

/*******************************
 * Working
 * --------------------------------
 * num = 6
 * sum = 0
 * for int i = 1 to 6 :
 *     if 6%1 == 0 and 1 != 6 (true) :
 *        sum = 0 + 1 = 1
 *      if 6% 2== 0 and 2!= 6 (true):
 *         sum = 1 + 2 = 3
 *      if 6% 3== 0 and 3!= 6 (true):
 *         sum = 3 + 3 = 6
 *     if 6% 4== 2 (false)and 4!= 6 (true):
 *     if 6% 5== 1 (false)and 5!= 6 (true):
 *     if 6% 6== 0 (true)and 6!= 6 (false):   
 * *******************************/
