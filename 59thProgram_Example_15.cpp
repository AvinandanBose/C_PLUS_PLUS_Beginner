/******************************************************************************
Automorphic Number :- Automorphic Number
****************************************************************/

#include <iostream>
using namespace std;
int main(){
    int range, sq;
    cout<<"Enter a range :";
    cin>>range;
    cout << "Automorphic number/numbers upto:" << range <<"\n";
    for(int i=1 ; i<= range; i++){
        int sq = i*i;
        int c =0;
        int temp = sq;
        int temp1 = i;
        int temp2 = i;
        int digit;
        //Count the digits of the number, suppose n =25 then c=2.
        while(temp1!=0){
            digit = temp1%10;
            temp1 = temp1 / 10;
            c = c+1;
        }
        int sum =0;
        int s =0;
        int m;
        //Find the last digit of the square, suppose n =25, sq = 625, then s=25 .
        //But here it will return the reverse of last digit = 52.
        for(int j=1; j<=c;j++){
             m = temp%10;
             sum = sum * 10 +m;
             temp = temp/10;
             s = s+1;//count the number of digit
             }
        
        int sum1 = 0;
        int r;
        //Reverse the reversed number 
        for(int k=1; k<=s ; k++){
            r = sum % 10;
            sum1 = sum1*10 + r;
            sum = sum/10;
            }
        //Check if the square is automorphic or not.
        if(sum1 == temp2){
            cout<<temp2<<"\n";
        }
    

    }
   
    
 
    return 0;
}
