#include<iostream>

int main(){
    std::cout << "Please enter an integer number:";
    int number;
    std::cin >> number;
    std::cout << "You have entered: "<< number<<std::endl; 
// We can add new line in the out put by using: "\n". 
    std::cout<< " I want to add a new line.\n";
    std::cout << "*****\n&&&&&\n$$$$$\n#####\n@@@@@\n";
    return 0;
}

