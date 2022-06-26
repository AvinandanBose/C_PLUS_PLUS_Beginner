#include<iostream>
using namespace std;
int  main(){
    int age ;
    cout << "Enter your age:";
    cin >> age;
    if(age>12 && age<20){
        cout<<"you are a teenaged person. good!";
    }
    else{
        cout<<"you are not a teenaged person.";
    }
    return 0;

    
}