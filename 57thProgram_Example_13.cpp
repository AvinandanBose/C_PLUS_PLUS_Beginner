/********* 
 * Least Common Factor/ Least Common Multiple/   :LCM → 
 * 16 & 8 → 2 x 2 x 2 x 2 x 1 = 16
 * Hence LCM(16,8) = 16
 * 
 * LCM = (a*b)/GCD(a,b) [Formula]
 * *******************/
#include<iostream>
using namespace std;
int main(){
    int a,b, smallest, hcf, lcm;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    //find smallest among two numbers 
    if(a>b){
        smallest = b;
    }
    else{
        smallest = a;

    }
    //find GCD of two numbers
    for(int i=1;i<=smallest;i++){
        if(a%i==0 && b%i==0){
            hcf = i;
        }
    }
    lcm = (a*b)/hcf;
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm;
    return 0;
}

/****************************************************************
 * Workings:
 * ---------------------------------------------------------------
 * a = 16; b = 8
 * smallest = 8
 * for i = 1 to 8 :
 *  when i = 1 : 
 *    if(16%1==0 && 8%1==0) == True , hence hcf = 1
 *  when i = 2 :
 *     if(16%2==0 && 8%2==0) == True , hence hcf = 2
 * 
 *   when i = 3 :
 *      if(16%3==1 && 8%3==2) == False , 
 *   when i = 4 :
 *      if(16%4==0 && 8%4==0) == True , hence hcf = 4
 *   when i = 5 :
 *      if(16%5==1 && 8%5==3) == False , 
 *   when i = 6 :
 *     if(16%6==4 && 8%6==1) == False , 
 *   when i = 7 :
 *      if(16%7==2 && 8%7==1) == False ,
 *  when i = 8 :
 *       if(16%8==0 && 8%8==0) == True , hence hcf = 8
 * 
 * Hence hcf = 8
 * 
 * lcm = (a*b)/GCD(a,b) → (16 * 8)/ 8 = 16
 *     
 * 
 * 
 * 
 * ***************************************************************/