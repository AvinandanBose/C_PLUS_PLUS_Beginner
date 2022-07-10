/*********
 * Duck Number : Duck Number upto A Range.
 * ************************************************************************/
#include <iostream>
using namespace std;
int main(){
    int range;
    cout << "Enter the range : ";
    cin >> range;
    for (int i = 0; i<=range; i++){
        int temp = i;
        int temp1 = i;
        int temp2 = i;
        int count=0;
        int first_digit = 0;
        int digit;
        int digit1;
        bool q = false;
        while(temp!=0){
            temp = temp/10;
            count = count+1;
        }
        for(int j=1;j<=count;j++){
            digit = temp1%10;
            first_digit = digit;
            temp1 = temp1/10;
        }
        for(int k=1 ; k<=count; k++){
            digit1 = temp2%10;
            temp2 = temp2/10;
            if(digit1==0){
                q = true;
                break;
            }  
        }
        if(first_digit>0 && q==true){
            cout << "Duck Number : " << i << "\n";
        }
        
    }

    return 0;
}