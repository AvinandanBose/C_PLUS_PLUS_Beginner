/*********
 * Neon Number : A neon number is that where sum of digits of square 
 * of the number is equal to the number itself.
 * Suppose: - n = 9 = 9^2 = 81 = 8+1 =9 
 * ****************************************************************/
#include <iostream>
using namespace std;
int power(int , int);
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int count = 0;
    int sum =0;
    int sq = power(num,2);
    int temp = sq;
    int digit;

    while(temp != 0){
        temp = temp/10;
        count++;
    }
    for(int i =1; i<=count; i++){
         digit = sq%10;
         sum = sum + digit; 
         sq = sq / 10;
       
    }
    if(num == sum){
        cout<< num <<"is Neon Number";
    }
    else{
        cout<< num << "is Not Neon Number";    
    }

   
    
    return 0;
}
int power( int power, int range){
    
    int multiply =1;
    for(int i=1 ;i<=range;i++){
        multiply = multiply*power;
    }
    
    return multiply;
}