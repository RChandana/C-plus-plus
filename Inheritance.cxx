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





// Multiple Inheritance
#include <iostream>
using namespace std;
class Mobile{
    public:
    Mobile(){ cout << "Mobile Shop\n";}
};
class Gadget{
    public:
    Gadget(){cout << "Mobile is a gadget.";}
};
class Samsung : public Mobile, public Gadget{
};
int main(){
    Samsung obj;
    return 0;
}





// Multi-level Inheritance
#include <iostream>
using namespace std;
class Mobile{
    public:
    Mobile(){ cout << "Mobile Shop\n";}
};
class Gadget : public Mobile{
    public:
    Gadget(){cout << "Mobile is a gadget.";}
};
class Samsung : public Gadget{
};
int main(){
    Samsung obj;
    return 0;
}




//Hierarchical Inheritance

/* More than one subclass is inherited from a single base class. 
i.e. more than one derived class is created from a single base class.*/

#include <iostream>
using namespace std;
class Mobile{
    public:
    Mobile(){ cout << "Mobile Shop\n";}
};
class Apple : public Mobile{
};
class Samsung : public Mobile{
};
int main(){
    Samsung obj1;
    Apple obj2;
    return 0;
}





//Hybrid (Virtual) Inheritance

/*Hybrid Inheritance is implemented by combining more than one type of inheritance. 
For example: Combining Hierarchical inheritance and Multiple Inheritance. */

#include <iostream>
using namespace std;
class Mobile{
    public:
    Mobile(){ cout << "Mobile Shop\n";}
};
class Siri{
    public:
    Siri(){
        cout << "Siri voice assistant is there only in Apple.";
    }
};
class Apple : public Mobile, public Siri{
};
class Samsung : public Mobile{
};
int main(){
    Samsung obj1;
    Apple obj2;
    return 0;
}
