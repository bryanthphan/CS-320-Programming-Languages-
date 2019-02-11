Bryan Phan
bryan.th.phan@gmail.com

The project was to exercise our knowledge of the C language. 

The first program was to create a C program that prompts user input after asking for their full name without knowing the length of it. Afterwards it prints their name with a greeting. For example, "Hello You Person!" This program can be compiled by gcc prog1_1.c -o prog1_1.

The second program was to create a header with given function prototypes and typedefs and create a source file (prog1_2.c) that will implement the MakeStack, Push, Pop, and Grow. The Push function should Grow if the capacity of the stack. Push and Pop should work as expected. This program can be compiled by gcc prog1_2.c -o prog1_2

The third program was to create a driver program that takes in a single command line. For example, ./prog1_3 8. If it was just ./prog1_3 then an error message will pop up. For valid inputs, the program will print a single carrot and take N lines input from STDIN. The program also splits each of the lines on a space delimiter. For example "    hello   world" becomes "hello" and "world," two seperate tokens. If a user enters the string push, then the second token is converted into an int. If a user enters the string pop, it pops the int that was pushed, -1, or nothing if it is with more than token. This program can be compiled by gcc prog1_3.c prog1_2.c -o prog1_3. 
