# Instruction

Loops gives us the ability to do the same task for finite/infinite time until certain condition(s) is(are) fullfilled. 

## while

With **while** loop we can execute the same statements for inifinite time until certain condition is fullfilled. When the condition was not true anymore and returns **False**, then the compiler ignores the whole while loop and execute further statements. Here is the syntax:
```
    while(condition){
        //statements
    }
```
**Important Note**: You have noticed that how tedius it could be whenever you want to print something, getting input or go to next line, you need to type `std::` followed by `cout`, `cin` or `endl`. To avoid this typing, we can use **standard library** by the following statement:
```
using namespace std
```
or by specifying in an exact manner:
```
using std::cin;
using std::cout;
using std::endl;
```
From now on, we use them in our code to avoid typing. 
### Logical operators

These operators helps us to write down the logic, by combining the conditional statements. The outcome will be a boolean value of **True** or **False**. We can have complex logics by taking advantage of these operators and **relational operators** that introduced earlier. 
- **&&**: This is the **AND** operator which returns **TRUE**, only when both statements be **TRUE**. 
- **||**: This is the **OR** operator which returns **False**, only when both statements be **FALSE**. 
- **!** : This is the **NOT** operator and negates the boolean value of the statement. 

### Example 1

We want to get an integer number from the user and print them in decending order until it reaches zero. 
```
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main(){
    cout<< "Enter an integer number:";
    int num {0};
    cin >> num;
    while(num !=0){
        cout<< num<<endl;
        num--;
    }
    return 0;
}
```
 
## for

We use for loop when we know **the number of iterations**. Here is the syntax:

```
    for (initialization ; condition ; increment){
        //statements
    }
```
- Initialization: this is the first statement that executes in the for loop and never repeats
- Condition: Specifies the condition that must be fulfilled to execute the statements
- Increment: This is increment of the counter. Counter controls how many times the loop has been iterated.

### Example 2

Display `1` to `5` in the terminal.
```
int main(){
    for (int i {1}; i<5 ; i++){
        cout << i<<endl;        
    }    
    return 0;
}
```
## do ... while 

This works like **while** loop, with this difference that the statements in the loop executes at **least once**. Here is the syntax:

```
    do{
        //statements
    }while();
```

### Example 3

In this example we initialized an integer `a` variable with `15` and the termination condition for `while` is `a < 10`. We can see that eventhough the condition is not fullfilled, the statemtns are executed at least once.

```
    do{
        cout << "Hi!!"<<endl;
        cout << "a is "<<a <<" , which is not smaller than 10!."
        << "But the statement still executes!" 
        <<endl;
    }while(a <10);    
    return 0;
}
```
## How to run the codes online?
You can use [Online shell](http://cpp.sh/) or [Online gdb](https://www.onlinegdb.com/online_c++_compiler) and copy the entire code in **.cpp file** in this lesson and see how the codes works and play with it. ***Do it!!!!***.  

- [Previous Step](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently/tree/master/Day5)
- [Home](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently)
- [Next Step](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently/tree/master/Day7)
