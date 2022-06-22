/* -> is indirection operator used to get data through pointers in structure */

#include <iostream>
using namespace std;
struct Student{
    int age;
}student;

struct Student *ptr = &student;

int main(){
    ptr->age = 18;
    cout << ptr->age << endl;
    return 0;
}