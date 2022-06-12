/*
&& =>expression1 && expression 2=>Logical AND => true only if all the operands are true.
|| => expression1 || expression 2=>Logical OR => true if at least one of the operands is true.
! => !expression =>Logical NOT => true only if the operand is false.

*/

#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 10;
    int c = 20;
    if(a==b && b==a ) // <condition = true> and <condition = true>
    {
        cout<<a<<" "<<b<<"\n";
    }
    if(a==b || b==a )// <condition = true> or <condition = true>
    
    {
        cout<<a<<" "<<b<<"\n";
    }
    if( !(c<a) ) // <logical not>
    {
        cout<<c<<"\n";
    }

    return 0;
}
