#include <iostream>
using namespace std;

class Student {
public:
    static int count; 
    int n;  
    Student(int n){
        this->n=n;  // instance variable
           // static variable
    }
};

int Student::count = 0;  // definition

int main() {
    Student s1(1), s2(2);

    s1.count++;
    // s2.count++;
cout << s1.n << " " << s1.count << endl;  // 2 2
cout << s2.n << " " << s2.count << endl;  // 2 2
    // cout << Student::count << endl;  // 2
}