#include <iostream>

int main(){
    std::cout<< "Enter your age:";
    int age {0};
    std::cin >>age;

//Example 1: "if" 
    std::cout<< "EXAMPL1-IF CONDITION\n";
    if (age >= 18) {
        std::cout <<"You are above 18." <<std::endl;
    }
    std::cout<< "======================\n";
    std::cout<< "EXAMPL2-IF ELSE CONDITION\n";
    
//Example 2: "If... else"
    if (age >= 18) {
        std::cout <<"You are above 18." <<std::endl;
    }
    else {
        std::cout <<"You are younger than 18." <<std::endl;
    }
//Example 3: "Nested If + else"    
    std::cout<< "======================\n";
    std::cout<< "EXAMPL3-NESTED IF CONDITION + ELSE\n";    
    if (age >= 18) {
        if (age == 18){
            std::cout<< "You are exactly 18 years old."<<std::endl;
        }
        else{
            std::cout <<"You are above 18." <<std::endl;    
        }
    }    
    else{
        std::cout <<" You are so young!" << std::endl;
    }
//Example 4: "Switch case"    
    std::cout<< "======================\n";
    std::cout<< "EXAMPL4-Switch case\n";
    std::cout<< "Welcome to my travel agency\n";
    std::cout<< "Where do you want to travel?:\n"
             <<"1. Italy\n"
             <<"2. Germany\n"
             <<"3. Spain\n";
    std::cout<< "Select a number in the menu to tell you the expense of one night stay?:\n";
    int num_menu {0};
    std::cin >> num_menu;
    switch(num_menu){
        case (1):
        std::cout <<"You have selected Italy. 80$ per night." <<std::endl;
        break;
        case (2):
        std::cout <<"You have selected Germany. 120$ per night." <<std::endl;
        break;
        case (3):
        std::cout <<"You have selected Spain. 65$ per night." <<std::endl;
        break;
        default:
        std::cout <<"Talk to the customer service." <<std::endl;
    }        
    

    return 0;
}
