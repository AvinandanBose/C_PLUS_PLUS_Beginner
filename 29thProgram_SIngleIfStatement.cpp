/*
if (condition){
    //statement
}
*/

#include<iostream>
using namespace std;
int main(){
    int age ;
    cout << "Enter your age: " ;
    cin >> age ;
    if(age>12 && age<20){
        cout << "you are teen aged person. good!";
    }

    return 0;
}