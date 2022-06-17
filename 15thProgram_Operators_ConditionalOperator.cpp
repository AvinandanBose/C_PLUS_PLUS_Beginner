//TernaryOperator
#include<iostream>
using namespace std;
int main(){
    bool ok = true;
    string name = "True";
    string name2 = "False";
    string name3 = ok ? name : name2;
    cout<<name3<<"\n";
    //OtherExamples
    int a = 10;     
    int b = 10;
    int c = 20;
    int d = a ? b : c;
    cout<<"D = "<<d<<"\n";
    return 0;
}