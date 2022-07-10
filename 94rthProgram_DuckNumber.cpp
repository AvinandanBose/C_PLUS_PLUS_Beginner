/*********
 * Duck Number : A Duck Number is a number which has zeroes present i.e. A duck number
 * is a number which has at least one zero in its decimal representation except the leading 
 * zero. Such as : 3210,1027,7056 , 8430709 are all duck numbers but not
 * 082,0991,0991, etc.
 * ************************************************************************/

#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int temp = num;
    int temp1 = num;
    int temp2 = num;
    int count=0;
    int first_digit = 0;
    int digit;
    int digit1;
    bool q = false;
    while(temp!=0){
        temp = temp/10;
        count = count+1;
    }
    for(int i=1;i<=count;i++){
        digit = temp1%10;
        first_digit = digit;
        temp1 = temp1/10;
    }
    for(int j=1 ; j<=count; j++){
        digit1 = temp2%10;
        temp2 = temp2/10;
        if(digit1==0){
            q = true;
            break;
        }  

    }
    if(first_digit>0 && q==true){
        cout << "Duck Number : " << num << "\n";
    }
    else{
        cout << num << " is not a Duck Number" << "\n";
    }
   
}