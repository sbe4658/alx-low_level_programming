# C, Variables, If, else, while

### Hello!
---
This is the second project on this repository, Mainly focusing on Variables, if else statements and while loops, Covering:
 * boolean, Relational, logical and arithmetic operators
 * True and False values in c.
 * Comments
 * `if`, `if...else` statements
 * Declaring variables and assigning value to them.
 * printing values of a `char`, an `int` and `unsigned int`.
 * ASCII character set.
 * flag `-m32` and `-m64` on `gcc`

## Tasks:

### Mandatory:
---
0. [Positive anything is better than negative nothing](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x01-variables_if_else_while/0-positive_or_negative.c "0") - checks wether a random number `n` is positive of negative.

1. [The last digit](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x01-variables_if_else_while/1-last_digit.c "1") - Prints the last digit of random number `n`.

2. [I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x01-variables_if_else_while/2-print_alphabet.c "2") - prints the alphbets.

3. [alphABET](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x01-variables_if_else_while/3-print_alphabets.c "3") - prints the alphbet small and all caps.

4. [When I was having that alphabet soup, I never thought that it would pay off](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x01-variables_if_else_while/4-print_alphabt.c "4") - prints the alphabet excluding 'e' and 'q'.

5. [Numbers](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x01-variables_if_else_while/5-print_numbers.c "5") - prints all single digit numbers.

6. [Numberz](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x01-variables_if_else_while/6-print_numberz.c "6") - prints all single digit number.

7. [Smile in the mirror ](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x01-variables_if_else_while/7-print_tebahpla.c "7") - prints all the alphabets in reverse.

8. [Hexadecimal](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x01-variables_if_else_while/8-print_base16.c "8") - prints all base 16 numbers.

9. [Patience, persistence and perspiration make an unbeatable combination for success](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x01-variables_if_else_while/9-print_comb.c "9") - prints all possible combinations of a single-digit number.

### Advanced:
---
10. [Inventing is a combination of brains and materials. The more brains you use, the less material you need](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x01-variables_if_else_while/100-print_comb3.c "100") - prints all possible combination of a two digits.

11. [The success combination in business is: Do what you do better... and: do more of what you do...](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x01-variables_if_else_while/101-print_comb4.c "101") - prints all possible combinations of  three digits.

12. [Software is eating the World](https://github.com/sbe4658/alx-low_level_programming/blob/main/0x01-variables_if_else_while/102-print_comb5.c "102") - prints all possible combination of two two-digits. *(coming soon)*

## Concepts from my POV:

### Operators:
---
 * Logical operators : `&&`: AND, `||`: OR, `!`: NOT.
 * Relational operators: `==`: equales to, `!=`: the oppisite of `==`, `>`: Greater than, `<`: less than, `>=`: greater than or equal, `<=`: less than or equal.
 * Boolean operator: simply put, they're expression that result in a boolean value (true or false). Therfore, you can use to create a condition for if...else statements and loops. (i.e: True = 1, and False = 2).

### Data types:
---
In c we refer to the words that's c have reserved by `keywords`, `if...else` for example is a keyword. In the other hand, Identifiers are words we reserve or name like variables. naming in C is cruel (let's not forget about the beast Betty) and limited (i.e: the limit 31 charecter, can be longer but only 31 charecters are going to be checked for equality, there's even more limit for portability due to the linker's limitations), To ensure the portability naming, betty-style have some naming rules. firstly you always have to be brief in naming, for example instead of using `thisIsTemporary` use `tmp`, this is not always the case, `foo` is not a valid function name. the rule is simple make your name readable and small, function name should be in the context of what the function or what's for.

In C, there's various types of data. For example integral types, we have `char`: charecters (0 - 127), `int`: intigers (-2000000001 to +2000000000, it depends on the machine you're using). `int` is the most basic one which can hold a whole number, there's also `signed int` a bit simillar to int, can hold a positive and negative number, the positive numbers holds them the 'unsigned int` type.
let's talk more about `char`s, since it holds values from 0 - 127 which are the values of symbols and charecters in ascii (i.e: numbers of base 10 have their own values (48 - 57), to store a negative number you need to use signed char), do letters and symbols are just a integers.

**printf** have various options to prints these types `%d` for `int` values and `%c` for `char` values.

## other:
As i previously said numbers have their own ascii value and considered chars, that's why on some putchar tasks i user 48 - 57, you can use '0' - '9' this will make it easier and more readable but alwyas double check that you're protecting them using single quote, otherwise. when using if or while loop you'll be comparing two diffrent number.
for example:
~~~
int main(void)
{
	int n = '0';

	while (n <= '0' && n >= 9)
	{
		/* Block of code */
	}
	return (0);
~~~

on this example the condition in the `while` will always be true, since n = '0' = 48, and 48 > 9.

if you checked one this [commits](https://github.com/sbe4658/alx-low_level_programming/commit/6522756e925bc343d3eff64d9afed641db586db6 "6522756e925bc343d3eff64d9afed641db586db6"), on line 27 you'll find that I was trying to give `m` and `n` the value of `h` but incremented using `h++`,but this result in a strange output when compiling, when `m` reachs 9 and `n` 8, which mean that the condition is true and its time to icrement `h` by one and the other two variables, it strangly increments h and give `n` and `m`, h value.
the output:

~~~
salek@HP-Ubuntu:~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 101-print_comb4.c -o 101-print_comb4
salek@HP-Ubuntu:~$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057,
058, 059, 067, 068, 069, 078, 079, 089, 212, 213, 214, 215, 216, 217, 218, 219, 223, 224, 225, 226, 227, 228, 229, 234, 235, 236, 237, 238,
239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 434, 435, 436, 437, 438, 439, 445, 446, 447, 448, 449, 456,
457, 458, 459, 467, 468, 469, 478, 479, 489, 656, 657, 658, 659, 667, 668, 669, 678, 679, 689,
salek@HP-Ubuntu:~$
~~~
like i was saying on `089, 212` h icremented two times (the first two) and n holds the value of h before the second increment, same thing for m. this is happenning because of the the post-increment `++` simply put, it is assigning the the first variable before = to the value of the variable before incrementing. to solve this issue we have to use pre-encrements operator, in this example `n = m = ++h` this will give our variables `n` and `m` the value of `h` incremented, but this will cause a problem since both increments operators will the value of `h`. To be safe i used 'n = m = 1 + h`.
___
Kimba is Watching :lion:. [Twitter](https://twitter.com/MrBread46 "twitter"), Email: salekbenelhabchi@gmail.com.
