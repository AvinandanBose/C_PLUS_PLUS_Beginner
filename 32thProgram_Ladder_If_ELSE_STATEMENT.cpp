#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age > 12 && age < 20){
        cout << "you are a teenaged person. good!";
    }
    else if(age < 13){
        cout << "you will surely reach teen-age!";
    }
    else if(age > 30 && age < 40){
        cout << "you will surely reach middle aged person.";
    }
    else {
        cout << "you are old person.";
    }
    return 0;
}