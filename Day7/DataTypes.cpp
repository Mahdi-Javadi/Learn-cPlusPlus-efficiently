#include <iostream>

using std::cout;
using std::cin;
using std::endl;
//using namespace std;
int main(){
    char middle_name_character {'h'};
//    cout << "Enter your middle name charachter: ";
//    cin >> middle_name_character >>endl;
    cout << "Your middle name charachter is " << middle_name_character<<"." <<endl;
    
    cout << "========================================"<<endl;
    int age {29};
    cout << "Your age is "<<age<<"."<<endl;
    cout << "========================================"<<endl;
    float wage {18.5};
    cout << "You earn "<< wage << "$ for an hour."<<endl;
    cout << "========================================"<<endl;
    float Pi {3.14};
    long double pi {3.1415};
    cout << "Pi is "<<Pi<<" in short version but "<<pi<<" in long version."<<endl;
    cout << "========================================"<<endl;
    int population_germany {8000000};
    cout << population_germany << " people lives in Germany."<<endl;
    long population_asia {1'204'564};
    cout << population_asia << " people lives in Asia."<<endl;
//    int population_earth {999'000'000'000};
    long population_earth {999'000'000'000};
    cout << population_earth << " people lives on Earth."<<endl;
// Arrays
    cout<< "I want to print out the elements of my array:\n";
    int my_array [] {10,20,30,40};
    cout<< "Element1_index0:  "<<my_array[0]<<endl;
    cout<< "Element2_index1:  "<<my_array[1]<<endl;
    cout<< "Element3_index2:  "<<my_array[2]<<endl;
    cout<< "Element4_index3:  "<<my_array[3]<<endl;

    return 0;
}
