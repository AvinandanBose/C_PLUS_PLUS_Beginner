#include<iostream>
#include<String>
int main()
{
    using namespace std;
    //Primitive Data Types
    int age = 26;//Integer value
    double distance = 12.6 ; //floating point value
    char grade = 'A'; //character value
    string str ; //String value under String header 
    bool ok = false; //takes 
    cout << "Enter your first name:";
    cin >> str ;
    cout << "Your first name is : " << str << "\n" ;
    char name[200] ; //String is an array of characters
    cout << "Enter your surname:";
    cin >> name ;
    cout << "Your surname is : " << name << "\n" ; 
    cout << "Age is:" << age << "\n" ;
    cout << "Distance is:" << distance << "\n" ;
    cout << "Is your age < 25?:"<< ok << "\n";
    return 0;


}