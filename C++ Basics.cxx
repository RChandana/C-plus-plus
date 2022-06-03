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
