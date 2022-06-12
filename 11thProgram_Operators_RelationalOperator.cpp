/*
Relational Operators
----------------------------------------------------------------
==	Is Equal To
!=	Not Equal To
>	Greater Than
<	Less Than
>=	Greater Than or Equal To
<=	Less Than or Equal To
----------------------------------------------------------------
*/

#include<iostream>
using namespace std; //global scope
int main(){
    int x = 10;
    int y = 10;
    if( x==y) //TRUE if it match otherwise it is false
    {
        cout<<"x is equal to y"<<"\n";
    }
    int p = 20;
    int q = 10;
    if(p!=q){
        cout<<"p is not equal to q"<<"\n";
    }
    if(q<p){
        cout<<"q is less than p"<<"\n";
    }
    if(p>q){
        cout<<"p is greater than q"<<"\n";
    }
    int s = 20;
    int t = 21;
    int u = 20;

    if(s<t)
    //less than 
    {
    cout<< "s is less than t"<<"\n";
    }

    if(s<=u)
    //less than or equal to
    {
        cout<<"s is less than or equal to u"<<"\n";
    }

    if(t>s)
    //greater than
    {
        cout<<"t is greater than s"<<"\n";
    }
    if(s>=u)
    //greater than or equal to
    {
        cout<<"s is greater than or equal to u"<<"\n";
    }

}
