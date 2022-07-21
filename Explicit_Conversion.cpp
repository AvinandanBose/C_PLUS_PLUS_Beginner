#include<iostream>
using namespace std;
int main(){
    float f = 10.5f; 
    float g = 15.5f; 
    int i = (int) f + (int) g; // explicit conversion→ (data_type) variable_name
    cout<<"The value of i is "<<i<<"\n";
    float h = 25.5f;
    int j = (int) (h-g);// explicit conversion→ (data_type) expression
    cout<<"The value of j is "<<j<<"\n";
    return 0;
}