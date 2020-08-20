# Instruction

## Steps:

- `#include<iostream>`: In order to take advantage of input/output.\
- `std::cout` followed by `<<`: Allows you to display the results, e.g. on the terminal.\
- `std::cin` followed by `>>`: Allows you to get input from the user.\
- `std::endl`: Allows you to jump to a new line when you display the results.\
- Each C++ program must have at least a `main()` function with the format :\
```
int main()
{
    
        //statements
    
        return 0;
}
```
***Note***: When we want to store some information, we use a concept _variable_. The variables allows us to use them in the program, without repeating the information everywhere, varibales can also be referenced and manipulated easily. Any varibale must be _declared_ before use. In ***C++*** we need to specify the ***type of variable*** as well. Here is an example:\
```
int a = 20;
```
In the example, we declared a variable with the name `a` of the type `integer` and we initialized it as `20`.\

Now that we have a basic understanding of variable declaration, let's back to code:\
- We want to get an integer number from the user. So we need to store it somewhere to be able to use it afterwards. When it comes to storing some information, we need to use a `variable`. A varibale `must be declared before use`.\
- We declare a variable `number` of the type `integer`.\
- Then we get an integer from the user and assign it to the varibale `number` by using `cin` and `>>` (_insertion operator_).\
- Finally, we display `number` with a text and insert a new line by `endl`.\
- The `main()` function returns `0`, if the program compiled correctly.\
