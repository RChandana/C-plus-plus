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


// User input for the max array size

#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    cin >> n;
    cout << "Enter the numbers : \n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "The array is : ";
    for(int i = 0; i < n; i++){
        cout  << arr[i] ;
    }
    return 0;
}








// Searching a number in an array.

#include <iostream>
using namespace std;
int main(){
    int n, x, i, f = 1;
    cin >> n;
    int arr[n];
    cout << "Enter the numbers : \n";
    for(int i = 0; i < n; ++i)
    cin >> arr[i];
    cout << "Enter the number that you want to search for : "; 
    cin >> x;
    for(i = 0; i < n; i++){
        if ( x == arr[i]){
            cout << "Your number is : " << x;
            f = 0;
            break;
        }
    }
        if (f == 0){
        cout << "found";
        }
        else{
        cout << "not found";
        }
    return 0;
}
