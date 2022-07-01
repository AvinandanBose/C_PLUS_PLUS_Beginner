/* ********
Armstrong Number : 
A number is an Armstrong number if the sum of the cubes of its digits is equal to the 
number itself.

*********/

#include<iostream>
using namespace std;
int calcPower(int,int); //function declaration
int main(){
    cout << "Enter a range ";
    int num;
    cin >> num;
    for(int i=1;i<num;i++){
        int temp = i;
        int temp2 = i;
        int temp3 = i;
        int s = 0;
        int arm =0;
        int m;
        int n;
        while(temp>0){
        m = temp%10;
        temp = temp/10;
        s = s+1;
        }
         for(int j=1;j<=s;j++){
            n = temp2%10;
            arm = calcPower(n,s) + arm;
            temp2 = temp2/10; 
    }
     if(arm == temp3){
        cout << arm << endl;
       }
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