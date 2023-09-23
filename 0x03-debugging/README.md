# Debugging
### Learning Objectives:
---
Another C programming project For Debugging & how debugg your code :
 * What is Debugging.
 * What are some methods of debugging manually.
 * How to read the error messages

## Tasks:

### Mandatory:
0. [Multiple mains](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x03-debugging/0-main.c "0-main.c") - A simple with confusing instructions.
1. [Like, comment, subscribe](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x03-debugging/1-main.c "1-main.c") - Commenting out the Lines that causes infinite loop.
2. [0 > 972?](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x03-debugging/2-largest_number.c "0 > 972?") - This one has a logical error.
3. [Leap year](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x03-debugging/3-print_remaining_days.c "Leap year") - Simple `=` can change everything.

## Explaing Attempts
### What is Debugging?
[wikipedia](https://en.wikipedia.org/wiki/Debugging "debugging") define debugging as a process of finding and resolving bugs within computer programs, software, or systems (i.e. No sleep until you find the problem or just say #itsWorkingOnMyMachine :wink:).
### Methods of debugging manually
There are many methods and techniques for debugging (read this if you're curious [wikipedi](https://en.wikipedia.org/wiki/Debugging "Debugging")) but you'll mostly use these:
* **Rubber Duck Debugging** : The technique was first introduce In `The Pragmatic Programmer: From Journeyman to Master` by Andrew Hunt and David Thomas. The technique is very simple yet so effictive, Get yourself a rubber duck go throw your code line-by-line and try to explain what the code should do. Obviously you can use anything but the rubber duck is the most famous. However, you can code infort of a peer 4 eyes better than 2, they'll just watch you code and pinpoint any error you made (read [this](https://blogs.motiondevelopment.top/articles/how-to-find-a-peer "Lonely") if you're struggling to find someone to work with)!
* **Fast/print debuggig** : This method is the one you'll be using most of the time especially for testing a function, progra, memory leaks, Output, ...etc. This method is simple and fast, I call it `Fast Debugging` the only thing fast about is printing, to use this type of debugging you have to be smart where to put your printing statements.
* **Isolating** : as the name suggest, You isolate your code to simple potential problems, and then deal with them sepratlly. You might use the first two with this One. 
### Reading error Messages
Reading error messages might be hard for a regular person that uses GUIs, to read error messages you have to be familiar with reading manual pages. and then if you face an error you can google it or ask chatgbt.
For instant let's take our beloved add function as an example:
~~~
/**
 * main - simple example program
 *
 * Return: Always 0.
 */
int main(void)
{
	    printf("Hello, World!\n");
	        printf("Did you know ? 131540 + 20 is %d!\n", add(a, b));

		    return 0;
}
/**
 * add - adds two nums.
 * a: 1st
 * b: 2nd
 * 
 * Return: The results.
 */
int add(int a, int b)
{
	    return (a + b)
}
~~~

#### Reading compilation errors:
we'll compile our code using `gcc`(`man gcc` on google on your local terminal), with these flags `-Werror -Wextra -pedantic -std=gnu89` to restrict our codeso the compiler never tolorate us when typing an error + using the [C89](https://en.wikipedia.org/wiki/C89 "gnu89").
after using:
~~~
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o eg
~~~
the compiler gave these error messages:
~~~
example.c: In function ‘main’:
example.c:6:55: error: implicit declaration of function ‘add’ [-Werror=implicit-function-declaration]
    6 |         printf("Did you know ? 131540 + 20 is %d!\n", add(a, b));
      |                                                       ^~~
example.c:6:59: error: ‘a’ undeclared (first use in this function)
    6 |         printf("Did you know ? 131540 + 20 is %d!\n", add(a, b));
      |                                                           ^
example.c:6:59: note: each undeclared identifier is reported only once for each function it appears in
example.c:6:62: error: ‘b’ undeclared (first use in this function)
    6 |         printf("Did you know ? 131540 + 20 is %d!\n", add(a, b));
      |                                                              ^
example.c: In function ‘add’:
example.c:18:27: error: expected ‘;’ before ‘}’ token
   18 |             return (a + b)
      |                           ^
      |                           ;
   19 | }
      | ~
cc1: all warnings being treated as errors
~~~
Obviously the name of the file is `example.c`, it start with in function `main` and lists the error in the function. `gcc` uses a cool way to tell you about the line where it found the error, for example `example.c:6:55` means on line 6 at character 55 in the file example.c there's this error!
the implicit declaration error, tells you that the compiler didn't find the prototype of the add function to fix this we can add it, on top. I'll let figure out the other errors.
Here's the updated version:
~~~
alpha@DESKTOP-ALPHA00:~$ cat example.c
#include <stdio.h>
/* add function's prototype */
int add(int, int);
/**
 * main - simple example program.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("Hello, World!\n");
	printf("Did you know? 131540 + 20 is %d!\n", add(131540, 20));
	return 0;
}
/**
 * add - adds two nums.
 * a: 1st
 * b: 2nd
 *
 * Return: The results.
 */
int add(int a, int b)
{
	return (a + b);
}
alpha@DESKTOP-ALPHA00:~$ gccall example.c -o eg
alpha@DESKTOP-ALPHA00:~$ ./eg
Hello, World!
Did you know? 131540 + 20 is 131560!
alpha@DESKTOP-ALPHA00:~$
~~~
thank you! For reading this!
___

Kimba is watching :lion:. here's my [twitter](https://twitter.com/MrBread46 "twitter"), and my <a href="mailto:salekbenelhabchi@gmail.com">email</a>.
