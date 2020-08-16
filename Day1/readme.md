---
title: Instruction
...

We can write C++ codes using terminal or IDEs. This program is written in terminal in Ubuntu.
#Steps:
1- Open a terminal
2- Generate an editor: gedit helloWorld.cpp
3 - Write down the code in the editor
4 - Save the changes and close the editor
5 - Now you need to execute your file, this can be done by any compiler, e.g. g++, gcc. 
6 - Make an executable file in the terminal : g++ helloWorld.cpp -o helloWorld_ExFile
7 - Now that the executable file of the helloWorld.cpp is generated, you can execute it through the terminal by :  ./helloWorld_ExFile
Note: You can use the IDEs that do all these steps automatically. Here is the link for IDEs: https://hackr.io/blog/cpp-ide

##CodeLite can be a good choice!


###Code Description : 

This is the first project in C++ in a terminal. All you need to know.
In order to take advantage of input/output >> #include <iostream>.
std::cout >> allows you to display the results(on the termianl for exmaple).
std::endl >> allows you to jump to a new line when you display the results.
The commands in C++ must have ; (semicolon) at the end.
Each program in C++ must have a main() function. The execution of the program begins with this _main_ function. Curly brackets __{}__ shows the beginning and end of the function If it works correctly, it returns integer 0.
In this program, we display "Hello World!" on the output. Then we go to the next line.
