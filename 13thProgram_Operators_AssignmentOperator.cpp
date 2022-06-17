/*
= is called Asignment Operator.
There are two types of Assignment Operator in C++ :
1. Simple Assignment Operator , Eg: a = b;
2. Compound  Assignment Operator, Eg: a +=b ;
*/

#include <iostream>
using namespace std;
int main(){
    //Simple Assignment Operator

    cout<<"Simple assignment operator"<<"\n";

  int a_1 = 10;
  int b_1 = 12;
  int c_1 = a_1 + b_1;
  cout<<"C_1 = "<<c_1<<"\n";
  a_1 = a_1 % b_1;
  cout<<"A_1 = "<<a_1<<"\n";    
  //etc....
//Compound assignment operator
  //Arithmetic Compound Assignment Operator
  cout<<"Compound assignment operator"<<"\n";
  cout<<"1. Arithmetic Compound Assignment Operator"<<"\n";
  int a = 10;
  a += 1;
  cout<<"A = "<<a<<"\n";
  a -= 2;
  cout<<"A = "<<a<<"\n";
  a *= 2;
  cout<<"A = "<<a<<"\n";
  a /= 2;
  cout<<"A = "<<a<<"\n";
  a %= 2;
  cout<<"A = "<<a<<"\n";

  cout<<"2. Bitwise Compound Assignment Operator"<<"\n";
  int d = 123;
  int e = 43;
  d &= e;
  cout<<"D = "<<d<<"\n";
  d |= e;
   cout<<"D = "<<d<<"\n";
  d ^= e;
   cout<<"D = "<<d<<"\n";
  e <<= 2;
   cout<<"E = "<<e<<"\n";
  e >>= 2;
  cout<<"E = "<<e<<"\n";


}



