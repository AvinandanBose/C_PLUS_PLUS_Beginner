/* ********
Armstrong Number : 
A number is an Armstrong number if the sum of the power of its digits is equal to the 
number itself.

*********/

#include<iostream>
using namespace std;
int calcPower(int,int); //function declaration
int main(){
    cout << "Enter a number: ";
    int num, m,n, s=0,arm=0, power=0;
    cin >> num;
    int temp = num;
    int temp2 = num;
    while(temp>0){
        m = temp%10;
        temp = temp/10;
        s = s+1;
    }
    
    for(int i=0;i<s;i++){
        n = num%10;
        arm = calcPower(n,s) + arm;
        num = num/10;
       
    }
    
    if(arm == temp2){
        cout << "The number is an armstrong number." << endl;
    }
    else{
        cout << "The number is not an armstrong number." << endl;
    }
    
    return 0;
}
//function definition
int calcPower(int base, int exponent){
    int result = 1;
    for(int i=0;i<exponent;i++){
        result = result * base;

    }
    return result;

}

/****************************************************************
 * Digits calculation
----------------------------------------------------------------
 Workings:
----------------------------------------------------------------
Suppose num =153
1st process:
m = 153%10 = 3
num = 153/10 = 15
s = 0+1 = 1
----------------------------------------------------------------
2nd process:
----------------------------------------------------------------
m = 15%10 = 5
num = 15/10 = 1
s = 1+1 = 2
----------------------------------------------------------------
3rd process:
----------------------------------------------------------------
m = 1%10 = 1
num = 1/10 = 0
s = 2+1 = 3
----------------------------------------------------------------
Therefore length of digit is : 3
----------------------------------------------------------------
Process 1 : 
Enter a number : 153
length of digits : 3
when int i = 0 to s-1 i.e. 0,1,2
i=0
n =153 % 10 = 3
arm = calcPower(3 * 3 ) + 0
    = 27 
num = num/10 = 153/10 = 15;
---------------------------------------------
Power Calculation
---------------------------------------
int calcPower(base =3,exponent =3){
    int result = 1;
    for (i=0; i < exponent = 3;i++){
        result = 1* base;
        i.e. 
        int i = 0 ; result = 1 * 3 = 3;
        int i = 1 ; result = 3 * 3 =9;
        int i = 1 ; result = 9* 3 = 27; 
    }
    return result = 27;
}
Similarly,
i = 1
n =15 % 10 = 5
arm = calcPower(5 * 3 ) + 27
    = 152
num = 15/10 =1;

i = 2
n =1 % 10 = 1
arm = calcPower(1 * 3 ) + 152
    = 1+152 =153
num = 1/10 =0;

Hence arm = temp2 = 153 is an armstrong number
 * ***************************************************/
