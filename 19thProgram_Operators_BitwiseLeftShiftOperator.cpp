#include<iostream>
using namespace std;
int main(){
    int a = 3;
    int b = a << 1;
    cout<<"(BitWise LeftShift of positive number 1 bit)B = "<<b<<"\n";
    int c = -3;
    int d = c << 1;
    cout<<"(BitWise LeftShift of negative number 1 bit)D = "<<d<<"\n";
    return 0;
}

/*********************************************************
 * +ve Number
 * -------------------------------------------------------
 * int a = 3 => 11
 * 11 can be represented as 0000 0011 in binary eight bit format
 * Therefore left shift of 1 bit will give output as:
 *      0000 0011
 *     <<1
 *     0000 011[0]→This is added
 *  Hence result is : 0000 0110 => 6
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
 * Now left shift of 1 bit will give output as:
 * 
 *     [Discarded]→1111 1101
 *                 <<1
 *                 1111 101[0]→ Added
 * ------------------------------------
 *                 1111 1010
 * ---------------------------------------
 * 
 * Now 1111 1010 is 2's complement of +6 i.e. -6 
 * 
 * 6 = 0000 0110
 * One's complement of 6 is : 1111 1001
 * Two's complement of 6 is : +      1
 * -------------------------------------------------------
 *                             1111 1010
 * -----------------------------------------------------
 * 
 * We can also reverse the process i.e. : -3 << 1 => 1111 1010
 * 1111 1010 
 * -       1
 * --------------
 * 1111 1001
 * ----------
 * Now reverse the 1's complement process => 0000 0110 => 6 i.e. Ans: -6
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