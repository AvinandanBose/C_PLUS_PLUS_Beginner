/*Strong Number or Pearson Number or Krishnamurthy Number : "A number is called strong number
or Pearson number or Krishnamurthy number if the sum of the factorial of its digits 
is equal to the number itself."
For Example: 145 is strong number. Since, 1! + 4! + 5! = 145. 
*/   

#include <iostream>
using namespace std;
int main(){
    int range; 
    cout<<"Enter a range :" ;
    cin >> range;

    for(int i=1;i<=range;i++){
        int sum=0,s=0, digit, digit2;
        int temp = i;
        int temp1 = i;
        int temp2 = i;
        while(temp>0){
            digit = temp%10;
            temp = temp/10;
            s = s+1;
        }
        for(int j=1;j<=s; j++){
            digit2 = temp1%10;
            int fact =1;
            for(int k=1;k<=digit2;k++){
                fact = fact * k;
            }   
            sum = sum + fact;
            temp1 = temp1/10;
        }
        if(sum == temp2){
            cout << sum << endl;
        }
    }
        
    return 0;
}