#include<iostream>
using namespace std;
int main(){
    //Integer Constants
    //a.Signed Integer Constants
    int a = 10 ;
    cout<< a << endl;
    //b.unsigned Integer Constants
    unsigned int b = 56u; //U and u for Unsigned 
    unsigned int c = 567U;
    cout<< b << endl;
    cout<< c << endl;

    //Octal Constants 
    int d = 0175; //0 for Octal
    cout<< d << endl;

    //Hexadecimal Constants
    int e = 0xFFFF;//0x for Hexadecimal
    cout<< e << endl;

    //Long Integer Constants

    long f = 7689909L;
    long g = 7689909l;
    long h = 0x34ADL;
    long i = 0xf4A3L;

    cout<< f << endl;
    cout<< g << endl;
    cout<< h << endl;
    cout<< i << endl;

//unsigned long Integer Constants
  unsigned long j = 6578890994UL; 
  unsigned long k = 6578890994ul;
  cout<<j << endl;
  cout<<k<< endl;



    return 0;
}