# C, Variables, If, else, while

### Hello!
---
This is the second project on this repository, it mainly focusing on Variables, if else statements and while loops, Covering:
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
0. [Positive anything is better than negative nothing]( "0") - checks wether a random number `n` is positive of negative.

1. [The last digit]( "1") - Prints the last digit of random number `n`.

2. [I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game]( "2") - prints the alphbets.

3. [alphABET]( "3") - prints the alphbet small and all caps.

4. [When I was having that alphabet soup, I never thought that it would pay off]( "4") - prints the alphabet excluding 'e' and 'q'.

5. [Numbers]( "5") - prints all single digit numbers.

6. [Numberz]( "6") - prints all single digit number.

7. [Smile in the mirror ]( "7") - prints all the alphabets in reverse.

8. [Hexadecimal]( "8") - prints all base 16 numbers.

9. [Patience, persistence and perspiration make an unbeatable combination for success]( "9") - prints all possible combinations of a single-digit number.

### Advanced:
---
10. [Inventing is a combination of brains and materials. The more brains you use, the less material you need]( "100") - prints all possible combination of a two digits.

11. [The success combination in business is: Do what you do better... and: do more of what you do...]( "101") - prints all possible combinations of  three digits.

12. [Software is eating the World]( "Coming soon") - prints all possible combination of two two-digits. *(coming soon)*

## Concepts from my POV:

### Operators:
---
 * Logical operators : `&&`: AND, `||`: OR, `!`: NOT.
 * Relational operators: `==`: equales to, `!=`: the oppisite of `==`, `>`: Greater than, `<`: less than, `>=`: greater than or equal, `<=`: less than or equal.
 * Boolean operator: simply put, they're expression that result in a boolean value (true or false). Therfore, you can use to create a condition for if...else statements and loops. (i.e: True = 1, and False = 2).

### Data types:
---
In c we refer to keywords to the words that's c have reserved, `if...else` for example. identifiers, In the other hand are words reserve they're mainly variables. naming cruel (Betty) there's some limitaions (i.e: the limit 31 charecter, can be longer but only 31 charecters that are gonna be checked for equality, there's even more limit for portability due to the linker's limitations), To ensure the portability naming in betty-style have some rules firstly you always have to be brief in naming use `tmp` not `thisIsTemporary`, this is not the case always, don't 'foo' to name a function the rule is simple make your name readable and small, if your function do somthing it name should be in that context this will save you the documenting time and will encrease the readability of your ptogram.

In C, there's various types of data we have `char`: charecters (0 - 127), `int`: intigers (-2000000000 - +2,000,000,000, it depends on the machine you're using) and more. lets talk about integral types first, `int` is the most basic one which can hold a whole number, there's also `signed int` a bit simillar to int, can hold a positive and negative number, the positive numbers holds them the 'unsigned int` type.
`char` is also considered an integral type, since it holds values from 0 - 127 which are the values of symbols and charecters in ascii (i.e: numbers of base 10 have their own values (48 - 57) to store a negative number you need to use signed char).

**printf** have various options to prints these types `%d` for `int` values and `%c` for `char` values.

## other:

if you checked one this commits, on line 27 you'll find that I was trying to give `m` and `n` the value of `h` but incremented using `h++`,but this result in a strange output when compiling, when `m` reachs 9 and `n` 8, which mean that the condition is true and its time to icrement `h` by one and the other two variables, it strangly increments h and give `n` and `m`, h value.
the output:

~~~
salek@HP-Ubuntu:~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 101-print_comb4.c -o 101-print_comb4
salek@HP-Ubuntu:~$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 212, 213, 214, 215, 216, 217, 218, 219, 223, 224, 225, 226, 227, 228, 229, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 434, 435, 436, 437, 438, 439, 445, 446, 447, 448, 449, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 656, 657, 658, 659, 667, 668, 669, 678, 679, 689,
salek@HP-Ubuntu:~$
~~~
like i was saying on `089, 212` h icremented two times (the first two) and n holds the value of h before the second increment, same thing for m. this is happenning because of the the post-increment `++` simply put, it is assigning the the first variable before = to the value of the variable before incrementing. to solve this issue we have to use pre-encrements operator, in this example `n = m = ++h` this will give our variables `n` and `m` the value of `h` incremented, but this will cause a problem since both increments operators will the value of `h`. that's why using using the both and used `n = m = 1 + h`. and then decided to use one line `m = n = ++h`
