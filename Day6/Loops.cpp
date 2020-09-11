#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main(){
    cout<< "======================\n";
    cout<< "EXAMPL1- WHILE\n";  
    cout<< "Enter an integer number:";
    int num {0};
    cin >> num;
    while(num !=0){
        cout<< num<<endl;
        num--;
    }
    cout<< "======================\n";
    cout<< "EXAMPL2- FOR\n";  
    for (int i {1}; i<6 ; i++){
        cout << i<<endl;        
    }
    cout<< "======================\n";
    cout<< "EXAMPL3- DO ... WHILE\n";  
    int a {15};
    do{
        cout << "Hi!!"<<endl;
        cout << "a is "<<a <<" , which is not smaller than 10!."
        << "But the statement still executes!" 
        <<endl;
    }while(a <10);    
    return 0;
}

