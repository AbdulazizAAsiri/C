What are the following terms:

1-runtime library? 


2-C code is portable in any machine, it is independent of any particular machine architecture.


3-C is does not support perfect type checking.


4- Be carful, C does not have automatic conversion for incompatible data types, it assumes that a programmer knows what she is doing.


5- CC vs gcc vs clang vs clang++ vs make vs cmake ? 


Some charcters that are helpful:


a) %d ----> print integer


b)%6d ----> ad sx charcters space between the printed value.


c)%f ----> floating point


d)%6f -----> the same as above, add 6 chatcter space.


e)%.2f  -----> print as floating point, 2 chars after edcimal point. Realy helpful.


f) %6.2f -----> the same as above add 6 chars space and print only 2 chars after decimal point. 


g) %o -----> octal value


h) %x -----> hexadecimal.


i)%c -----> print a char


j)%s ----> character string


k) %Lf for long double


The symbolc name or symbolic constant using #define, example:


#define LOWER 0

whenever the compiler encounter the symbolic constant LOWER it changes to the value 0. They shoud be written in upper case.


character I/O: basically  astream of character.


The C Library provides a mechainsm where you can process each character at a time whether that is by reading or writng.


The two functions are: putchar and getchar. 


getchar reads a character one at a time usually from a text stream (keyboard or a file)


putchar printf that value to the screen or to a file. (file , screen) 
