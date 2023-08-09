# functions, nested loops
### Learning Objectives:
---
Another C programming project covering Nested loops & functions, the concepts:
 * What are nested loops and how to use them.
 * What is function and How to declare it.
 * What is a function prototype and why is it important.
 * Scope of variables in c.
 * What are header files and how to use them

## Tasks:

### Mandatory:
---
0. [putchar](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x02-functions_nested_loops/0-putchar.c "_putchar") - prints `_putchar`.
1. [I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x02-functions_nested_loops/1-alphabet.c "alphabet") - prints the alphabet in lowercase.
2. [10 x alphabet](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x02-functions_nested_loops/2-print_alphabet_x10.c "10xalpha") - prints the alphabet 10 times.
3. [islowe](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x02-functions_nested_loops/3-islower.c "islower") - checks wether a character is lowercase (islower clone `man islower`).
4. [isalpha](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x02-functions_nested_loops/4-isalpha.c "isalpha") - checks wether a character is an alphabatic character `man isalpha`.
5. [sign](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x02-functions_nested_loops/5-sign.c "sign") - prints the sign of a given number.
6. [There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x02-functions_nested_loops/6-abs.c "abs") - computes the absolute value of an integer.
7. [There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x02-functions_nested_loops/7-print_last_digit.c "last digit") - prints the last digit of a given number.
8. [I'm federal agent Jack Bauer, and today is the longest day of my life](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x02-functions_nested_loops/8-24_hours.c "Jack Bauer") - prints every minute in Jack Bauer 24 hours.
9. [Learn your times table]( "https://github.com/sbe4658/alx-low_level_programming/blob/main/0x02-functions_nested_loops/9-times_table.c "times table") - prints the 9 times table starting from 0.
10. [a + b](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x02-functions_nested_loops/10-add.c "Addition") - adds two integers.
11. [98 Battery Street, the OG](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x02-functions_nested_loops/11-print_to_98.c "98") - prints all natural numbers from n to 98.

### Advanced
---
100. [The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x02-functions_nested_loops/100-times_table.c "times table") - prints n times table starting from 0.
101. [Nature made the natural numbers; All else is the work of women](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x02-functions_nested_loops/101-natural.c "") - list all 3 & 5 multiples and sums them.
102. [In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A ](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x02-functions_nested_loops/102-fibonacci.c "fibonacci") - prints the first 50 fibonacci numbers starting from 1 & 2.
103. [Even Liber Abbaci](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x02-functions_nested_loops/104-fibonacci.c "fibonacci") - prints and the sums of the even valued tems.
104. [In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+]( "Coming soon!") - Coming soon!.

## Concepts from my point of view:

### Header files:
---
In simple terms, Header file is a file that contains function prototypes[^1] so it can be shared with diffrent files, Rather than declaring the functions on every file.
If a header file happens to be included twice, the compiler will process its contents twice and it will result in an error. We can solve this error by defining the header:
~~~
#ifndef HEADER_H
#define HEADER_H

int add(int a, int b);

#endif
~~~
### Functions:
---
function are the core things in c, Declaring a function in c needs to be like this:
`return_type function_name(parameter or argument)`, this brings us to function *[prototype]: think of it like you're telling the compiler ther's a function that return an `int` and takes two `int` arguments and have the name add, Well this what really happens matter fact you can
you can type the prototype without any any args just the their type for example: `int add(int, int);`
### Bonus:
---
let's take this example:
Addition function:
~~~
#include "header.h" /* Double quotes for local header file */
/**
 * add - adds two integers.
 * @a: 1st integer.
 * @b: 2nd integer.
 *
 * Return: the sums of a and b.
 */
/* This is a declaratio it must have arguments names */
int add(int a, int b)
{
	return (a + b);
}
~~~
This the header file:
~~~
#ifndef HEADER_H /* You can name it anythin */
#define HEADER_H

/* you can aslo include other headers */
#include <stdio.h>

/* this a prototype the arguments name are not important */
int add(int, int);

#endif
~~~
the main file:
~~~
#include "header.h"
/**
 * main - test.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("1 + 1 is %d", add(1, 1));
	return (0);
}
~~~
this what the compiler sees:

~~~
/* the difinition of standard input/output */
int add(int, int);
/**
 * main - test.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("1 + 1 is %d", add(1, 1));
	return (0);
}
~~~
### Nested loops:
---
a nested is a loop inside another loop, as you gussed the inner loop would be the first to finish when a condition is true.
****syntax:****
~~~
/* Could be any loop the same case for the inner loop */
while (condition)
{
	while (condition)
	{
		/* Block of Code */
	}
}
~~~
___
Kimba is watching :lion:. here's my [twitter](https://twitter.com/MrBread46 "twitter"), my email: salekbenelhabchi@gmail.com.
