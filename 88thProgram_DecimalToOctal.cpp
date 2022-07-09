/*********
 * Decimal to Octal: 
 * Given a decimal number, convert it to Octal number.
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
    int octal = 0;
    int rem;
    while(temp!=0){
        temp = temp/8;
        c = c+1;
    }   
    for(int i=1; i<=c; i++){
        rem = temp2%8;
        octal  = octal  + rem*base;
        temp2 = temp2/8;
        base = base*10;
    }
    cout << "Octal Value of :" << num<< "is :" <<octal << "\n";
    
    return 0;
}


/****************************************************************
 * Working of the above snippet:
 * ***************************************************************
 * num = 8 , temp = temp2 = num =8;
 * c = 0;
 * base =1;
 * octal = 0;
 * while(temp!=0){
 *   temp = 8/2 = 4;
 *  c = 0+1 =1;
 * 
 *     Again, 
 *      temp = 4/2 = 2;
 *      c = 1+1 =2;
 * Again, 
 *      temp = 2/2 = 1;
 *      c = 2+1 =3;
 * Again, 
 *      temp = 1/2 = 0;
 *      c = 3+1 =4;
 * 
 * }
 * 
 * for int i = 1 to 4 ;
 *      i = 1;
 *          rem = 8%2 = 0;
 *         octal = 0 + 0 x 1 =0;
 *        temp2 = 8/8 = 1;
 *       base = 1*10 = 10;
 * 
 *      i =2;
 *         rem = 1%2 = 1;   
 *        octal = 0 + 1 x 10 =10;
 *       temp2 = 1/8 = 0;
 *     base = 10*10 = 100;
 * 
 *  i =3;
 *         rem = 0%2 = 0;   
 *        octal = 10 + 0 x 100 =10;
 *       temp2 = 0/8 = 0;
 *     base = 10*10*10 = 1000;
 * 
 *  i =4;
 *         rem = 0%2 = 0;   
 *        octal = 10 + 0 x 1000 =10;
 *       temp2 = 0/8 = 0;
 *     base = 10*10*10 = 1000;
 * 
 * Hence octal = 10 
 * Note : Base of Octal is 8 and Decimal is 10.
 * 
 * ****************************************************************/