/* . is member selection operator used to get data selecting its member variables
 in structure */

#include <iostream>
using namespace std;
struct Student{
    int age;//member variables of structures
}student;

int main(){
    student.age = 18;
    cout << student.age << endl;
    return 0;
}