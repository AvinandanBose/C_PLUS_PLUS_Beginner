#include<iostream> //perprocessor directive and .h is header file
int main()//function declarator
{ //begin of function 

//cout is c++ output stream
    std::cout << "Hello World"<<"\n";// Prints Hello World
    std::cout<< 3.14;
    std::cout<<"\n"; //whitespace character for new line

//cin is c++ input stream
    char a[200] ;
    std::cout<<"Enter your name: ";
    std::cin >> a;
    std::cout<<"Your name is: ";
    std::cout <<a; 


    return 0;  

} // end of function

