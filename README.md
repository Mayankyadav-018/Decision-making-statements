Expt 5 - C++ decision making statements

Aim: To study and implement C++ decision making statements
Theory:
C++ decision making statements
Sr.No	Statement & Description
1	if statement
An ‘if’ statement consists of a boolean expression followed by one or more statements.
2	if...else statement
An ‘if’ statement can be followed by an optional ‘else’ statement, which executes when the boolean expression is false.
3	switch statement
A ‘switch’ statement allows a variable to be tested for equality against a list of values.
4	nested if statements
You can use one ‘if’ or ‘else if’ statement inside another ‘if’ or ‘else if’ statement(s).
5	nested switch statements
You can use one ‘switch’ statement inside another ‘switch’ statement(s).

1.	C++ Conditions and If Statements

int x = 20;
int y = 18;
if (x > y) {
  cout<< "x is greater than y";
}

The else Statement
int time = 20;
if (time < 18) {
  cout<< "Good day.";
} else {
  cout<< "Good evening.";
}
// Outputs "Good evening."

The else if Statement
int time = 22;
if (time < 10) {
  cout<< "Good morning.";
} else if (time < 20) {
  cout<< "Good day.";
} else {
  cout<< "Good evening.";
}
// Outputs "Good evening."

Algorithm: Check Whether a Number is Even or Odd
Start

Declare an integer variable num.

Input:
3.1 Prompt the user to enter a number.
3.2 Store the input in variable num.

Check if the number is even:
4.1 Use the condition if (num % 2 == 0)
4.2 If true, print "The number is even."
4.3 Else, print "The number is odd."

End

Algorithm: Find the Largest of Three Numbers
Start

Declare three integer variables: a, b, and c.

Input:
3.1 Prompt the user to enter three numbers.
3.2 Store the values in a, b, and c.

Compare the numbers using nested if statements:
4.1 If a >= b and a > c, then a is the largest → Print a is the largest.
4.2 Else if b >= a and b > c, then b is the largest → Print b is the largest.
4.3 Else if c > a and c > b, then c is the greatest → Print c is the greatest.

End

Algorithm: Check Whether a Character is a Vowel or Consonant
Start

Declare a character variable c.

Input:
3.1 Prompt the user to enter a character.
3.2 Store the input in variable c.

Check if the character is a vowel:
4.1 Use the condition:
if (c == 'a' | c == 'e' | c == 'i' | c == 'o' | c == 'u' | c == 'A' | c == 'E' | c == 'I' | c == 'O' | c == 'U')
(Note: | should ideally be || for logical OR in C++)

Output:
5.1 If the condition is true, print "The character is a vowel."
5.2 Else, print "The character is a consonant."

End

Algorithm: Simulate Movement-Based Choices Using Switch in C++
Start

Declare a character variable move1

Input first move:
3.1 Prompt the user: 'w' for up, 'a' for left, 's' for down, 'd' for right
3.2 Store input in move1
3.3 Use a switch-case to display the direction moved

Declare a character variable move2

Input second move:
5.1 Prompt the user for the next move
5.2 Store input in move2
5.3 Use switch-case to display the second direction moved

Declare a character variable move3

Input final move:
7.1 Prompt the user for the final move
7.2 Store input in move3
7.3 Use switch-case to:

Show movement direction

Display the final game outcome (lake, maze escape, forest, insect room, or invalid move)

End

Algorithm: Perform Arithmetic Operations Using Switch Case in C++
Start

Declare variables:
2.1 x, y as integers for input numbers
2.2 choice as a character for the operation selection

Input two numbers:
3.1 Prompt the user to enter the first number and store it in x
3.2 Prompt the user to enter the second number and store it in y

Display operation menu:
4.1 Show options:

1 for Addition

2 for Subtraction

3 for Multiplication

4 for Division

Any other number to exit

Take user input for operation and store it in choice

Use switch-case to perform operations based on choice:
6.1 If choice == '1', perform addition and display result
6.2 If choice == '2', perform subtraction and display result
6.3 If choice == '3', perform multiplication and display result
6.4 If choice == '4', perform division and display result
6.5 If choice doesn't match any case, display "This is a wrong choice."

End
Conclusion:
In this experiment, we learned how to use decision-making statements in C++ such as if, if-else, else-if ladder, and switch. These statements allow the program to take logical decisions based on conditions. By implementing various examples, we understood how the flow of control changes depending on different inputs. This experiment helped us develop logical thinking and understand how real-world decisions can be programmed efficiently.





