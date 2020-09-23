#include <iostream>

using namespace std;

int main()
{
    cout<<"How many integers do you want to enter? ";
    int arr_size {};
    cin >> arr_size;
    int temp{};
    int my_array [arr_size]{};
    for (int i{0}; i< arr_size;i++){
        cout<< "Enter an integer: ";
        cin >> temp;
        my_array[i] = temp;
    }
    
    cout << "Here is the inserted array: ";
    for (int i{0}; i< arr_size;i++){
        cout<< my_array[i]<<" ";
    }
    cout << "\nHere is the inserted array in reverese order: ";
    for (int i{arr_size-1}; i>-1;i--){
        cout<< my_array[i]<<" ";
    }    
    return 0;
}
