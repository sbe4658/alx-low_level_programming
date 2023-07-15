# Hello, World
### Hello, World!
Welcome to the first c projects is an introduction to c programming. it is covering:
 * Compilation process.
 * How to use `gcc` to compile c program, pointing out most of it options.
 * Printing text using `printf`, `puts` and `putchar`.
 * getting the size of a specific type using `sizeof`.
 * Betty-style
It contains some shell tasks & c programming tasks.

## Tasks:

### Mandatory:
---
0. [Preprocessor](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x00-hello_world/0-preprocessor "0") - Runs a C file through the preprocessor and save the result into another file.
1. [Compiler](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x00-hello_world/1-compiler "1") - Compiles a c program without linking
2. [Assembler](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x00-hello_world/2-assembler "2") - Generates the assembly code of a C program
3. [Name](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x00-hello_world/3-name "3") - copiles a C file into an executable named cisfun
4. [Hello, puts](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x00-hello_world/4-puts.c "4") - Prints a sentence using puts
5. [Hello, printf](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x00-hello_world/5-printf.c "5") - Prints a sentence using printf
6. [Size is not grandeur, and territory does not make a nation](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x00-hello_world/6-size.c "6") - Prints the size of various types on the computer.

### Advanced
---
7. [Intel](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x00-hello_world/100-intel "100") - generates the assembly code in intel syntax
8. [UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x00-hello_world/101-quote.c "101") - prints a qoute to the standard error.

## other:
### compilation process of a c program:
 1. **preprocessing** - expands the code
 2. **compileing** - converts the expanded code to assembly code
 3. **Assemnling** - Converts assembly code to machine readable code
 4. **Linking** - links libraries with their functions (all of them are in machine readable code).
### Betty-style:
 betty coding is style is way to write c programs in way that is easy to read and not over-documenting your code
 betty hates:
  * spaces always use TAB at the beginnig of a line
  * comments in betty are:
   * `/* comment */`
   * ~~~
     /**
       * comment
       */
     ~~~
#### Function description in betty:
---
writing function description can be tricky and annoying sometimes. when trying to write make sure that you're using `-` to separate the function name and it description, return should always starts with a capital `R`, Here's a small example:
~~~
/**
 * main - Does COOL stuff
 *
 * Return: 0 Always -> Success
 */
~~~
For mor informations use `man betty`

To make your life easy, on the [Betty]( "Betty") repository There's some commands to configure your editor making it betty friendly. For [Vim](https://github.com/holbertonschool/Betty/wiki/Tools:-Vim "vi"), [EMACS](https://github.com/holbertonschool/Betty/wiki/Tools:-Emacs "emacs").

please note that the -s and -c already does the job for you, their output file would be with the extension `.s` and `.o` respectively. it is same as using the `-o $(echo $CFILE | tr '.c' '.o') /* or .s */` the $() is used to tell the shell that anything inside the brackets will be an argument for `gcc` for this example. More about expansions read [this]( http://linuxcommand.org/lc3_lts0080.php "expansions").
___
Kimba is watching :lion:. Email: salekbenelhabchi@gmail.com
