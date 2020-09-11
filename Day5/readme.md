# Instruction

Conditional statements comes to play when we want to make the program capable of making decisions under certain conditions. 

## If

The __if__ staement executes the code block, if the condition is fulfilled and otherwise, the compiler just ignores it. Here is the syntax:

```
if (condition) {
    statements
}
```
### Relational Operators
Relational operators help us to evaluate the condition we are looking for. Here are the commonly used realational operators: 
- <=: Smaller or equal 
    ```
    a <= b 
    ```
    - **a** is smaller equal than **b**
- \>= : Greater or equal
    ```
    a >= b 
    ```
    - **a** is greater equal than **b**
- == : Equal
    ```
    a == b 
    ```
    - **a** is equal **b**
- != : Not equal
    ```
    a <= b 
    ```
    - **a** is not equal to **b**
The **condition** is evaluated and if it returns **True**, then it will go inside **if block** and executes the **statements**.


__Note__: It is not necessary to use _indentation_, but it makes the code much more easier to read and follow the conditions. **Always use the indentation for a better code**.
### Example1:
```
    std::cout<< "Enter your age:";
    int age {0};
    std::cin >>age;
    if (age >= 18) {
        std::cout <<"You are above 18." <<std::endl;
    }
```
## If ... else

We can further complete our previous __if__ by adding __else__ condition to tell the compiler  what to do if the condition is not fulfilled, is **False**. This can be done also by using two 'if' blocks, but this makes your code easier to read and avoid __unnecessary if blocks__. Here is the syntax:

```
if (condition) {
    statements
}
else{
    statements
}
```
### Example2:
```
    std::cout<< "Enter your age:";
    int age {0};
    std::cin >>age;
   if (age >= 18) {
        std::cout <<"You are above 18." <<std::endl;
    }
    else {
        std::cout <<"You are younger than 18." <<std::endl;
    }
```
## Nested if

We can have __if__condition inside the __statement block__ of another __if__. This is called a __nested if__. Here is the syntax:
```
if (condition){
    //statements
    if(condition){
        //statements
    }
}
```
### Example3:
```
    std::cout<< "Enter your age:";
    int age {0};
    std::cin >>age;
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
```
## Switch case
Sometimes we want to test an expression for the equality of multiple values. An optimal approach is to use __switch case__. Here is the syntax:
```
switch(expression){
   case first_value:
   statements;
   break;
   case second_value:
   statements;
   break;
   .
   .
   .
   case last_value:
   statements;
   break;

   default:
   statements;
}
```
__Note1__: The __default__ specifies the logic to what to do, if non of the cases were true.


__Note2__: The **brake statement** terminates the current **case** and tell the compiler to jump out of the **statement block**!. There is no break in **default**, while it will jumps out of the **switch** block anyway! 
### Example4:
```
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
```
## How to run the codes online?
You can use [Online shell](http://cpp.sh/) or [Online gdb](https://www.onlinegdb.com/online_c++_compiler) and copy the entire code in **.cpp file** in this lesson and see how the codes works and play with it. Do it!!!!
- [Previous Step](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently/tree/master/Day4)
- [Home](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently)
- [Next Step](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently/tree/master/Day6)

