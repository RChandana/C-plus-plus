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
    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter the numbers : \n";
    for(int i = 0; i < n; ++i)
    cin >> arr[i];
    cout << "Enter the number that you want to search for : \n "; 
    cin >> x;
    for(i = 0; i < n; i++){
        if ( x == arr[i]){
            f = 0;
            break;
        }
    }
        if (f == 0){
        cout << "Your required number " << x << " is found";
        }
        else{
        cout << "Your required number " << x << " not found";
        }
    return 0;
}





// Sorting the elements in acsending order.

#include <iostream>
using namespace std;
int main(){
    int n, x, y;
    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter the numbers : \n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "The array is : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] ;
    }
    cout << "\nThe array in ascending order is : ";
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                y = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = y;
            }
        }
    }
    for (int i = 0; i < n; i++)
     cout << arr[i];
    return 0;
}




// Code merging two arrays and printing them.

#include <iostream>
using namespace std;
int main(){
    int n, m, y;
    cout << "Enter the number of elements(n) : ";
    cin >> n;
    int a = arr[n];
    cout << "Enter the numbers(n) : \n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "The array is : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] ;
    };
    cout << "Enter the number of elements(m) : ";
    cin >> m;
    int b = arr[m];
    cout << "Enter the numbers(m) : \n";
    for(int j = 0; j < m; j++){
        cin >> arr[j];
    }
    cout << "The array is : ";
    for(int j = 0; j < m; j++){
        cout << arr[j] ;
    }
    //cout << "\nThe array in ascending order is : ";
    //for(int i = 0; i < n - 1; i++){
      //  for(int j = 0; j < n - i - 1; j++){
        //    if (arr[j] > arr[j + 1]){
          //      y = arr[j];
            //    arr[j] = arr[j+1];
              //  arr[j+1] = y;
            //}
        //}
    //}
    //for (int i = 0; i < n; i++)
     //cout << arr[i];
    return 0;
}
