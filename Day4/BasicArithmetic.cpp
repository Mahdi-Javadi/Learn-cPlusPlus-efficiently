#include<iostream>


int main(){
    std::cout << "Please Enter the first integer number:";
    int a {0};
    std::cin >> a;
    
    std::cout << "Please Enter the second integer number:";
    int b {0};
    std::cin >> b;
    std::cout<<"==============Summation============================\n";
    std::cout << "a + b = "<<a + b<<std::endl;
    std::cout<<"==============Subtraction==========================\n";
    std::cout << "a - b = "<<a - b<<std::endl;
    std::cout<<"==============Multiplication=======================\n";
    std::cout << "a * b = "<<a * b<<std::endl;
    std::cout<<"==============Integer Division=====================\n";
    std::cout << "a / b = "<< a / b<<std::endl;
    std::cout<<"==============Remainder============================\n";
    std::cout << "a % b = "<<a % b<<std::endl;
    std::cout<<"==============Double Division======================\n";
    std::cout << "a / b = "<<static_cast<double> (a) / b<<std::endl;
    return 0;
}
