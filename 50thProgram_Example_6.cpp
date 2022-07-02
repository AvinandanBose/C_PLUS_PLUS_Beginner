/*Strong Number or Pearson Number or Krishnamurthy Number : "A number is called strong number
or Pearson number or Krishnamurthy number if the sum of the factorial of its digits 
is equal to the number itself."
For Example: 145 is strong number. Since, 1! + 4! + 5! = 145. 
*/   

#include <iostream>
using namespace std;
int main(){
    int num, sum=0,s=0, digit, digit2;
    cout<<"Enter a integer :" ;
    cin >> num;
    int temp = num;
    int temp1 = num;
    while(num>0){
        digit = num%10;
        num = num/10;
        s = s+1;
    }
    
    for(int i=1;i<=s; i++){
        digit2 = temp%10;
        int fact =1;
        for(int j=1;j<=digit2;j++){
            fact = fact * j;
            
        }   
        sum = sum + fact;
        temp = temp/10;
    }
    if(sum == temp1){
        cout << "The number is a strong number";
    }
    else{
        cout << "The number is not a strong number";
    }

      
    return 0;
}

/****************************************************************
 *  Working
 * 
 * input = 145
 * fact = 1
 * count of digit = 3
 * for int 1 to 3
 * digit = 145 % 10 = 5
 *       for int 1 to 5:
 *               fact = 1 x 1 = 1
 *            int 2 to 5:
 *                fact = 1 x 2 = 2
 *             int 3 to 5:
 *               fact = 2 x 3 = 6 
 *             int 4 to 5:
 *              fact = 6 x 4 = 24
 *             int 5 to 5:
 *              fact = 24 x 5 = 120
 *          sum = 0 + 120 = 120
 *          temp = 145/10 = 14 
 * 
 * for int 2 to 3
 * digit = 14 % 10 = 4
 *       for int 1 to 4:
 *               fact = 1 x 1 = 1
 *            int 2 to 5:
 *                fact = 1 x 2 = 2
 *             int 3 to 5:
 *               fact = 2 x 3 = 6 
 *             int 4 to 5:
 *              fact = 6 x 4 = 24
 *          sum = 120 + 24 = 144
 *          temp = 14/10 = 1
 * 
 * for int 3 to 3
 * digit = 1 % 10 = 1
 *       for int 1 to 1:
 *               fact = 1 x 1 = 1 
 *          sum = 144 + 1 = 145
 *          temp = 1/10 = 0
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * ***************************************************************/
