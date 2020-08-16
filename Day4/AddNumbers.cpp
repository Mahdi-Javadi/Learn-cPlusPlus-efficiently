#include <iostream>
using std::cout;
using std::endl;
using std::cin;

// Function prototype
int AddNumbers(int a , int b);

void PrintNumber(int num);

int main(){    
    cout<< "Enter the first number: ";
    int a {0};
    cin >> a;
    PrintNumber(a);
    cout<< "Enter the second number: ";
    int b {0};
    cin >>b;
    PrintNumber(b);
    cout <<"Sumation is :"<<AddNumbers(a,b)<<endl;
    return 0;
}

// Function Declaration
int AddNumbers(int a , int b){
    return a + b;
}
void PrintNumber(int num){
     cout<<"The number is :"<<num<<endl;
}
