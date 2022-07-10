/*********
 * Buzz Number : A Buzz Number is such a number which is divisible by 7 or ends with 7 . 
 * For example, the following numbers are Buzz Numbers:
 * 14 ,49 7, 27, 127, 727, etc. are Buzz Numbers.
 * ************************************************************************/
#include <iostream>
using namespace std;
int  main(){
    int range;
    cout << "Enter the range : ";
    cin >> range;
    for (int i=1;i<=range ; i++){
        int temp = i;
        int temp1 = i;
        int count;
        int digit;
        if(i%7==0){
               cout << "Buzz Number : " <<i<< "\n";
        }
        else if(i%7!=0){
            while(temp!=0){
                temp = temp/10;
                count = count+1;
            }
            for(int j=count;j<=count;j++){
                digit = temp1%10;
                if(digit==7){
                    cout << "Buzz Number : " << temp1 << "\n";
                    break;
                }
                
                temp1 = temp1/10;

            }

        }
    }

    
    return 0;
}