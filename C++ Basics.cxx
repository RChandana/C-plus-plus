// Basic inheritance 
#include <bits/stdc++.h>
using namespace std;
class Parent{
    public:
    int age_p;
};
class Child : public Parent{
    public: int age_c;
};
int main() {
    Child obj;
    obj.age_p = 50;
    obj.age_c = 20;
    cout << "Age of Child is : " << obj.age_c;
    cout << "\nAge of Parent is : " << obj.age_p;
    return 0;
}


// Understanding public, protected and private mode of inheritance
#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    int x;
    protected:
    int y;
    private:
    int z;
};
class B : public A{
    //cout << "x is public"
    //cout << "y is protected"
    //cout << "z is inaccessible"
};
class C : protected A{
    //cout << "x is protected"
    //cout << "y is protected"
    //cout << "z is inaccessible"
};
class D : private A{
    //cout << "x is private"
    //cout << "y is private"
    //cout << "z is inaccessible"
};
