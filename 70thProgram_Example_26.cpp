/****************************************************************
 * Palindromic Numbers :- 
 * ----------------------------------------------------------------
 * A number is equal to its reverse of the number.
 * ****************************************************************/

#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter a number:" << "\n";
    cin >>a;
    int s =0;
    int rev = 0;
    int temp = a;
    int temp1 =a;
    int m;
    while(a!=0){
        //a = a%10(is un-necessary just for showing mod op)
        a = a/10;
        s= s+1;
    }
    for(int i=1; i<=s ; i++){
        m =  temp % 10;
        rev = rev*10 + m;
        temp =  temp/10;
    }
    if(temp1==rev){
        cout << "The number is palindrome" << "\n";
    }
    else{
        cout << "The number is not palindrome" << "\n";
    }
    return 0;
}