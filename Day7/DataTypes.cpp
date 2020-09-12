#include <iostream>

using std::cout;
using std::cin;
using std::endl;
//using namespace std;
int main(){
    char middle_name_character {'h'};
    cout << "Your middle name charachter is " << middle_name_character<<"." <<endl;
    
    cout << "====================INTEGER===================="<<endl;
    int age {12};
    cout <<"I am  "<< age<<" years old.\n";
    short unsigned grade {65};
    cout <<"My grade is "<< grade<< endl;
    long big_number {204514487};
    cout <<big_number<<" is a big number"<<endl;
    long population {7811284993};
    cout <<population<<" poople lives on earth."<<endl;
    cout << "====================FLOATING POINT===================="<<endl;
    float wage {18.5};
    cout << "You earn "<< wage << "$ for an hour."<<endl;
    float Pi {3.14};
    long double pi {3.1415};
    cout << "Pi is "<<Pi<<" in short version but "<<pi<<" in long version."<<endl;
    long double very_big_number {3.5e100};
    cout <<very_big_number<<" is a very big number"<<endl;
    cout << "====================BOOL===================="<<endl;
    bool is_monday {false};
    cout << "Is today monday? "<< is_monday<<endl;
    cout << "====================OVER FLOW===================="<<endl;
    // int overflow = 999999999999999;
    // cout << "The number is 999999999999999 but it displays"<< overflow<< endl; 
    int overflow {999999999999999};
    cout << "The number is 999999999999999 but it displays"<< overflow<< endl;   


// Arrays
    cout<< "I want to print out the elements of my array:\n";
    int my_array [] {10,20,30,40};
    cout<< "Element1_index0:  "<<my_array[0]<<endl;
    cout<< "Element2_index1:  "<<my_array[1]<<endl;
    cout<< "Element3_index2:  "<<my_array[2]<<endl;
    cout<< "Element4_index3:  "<<my_array[3]<<endl;

    return 0;
}
