# Instruction

In this program we are going to get two integer numbers from the user and use the basic arithmetics and finally display them on the screen.

* Summation ('**+**')": Adds up the numbers
* Substraction ('**-**')": Substracts a number from the other
* Multiplication ('__*__')": Multiplies the numbers
* Integer division ('**/**')": If the two numbers be intger, then only the integer part will be stored as teh result of division
* Modulus ('**%**')": Takes the division of the numbers and returns the remainder 
* Double division: In order to have a double division, we need to use ***static_cast \<double\> (integer variable)***. This converts one of the integers to double and then the same operator will computes the double division.
```
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
```


- [Previous Step](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently/tree/master/Day3)
- [Home](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently)
- [Next Step](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently/tree/master/Day5)
