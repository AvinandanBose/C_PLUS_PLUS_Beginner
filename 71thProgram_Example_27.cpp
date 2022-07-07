/****************************************************************
 * Palindromic Numbers :- 
 * ----------------------------------------------------------------
 * A number is equal to its reverse of the number.
 * ****************************************************************/

#include<iostream>
using namespace std;
int main(){
    int range;
    cout << "Enter a range:" << "\n";
    cin >>range;
   cout << "Palindromic numbers upto range:" << range << "are:" << "\n";
    for(int i = 1; i<= range; i++){
        int s =0;
    int rev = 0;
    int temp = i;
    int temp1 =i;
    int temp2 =i;
    int digit;
    while(temp!=0){
        //a = a%10(is un-necessary just for showing mod op)
        temp = temp/10;
        s= s+1;
    }
    for(int i=1; i<=s ; i++){
        digit =  temp1 % 10;
        rev = rev*10 + digit;
        temp1 =  temp1/10;   
    }
    if(rev == temp2){
        cout << i << "\n";

    }

    }
     
    
    return 0;
}