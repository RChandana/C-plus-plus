// Compile-time Polymorphism

// Function Overloading 
/* When there are multiple functions with same name but different parameters then these functions are said to be overloaded. 
Functions can be overloaded by change in number of arguments or/and change in type of arguments.*/

#include <iostream>
using namespace std;
class Main{
    public:
    void func(int x){
        cout << "Integer value of x is : " << x << endl;
    };
    public:
    void func(double x){
        cout << "Double value of x is : " << x << endl;
    };
    public:
    void func(int x, int y){
        cout << "Integer value of x : " << x << "\nInteger value of y : " << y << endl;
    };
};
    int main(){
        Main obj;
        
        obj.func(10);
        obj.func(10.50);
        obj.func(20, 30);
        return 0;
}
