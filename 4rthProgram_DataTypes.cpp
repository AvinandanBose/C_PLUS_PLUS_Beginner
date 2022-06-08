#include<iostream>
#include<String>
int main()
{
    using namespace std;
    //Primitive Data Types
    int age = 26;//Integer value
    float floating_val1 = 1.0f;//Float value
    float floating_val2= 1.5F;//Float value
    float floating_val3 = 1.0;//Float value
    double distance = 12.6D ; //floating point value
    double distance1 = 12.67d ; //floating point value
    double distance2 = 12.672e4; //floating point value
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
    cout << "Distance 1 is:" << distance1 << "\n" ;
    cout << "Distance 2 is:" << distance2 << "\n" ;
    cout << "Is your age < 25?:"<< ok << "\n";
    cout<< "floating_val1 =" << floating_val1<<"\n";
    cout<< "floating_val2 =" << floating_val2<<"\n";
    cout<< "floating_val3 =" << floating_val3<<"\n";
    return 0;


}