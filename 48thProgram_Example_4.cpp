//Reverse of a number
#include<iostream>
using namespace std;
int main(){
    cout << "Enter a number: ";
    int num;
    int m;
    int digit;
    int s=0;
    int rev = 0;
     //Input
    cin >> num;
    int temp = num;
    int temp1 = num;
    int temp2 = num;
    while(temp>0){
        m = temp%10;
        temp = temp/10;
        s = s+1;
    }
    for(int i = 1 ; i<=s; i++){
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;

    }
    cout << " The reverse of number:"<<temp2 <<"is:" << rev;
    return 0;
}

/* Workings ************************************************
number  = 123

calculation of length:
Process 1
----------------------------------------------------------------
m = 123%10 = 3 (remainder)
temp = 123/10 = 12(quotient)
s  = 0+1 = 1 

Process 2
----------------------------------------------------------------
m = 12%10 = 2 (remainder)
temp = 12/10 = 1(quotient)
s  = 1+1 = 2

Process 3
----------------------------------------------------------------
m = 1%10 = 1 (remainder)
temp = 1/10 = 0(quotient)
s  = 2+1 = 3 

reverse of a number Workings

range : 1 to 3
digit = 123 %10 = 3 
rev = 0 * 10 +3 = 3
num = 123/10 = 12 

digit = 12 % 10 = 2 
rev = 3 * 10 + 2 = 30 +2 = 32 
num = 12 / 10 = 1 

digit = 1 % 10 = 1 
rev = 32 * 10 + 1 = 320+ 1 = 321 
num = 1/10 = 0 

********************************************/



