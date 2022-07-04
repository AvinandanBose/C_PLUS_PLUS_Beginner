/******************************************************************************
Automorphic Number :- Automorphic Number is a number whose square's last digit 
are equal to the number itself.

i.e. 25 = 25 x 25 = 625 and 625 is automorphic number i.e. 
last digit of 625 is 25.
Hence 25 is an automorphic number . 
Similarly , 5 = 5 x 5 = 25 hence 5 is an automorphic number. 
****************************************************************/

#include <iostream>
using namespace std;
int main(){
    int n, sq;
    cout<<"Enter a number :";
    cin>>n;
    sq = n * n;
    int c =0;
    int temp = sq;
    int temp1 = n;
    int digit;
    //Count the digits of the number, suppose n =25 then c=2.
    while(n!=0){
        digit = n%10;
        n = n / 10;
        c = c+1;
    }
    
    int sum =0;
    int s =0;
    int m;
    //Find the last digit of the square, suppose n =25, sq = 625, then s=25 .
    //But here it will return the reverse of last digit = 52.
    for(int i=1; i<=c;i++){
        m = temp%10;
        sum = sum * 10 +m;
        temp = temp/10;
        s = s+1;//count the number of digit
    }
    int sum1 = 0;
    int r;
//Reverse the reversed number 
   for(int i=1; i<=s ; i++){
    r = sum % 10;
    sum1 = sum1*10 + r;
    sum = sum/10;
    }
    //Check if the square is automorphic or not.
    if(sum1 == temp1){
        cout<<"The number is automorphic";
    }
    else{
        cout<<"The number is not automorphic";
    }
    return 0;
}

/*******************************************************************************
 * Working of the program :-
 * 
 * Enter a number :25
 * sq = 25 x 25 = 625 
 * c=0 
 * temp = sq =625
 * temp1 = n = 25
 * 
 * count the digits of the number, suppose n =25 then c=2.
 * As we have to see the number exists in its squares last digits 
 * while n!=0 
 *    digit= n % 10 = 25 % 10 = 5
 *    n = n / 10 = 25 / 10 = 2
 *    c = c+1 = 0+1 = 1
 * 
 *    digit= n% 10 = 2 % 10 = 2
 *    n=  n / 10 = 2 / 10 = 0
 *    c = c+1 = 1+1 = 2
 * 
 *  As n =0 , it terminates the loop.
 * 
 * Find the last digit of sq
 *    int 1 to 2 :
 *      m = temp % 10 = 625 % 10 = 5
 *     sum = sum * 10 + m = 0 * 10 + 5 = 5
 *    temp = temp/10 = 625/10 = 62
 *    s = s+1 = 0+1 = 1
 * 
 *   int 2 to 2 :
 *     m = temp % 10 = 62 % 10 = 2
 *    sum = sum * 10 + m = 5 * 10 + 2 = 52
 *    temp = temp/10 = 62/10 = 6
 *    s = s+1 = 1+1 = 2
 * Hence we get sum = 52. 
 * 
 * Reverse the reversed number
 *   int 1 to 2 :
 *    r = sum % 10 = 52 % 10 = 2
 *    sum1 = sum1*10 + r = 0*10 + 2 = 2
 *    sum = sum/10 = 52/10 = 5
 *    
 * 
 *    int 2 to 2 :
 *    r = sum % 10 = 5 % 10 = 5
 *    sum1 = sum1*10 + r = 2*10 + 5 = 25
 *    sum = sum/10 = 5/10 = 0
 *   
 * Hence sum1 = temp1 = 25 , hence it is automorphic number.
 *  
 * ***************************************************/