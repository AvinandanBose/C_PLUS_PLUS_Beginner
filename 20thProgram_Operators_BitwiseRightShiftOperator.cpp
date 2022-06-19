#include<iostream>
using namespace std;
int main(){
    int a = 3;
    int b = a >> 1;
    cout<<"(BitWise RightShift of positive number 1 bit)B = "<<b<<"\n";
    int c = -3;
    int d = c >> 1;
    cout<<"(BitWise RightShift of negative number 1 bit)D = "<<d<<"\n";
    return 0;
}

/*********************************************************
 * +ve Number
 * -------------------------------------------------------
 * int a = 3 => 11
 * 11 can be represented as 0000 0011 in binary eight bit format
 * Therefore right shift of 1 bit will give output as:
 *           0000 0011
 *           >>1
 *    Added →[0]000 0001
 *  Hence result is : 0000 0001 => 1
 * ---------------------------------------
 * -ve Number
 * -------------------------------------------------------
 * int a = -3 
 * Sign bit of -3 is :
 * 1000 0011
 * 
 * One's complement of 3 is : 1111 1100
 * Two's complement of 3 is : +       1
 * -------------------------------------------------------
 *                             1111 1101
 * -----------------------------------------------------
 * 
 * Now right shift of 1 bit will give output as:
 * 
 *                1111 1101→[Discarded]
 *                 >>1
 *               Added→[1]111 1110
 * ------------------------------------
 *                 1111 1110
 * ---------------------------------------
 * 
 * Now 1111 1010 is 2's complement of +2 i.e. -2 
 * 
 * 2 = 0000 0010
 * One's complement of 2 is : 1111 1101
 * Two's complement of 2 is : +       1
 * -------------------------------------------------------
 *                            1111 1110
 * -----------------------------------------------------
 * 
 * We can also reverse the process i.e. : -3 >> 1 => 1111 1110
 * 1111 1110 
 * -       1
 * --------------
 * 1111 1101
 * ----------
 * Now reverse the 1's complement process =>  1111 1101=> 0000 0010 =>2 i.e. Ans: -2
 * 
 * Addition Rule of Binary Digit
 * a |b | Result | Carry
 * 0 |0 | 0      | 0
 * 0 |1 | 1      | 0
 * 1 |0 | 1      | 0
 * 1 |1 | 0      | 1
 * 
 *  Subtraction Rule of Binary Digit
 * a |b | Result | Borrow
 * 0 |0 | 0      | 0
 * 0 |1 | 1      | 1
 * 1 |0 | 1      | 0
 * 1 |1 | 0      | 0
 * 
 * 
 * ******************************************************/