# Instruction

The amount of allocated memory to data that is gonna be stored depends on thd data type of the variable. The common data types are introduced in the following.
## Numerical data types

### Integers

This a data types that covers the **whole numbers**, e.g., `50`, `-120`.

We can declare an integer variable as follwing:
```
int var {0};
```
Integers can be :
- signed: both **negative** and **positive** whole numbers.
- unsigned: just the **positive** whole numbers.
- short: Can store integers with `16` bits.
- long: Can store integers with `32` bits. 
- long long: Can store integers with `64` bits.
```
    int age {12};
    cout <<"I am  "<< age<<" years old.\n";
    short unsigned grade {65};
    cout <<"My grade is "<< grade<< endl;
    long big_number {204514487};
    cout <<big_number<<" is a big number"<<endl;
    long population {7811284993};
    cout <<population<<" poople lives on earth."<<endl;
```

**Note1**: The **number of bits** depends on the operating system and compiler. 


**Note2**: There is no need to type **signed** for the integers, while the default is sigend integer. 


**Note3**: There is no need to type **int** for the integers of type **long, short, long long**. 


**Overflow**: Overflow happens when we want to store a varible that needs more space than the data type we have specified. With different initialization method, `=` or `{}` we will get different message from compiler. 
 
Here is an example, **Try them separately to see the warnings**:
```
    int overflow = 999999999999999;
    cout << "The number is 999999999999999 but it displays"<< overflow<< endl; 
```

```
    int overflow {999999999999999};
    cout << "The number is 999999999999999 but it displays"<< overflow<< endl;  
```
This is why `{}` is prefered over `=` for the **inintialization**.

### Floating point numbers

This data type can hold real numbers, e.g., `25.6`, `789.00982`.

Floating  point numbers can be of type:
- float: 4 bytes
- double: 8 bytes
- long double: 16 bytes

## Charachters

These are the kind of data types that placed in `' '` and it can be number or charachter. For 
```
    char middle_name_character {'h'};
    cout << "Your middle name charachter is " << middle_name_character<<"." <<endl;
```

## Boolean

This data types can take only two values, **TRUE**(1) or **FALSE**(0).
```
    bool is_monday {false};
    cout << "Is today monday? "<< is_monday<<endl;
```

## Arrays

An array is a set of variables that all of them has the same type,e.g. integer, string etc.

In C++ arrays are defined as the following:

* data-type array-name [array-length] = {initialaztion}
* _Example: int my_array [5] {10,20,30,40,50}_


We declare an array with the:
* name: my_array
* type: integer
* size: 5 elements
* initialized with {10,20,30,40,50}

Accessing elements of an array:

we can access the elements of arrays with [index], which starts at `zero`.

**Important note**: There is no **bound checking** by accessing the array elements by `[]`.


- [Previous Step](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently/tree/master/Day6)
- [Home](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently)
- [Next Step](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently/tree/master/Day8)
