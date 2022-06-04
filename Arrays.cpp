// Accessing values of an array

#include <iostream>
using namespace std;
int arr[5] = {10,20,30,40,50};
int main ()
{
cout << arr[3];
return 0;
}




// Taking user input and diplaying the array

#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout << "Enter five numbers : \n";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    cout << "The array is : ";
    for(int i = 0; i < 5; i++){
        cout  << arr[i] ;
    }
    return 0;
}
