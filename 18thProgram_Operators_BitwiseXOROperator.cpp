#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 12;
    int c = a ^ b;
    cout<<"(BitWise XOR)C = "<<c<<"\n";
    return 0;
}

/*********************************************************
 * int a = 10 => 1010
 * int b = 12 => 1100
 * int c = a ^ b => 1010
 * 
 * Truth Table for Bitwise XOR Operator
 * a | b | Result
 * 0 | 0 | 0
 * 0 | 1 | 1
 * 1 | 0 | 1
 * 1 | 1 | 0
 * 
 * 
 * 
 * 
 * 
 * ******************************************************/