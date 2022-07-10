/*********
 * Buzz Number : A Buzz Number is such a number which is divisible by 7 or ends with 7 . 
 * For example, the following numbers are Buzz Numbers:
 * 14 ,49 7, 27, 127, 727, etc. are Buzz Numbers.
 * ************************************************************************/
#include <iostream>
using namespace std;
int  main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int temp = num;
    int count;
    int digit;
    if(num%7==0){
        cout << "Buzz Number : " << num << "\n";
    }
    else{
        while(temp!=0){
            temp = temp/10;
            count = count+1;
        }
        for(int i=count;i<=count;i++){
            digit = num%10;
            if(digit==7){
                cout << "Buzz Number : " << num << "\n";
                break;
            }
            else{
                cout <<  num <<" is not Buzz Number"<< "\n";
            }
            num = num/10;

        }

           
        
    }
    return 0;
}