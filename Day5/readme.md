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

## Switch case
It happens sometimes that we want to evaluate some conditions with respect to the value of **one expression**. In this case, we can use several **if blocks**, but the efficient way is to use __switch case__. Here is the syntax:
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

- [Previous Step](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently/tree/master/Day4)
- [Home](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently)
- [Next Step](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently/tree/master/Day6)

