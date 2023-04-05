<h1 align="center"> Holberton School Printf.</h1>
<h2 align="center">This repository contains the code Printf project.</h2>

## Examples 
### Character (c): Print a single character. <br>
- char character = 'A'; <br>
- printf("The character is %c\n", character);<br>
 Output: The character is A <br>
### String (s): Print a string of characters. <br>
- char name = "Nacho";<br>
- printf("Hello, my name is %s\n", name);<br>
- Output: Hello, my name is Nacho <br>
### Percent (%): Print the % character. <br>
- printf("The value is 10%%\n");<br>
- Output: The value is 10% <br>
### Integer (d): Print an integer <br>
- int num = 42;<br>
- printf("The number is %d\n", num);<br>
- Output: The number is 42 <br>
### Integer (i): Print an integer <br>
- int negative = -14;<br>
- printf("The number is %i\n", negative);<br>
- Output: The number is -14 <br>

<h1> Description. </h1>
The purpose of this project is to recreate some of the functionality of the C standard library's printf function. Prototype: int _printf(const char *format, ...); <br>

## Files Descriptions: 
### fp.c :       <br>
- This file contains the implementation of the "printf" function in C. It defines a table of operations that determine how to handle different data types that can be printed. The "printf" function is implemented as a function that takes a format string and a variable list of arguments, and returns the number of characters printed. The table of operations includes functions to handle the printing of characters, strings, and integers. <br> 
### main.h :     <br>
- This file contains the implementation of the "printf" function in C. It defines a struct called "printf" which includes a character "pf" and a function pointer "fp" that takes a va_list argument. It also includes the declaration of several functions used to implement "printf", including "_putchar", "pf_c", "pf_s", "pf_d", and "init_fp". The "printf" function itself is implemented as a variadic function that takes a format string and a variable list of arguments. <br>
### _putchar.c : <br>
- This file contains the implementation of the "_putchar" function in C. The "_putchar" function is used to write a single character to the standard output stream. It takes a character as an argument and returns the number of characters written. The implementation of "_putchar" in this file uses the "write" system call to write the character to the standard output stream. <br>
### printf.c :   <br>
- This file contains the implementation of the "_printf" function in C. The "_printf" function is used to print data to the standard output according to a specified format. It takes a format string and a variable list of arguments as input, and returns the number of characters printed. The implementation of "_printf" in this file uses a "va_list" to handle variable arguments and a "switch" statement to determine the appropriate output format based on the format string. The function only handles the %c, %s, and %% format specifiers, and it calls the appropriate function (pf_c or pf_s) to output the data. The function also includes a loop to iterate through the characters in the format string and a counter to keep track of the number of characters printed. <br> 
### _printf2.man : <br>
- This file is a man page for the "_printf" function in C. The man page provides a brief description of the function and its usage. The function is described as a C standard library function used to print data to the standard output according to a specified format. It only handles the %c, %s, and %% format specifiers. The man page also provides information on the return value of the function and includes an example usage of the function. <br>

## Requirements:
The following standard library functions and macros are used in this project <br> 
- write (man 2 write) <br>
- malloc (man 3 malloc) <br>
- free (man 3 free) <br>
- va_start (man 3 va_start) <br>
- va_end (man 3 va_end) <br>
- va_copy (man 3 va_copy) <br>
- va_arg (man 3 va_arg) <br>
<h1> Authors. </h1>
This project was created by Holberton School Uruguay students Nacho Llanes (@nacho228) and Vicenzo Anza (@vicenzoanza).
