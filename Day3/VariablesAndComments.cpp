#include <iostream>
/* By using // , we can initiate a comment. 
 * It is possible to have multiple lines of comments (or block comments):
 * by using 
 * /* ALL YOUR COMMENTS WILL BE WRITTEN BETWEEN   /*...*/ 
 
 
int main(){
    // Integer
    std::cout<<"Integer variable_ initialization type: { }: ";
    int my_var1 {0}; // Variable declaration with initialization-type1
    std::cout<<my_var1<<std::endl;
    std::cout<<"Integer variable_ initialization type: = : ";
    int my_var2 = 0; // Variable declaration with initialization-type2
    std::cout<<my_var2<<std::endl;
    std::cout<<"Integer variable_ without initialization: ";
    int my_var3;     // Varibales declaration without initialization
    std::cout<<my_var3<<std::endl;    
    
    // Charachter
    char my_char {'a'};
    std::cout<<"Character variable_ initialization type: { }: ";
    std::cout<< my_char<<std::endl;
    
    // Double 
    std::cout<<"Double variable_ initialization type: { }: ";
    double my_var_double {12.17};
    std::cout << my_var_double<< std::endl;
    
    return 0;
}
