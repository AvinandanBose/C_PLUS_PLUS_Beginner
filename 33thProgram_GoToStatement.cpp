#include<iostream>
using namespace std;
int main(){
    int age;
    MyName: //Label for goto statement
    cout<<"Enter your age:";
    cin>>age;
    if(age<0){
        cout<<"Invalid age"<<"\n";
        
    }
    else if(age<18){
        cout<<"You are not eligible to vote"<<"\n";
    }
    else{
        cout<<"You are eligible to vote"<<"\n";
    }

    goto MyName;
    return 0;
}