/*******************
 * Prime Numbers:A natural number that can be divided exactly only by itself and 1.
 * Eg: 2,3,5,7, .... etc. 0 and 1 and negative numbers are not prime numbers.
 ****************************************************************/
#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter an integer:" ;
    cin >> a;
    int c ;
   if(a==0 || a==1 || a<0){
        cout << "Invalid input";
    }
    for(int i=2;i<=a;i++){
        c=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                c= c+1;
            }
        }
    }
    if(c==2){
        cout << "The number is prime";
    }
    else{
        cout << "The number is not prime";
    }
    return 0;
}

/*******************************
 * Workings: 
 * 1. Enter an integer:2
 * 2. 2!=0 ; 2 !=1 and 2 >0
 * Hence:
 * for int i = 2; i <= 2 (i.e. loop will execute only once)
 *   c= 0 
 *   for int j = 1 to 2
 *    when j =1:
 *      if(2%1==0)== true:
 *         c = 0+1 = 1,
 *     when j =2:
 *         if(2%2==0)== true:
 *          c= 1+1 =2 
 * 
 *As c is 2 ; 2 is prime.
 * 
 * 
 * 1. Enter an integer:3
 * 2. 3!=0 ; 3 !=1 and 3 >0
 * Hence:
 * for int i = 2; i <= 3 (i.e. loop will execute only twice)
 * when i =2:
 *   c= 0 
 *   for int j = 1 to 2:
 *    when j =1:
 *      if(2%1==0)== true:
 *         c = 0+1 = 1,
 *     when j =2:
 *         if(2%2==0)== true:
 *         c= 1+1 =2
 *     
 * when i =3:
 * c= 0 
 *   for int j = 1 to 3:
 *    when j =1:
 *      if(3%1==0)== true:
 *         c = 0+1 = 1,
 *     when j =2:
 *         if(3%2!=0)== false:
 *     when j =3:
 *         if(3%3==0)== true:
 *         c= 1+1 =2
 *     
 *As c is 2 ; 3 is prime.
 * 
 * 1. Enter an integer:4
 * 2. 4!=0 ; 4 !=1 and 4 >0
 * Hence:
 * for int i = 2; i <= 4 (i.e. loop will execute only thrice)
 * when i =2:
 *   c= 0 
 *   for int j = 1 to 2:
 *    when j =1:
 *      if(2%1==0)== true:
 *         c = 0+1 = 1,
 *     when j =2:
 *         if(2%2==0)== true:
 *          c= 1+1 =2
 *     
 * when i =3:
 * c= 0 
 *   for int j = 1 to 3:
 *    when j =1:
 *      if(3%1==0)== true:
 *         c = 0+1 = 1,
 *     when j =2:
 *         if(3%2!=0)== false:
 *     when j =3:
 *         if(3%3==0)== true:
 *         c= 1+1 =2
 * 
 * when i =4:
 * c= 0 
 *   for int j = 1 to 4:
 *    when j =1:
 *      if(4%1==0)== true:
 *         c = 0+1 = 1,
 *     when j =2:
 *         if(4%2==0)== true:
 *        c= 1+1 =2
 *     when j =3:
 *         if(4%3!=0)== false:
 *     when j =4:
 *      if(4%4==0)== true:
 *        c= 2+1 =3
 * 
 *     
 *As c is 3 ; 4 is not prime.
 * 
 * ......Hence it goes on........
 * 
 * 
 * ****************************************/