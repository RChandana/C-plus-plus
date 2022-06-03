/* try: represents a block of code that can throw an exception.

catch: represents a block of code that is executed when a particular exception is thrown.

throw: Used to throw an exception. Also used to list the exceptions that a function throws, but doesn’t handle itself.*/


// Simple Code for Exception Handling using try-catch block.

#include <iostream>
using namespace std;
int main(){
    int x = -1;
    cout << "Before try \n";
    try{
        cout << "Inside try \n";
        if (x < 0){
            throw(x);
            cout << "After throw (Never executed) \n";
        }
    }
    catch(int x){
        cout << "Exception Caught \n";
    }
    cout << "After catch (Will be executed) \n";
    return 0;
}
