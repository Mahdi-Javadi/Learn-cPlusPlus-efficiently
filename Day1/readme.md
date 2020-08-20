# Instruction

We can write C++ codes using terminal or [IDE][ref_ide]s. This program is written on terminal in Ubuntu.

## Steps:

1. Open a terminal
2. Open the editor: `gedit helloWorld.cpp`
3. Write down the code in the editor
4. Save the changes and close the editor
5. Now you need to execute your file, this can be done by any compiler, e.g. `g++`, `clang++`.
6. Make an executable file in the terminal : `g++ helloWorld.cpp -o helloWorld_ExFile`
7. Now that the executable file of the `helloWorld.cpp` is generated
8. It can be executed by:  `./helloWorld_ExFile`

__*Note*__: You can use the [IDE][ref_ide]s that do all these steps automatically. ***CodeLite*** can be a good choice!


## Code Description : 
```
#include <iostream>

int main(){
    std::cout<<"Hello World!"<<std::endl;
    return 0;
}
```
This is the first project in C++ in a terminal. Here is all you need to know:


* `#include <iostream>`: In order to take advantage of input/output
* `std::cout`: Allows you to display the results, e.g. on the terminal.
* `std::endl`: Allows you to jump to a new line when you display the results.
* `;`: The statements in C++ must have `;` at the end.
* `main()`: Every program in C++ must have a  function. The execution of the program begins with this function. 
* `{}`: Shows the beginning and end of the function(block).
* `int` : If the program runs correctly then it returns the ***integer*** *0*.

In this program, we display "Hello World!" on the output. Then we go to the next line.

- [Home](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently)

- [Next Step](https://github.com/Mahdi-Javadi/Learn-cPlusPlus-efficiently/tree/master/Day2)

[ref_ide]: https://hackr.io/blog/cpp-ide
