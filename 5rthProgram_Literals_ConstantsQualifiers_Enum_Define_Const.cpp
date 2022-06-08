#include<iostream>

int main(){
    enum fruit{
        Apple=12,
        Banana=11,
        Grapes = 13,
    
};

fruit apple  = Apple;
fruit banana = Banana;
fruit grapes = Grapes;

    using namespace std;
    #define MAX_SIZE 100; //define preprocessor directive
    const float PI = 3.14159;
    const int TRUE = 1;
    const int FALSE = 0;
    cout << PI << "\n";
    cout << TRUE << "\n";
    cout << FALSE << "\n";
    cout << MAX_SIZE <<"\n";
    cout << apple << "\n";
    cout << banana << "\n";
    cout << grapes<< "\n";
   
}