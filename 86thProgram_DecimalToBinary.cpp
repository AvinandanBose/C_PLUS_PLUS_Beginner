/*********
 * Decimal to Binary: 
 * Given a decimal number, convert it to binary number.
 * ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int num ;
    cout << "Enter the number : ";
    cin >> num;
    int temp = num;
    int temp2 = num;
    int c = 0;
    int base =1;
    int binary = 0;
    int rem;
    while(temp!=0){
        temp = temp/2;
        c = c+1;
    }   
    for(int i=1; i<=c; i++){
        rem = temp2%2;
        binary = binary + rem*base;
        temp2 = temp2/2;
        base = base*10;
    }
    cout << "Binary Value of :" << num<< "is :" << binary << "\n";
    
    return 0;
}


/****************************************************************
 * Working of the above snippet:
 * ***************************************************************
 * num = 2 , temp = temp2 = num =2;
 * c = 0;
 * base =1;
 * binary = 0;
 * while(temp!=0){
 *   temp = 2/2 = 1;
 *  c = 0+1 =1;
 * 
 *     Again, 
 *      temp = 1/2 = 0;
 *      c = 1+1 =2;
 * 
 * }
 * 
 * for int i = 1 to 2 ;
 *      i = 1;
 *          rem = 2%2 = 0;
 *         binary = 0 + 0 x 1 =0;
 *        temp2 = 2/2 = 1;
 *       base = 1*10 = 10;
 * 
 *      i =2;
 *         rem = 1%2 = 1;   
 *        binary = 0 + 1 x 10 =10;
 *       temp2 = 1/2 = 0;
 *     base = 10*10 = 100;
 * 
 * Hence binary = 10 
 * Note : Base of Binary is 2 and Decimal is 10.
 * 
 * 
 * 
 * 
 * 
 * ****************************************************************/