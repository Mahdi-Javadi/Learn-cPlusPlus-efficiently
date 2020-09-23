# Instruction

We are going to learn about two important data type in C++, namely, **Arrays** and **Vectors**. These are can hold sequence of the data of the same type.


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

## Vectors 
In order to declare a vector in C++ we need to include the **vector library** by `#include<vecotr>` and for the sake of simlicity `std::vector`.

Here is how we can declare a vector with any tyepe:
```
vector <type> my_vetor {};
```
As an example we define a vector of five integer numbers : 
```
#include<vector>
using std::vector

int main(){
    vector <int> my_vector {1,2,3,4,5};
    return 0;
}
```

We can reach the elements of a vector by `.at(index of the element)` and we can add an element at the end of the vector by `.push_back()` method. 
We are going to get elements from the input and put them in a vector and display them all at the terminal. 


- [Previous Step](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently/tree/master/Day7)
- [Home](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently)
- [Next Step](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently/tree/master/Day9)
