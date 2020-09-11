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
- unsigned: just the **posirive** whole numbers.

### Floating point numbers

This data type can hold real numbers, e.g., `25.6`, `789.00982`.

Floating  point numbers can be of type:
- float: 4 bytes
- double: 8 bytes
- long double: 16 bytes

## Charachters and Strings

These are the kind of data types that placed in `" "` or `' '`. They can be numbers or charachters. For **charachters** we use `' '` and for strings `" "`.

## Boolean

This data types can take only two values, **TRUE**(1) or **FALSE**(0).

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
