# EXPERIMENT NO. 05 

* Aim: To understand and implement conditional control statements in C++ using if-else and switch-case to enable decision-making in programs based on different conditions.

* Tools Used: IDE, Decision making statements, Switch-case , arithmetic operators, relational operators etc

* Theory:

In programming, conditional statements are used to perform different actions based on specific conditions or logical decisions. They allow a program to evaluate expressions and execute different blocks of code depending on whether a condition is true or false. In C++, the most commonly used conditional structures include if, else if, else, and switch-case.

These control structures are essential for building dynamic and interactive applications, where program behavior must change in response to user inputs or variable states. They help in implementing decision-making abilities, ensuring the program follows the correct logical path based on given data. By using conditional statements effectively, developers can write flexible, readable, and robust code that can handle a wide range of real-world scenarios.


🔹 Types of Conditional Statements in C++:
1. *If-Else Statements:*
Used to execute different blocks of code depending on whether a condition is true or false.

🔸 Syntax:

if (condition) {

   // code block if condition is true
   
} else {

   // code block if condition is false
   
}
🔸 Example:

if (marks >= 50)

   cout << "Pass";
   
else

   cout << "Fail";
   
   
2. *Else-If Ladder:*
Used when multiple conditions need to be checked in sequence.

🔸 Example:

if (marks >= 90)

   cout << "Grade A+";
   
else if (marks >= 80)

   cout << "Grade A";
   
else

   cout << "Grade B or below";
   
   
3. *Switch-Case Statement:*
Used to select one of many code blocks to be executed. Best for checking a variable against multiple constant values.

🔸 Syntax:

switch (choice) {

   case 1: // statements;
           break;
           
   case 2: // statements;
           break;
   default: // statements;
   
}

🔸 Example:

switch (day) {

   case 1: cout << "Monday"; break;
   
   case 2: cout << "Tuesday"; break;
   
   default: cout << "Invalid day";
   
}



These control structures help create dynamic, logic-driven programs that react to user input or variable values.


# Check Whether a Number is Even or Odd:

This program demonstrates how to use conditional statements (if-else) in C++ to determine whether a number is even or odd. An even number is divisible by 2 (i.e., num % 2 == 0), while an odd number leaves a remainder of 1.

*ALGORITHM*

1> Start

2> Declare an integer variable num.

3> Take input from the user and store it in num.

4> Use the condition:
    * If num % 2 == 0, print "The number is even."
    * Else, print "The number is odd."

5> End


# Find the Largest of Three Numbers:

This program uses conditional logic (nested if statements) to compare three integers and determine which one is the greatest. It demonstrates the use of relational and logical operators in decision-making. Such logic is fundamental when handling conditions in real-life problem-solving through code.

*ALGORITHM*

1> Start

2> Declare three integer variables: a, b, and c.

3> Take input from the user for a, b, and c.

4> Use conditional logic to compare the numbers:

  * If a >= b and a > c, print "a is the largest".

  * Else if b >= a and b > c, print "b is the largest".

  * Else if c > a and c > b, print "c is the greatest".

5> End

# Check Whether a Character is a Vowel or Consonant:

This program determines whether a given character is a vowel or a consonant using a conditional if-else statement. It checks both uppercase and lowercase vowels. Logical OR (||) is used to compare the character against all vowel options. This type of decision-making is useful in text processing and language-related programs.

*ALGORITHM*

1> Start

2> Declare a character variable c.

3> Input:

  * Prompt the user to enter a character.

  * Store the input in variable c.

4> Check if the character is a vowel:

  * Use the condition:

  * if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
    c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    
5> Output:

  * If true, print: "The character is a vowel."

  * Else, print: "The character is a consonant."

6> End

# Switch and break case program (Simulate Movement-Based Choices Using Switch in C++)(Game):

This program simulates a directional movement-based game using the switch-case control structure in C++. The user is prompted to input three character moves: 'w' (up), 'a' (left), 's' (down), or 'd' (right). Each move is evaluated individually, and a final outcome is shown based on the last move. switch-case is used to improve clarity and efficiency when handling multiple fixed choices.

*ALGORITHM*

1> Start

2> Declare a character variable move1.

3> Input First Move:

  * Prompt the user: 'w' for up, 'a' for left, 's' for down, 'd' for right

  * Store input in move1

  * Use switch(move1) to display the direction moved.

4> Declare a character variable move2.

5> Input Second Move:

  * Prompt the user for the next move

  * Store input in move2

  * Use switch(move2) to display the direction moved.

6> Declare a character variable move3.

7> Input Final Move:

  * Prompt the user for the final move

  * Store input in move3

  * Use switch(move3) to:

  * Display movement direction

8> Display the final game outcome:

  * 'w' → "You fell into a lake"

  * 'a' → "You escaped the maze"

  * 's' → "You are in a dark forest"

  * 'd' → "You entered the insect room"

  * default → "Invalid final move"

9> End

# Program of a calculator using Switch Case in C++:

This program demonstrates the use of switch-case in C++ to perform basic arithmetic operations like addition, subtraction, multiplication, and division. The user inputs two numbers and selects the desired operation from a menu. Based on the user's choice, the corresponding case executes. If the input does not match any valid operation, a default message is shown. This structure helps implement clear, efficient branching for fixed options.

*ALGORITHM*

1> Start

2> Declare variables:

  * x, y as integers for numbers

  * choice as a character for operation selection

3> Input:

  * Prompt user to enter first number → store in x

  * Prompt user to enter second number → store in y

4> Display menu:

  * 1 for Addition

  * 2 for Subtraction

  * 3 for Multiplication

  * 4 for Division

  * Any other number to Exit

5> Input operation choice → store in choice

6> Use switch-case:

  * Case '1': Perform x + y, display result

  * Case '2': Perform x - y, display result

  * Case '3': Perform x * y, display result

  * Case '4': Perform x / y, display result

  * Default: Show “This is a wrong choice.”

7> End

# Conclusion:
  
In this experiment, we learned how to use decision-making statements in C++ such as if, if-else, else-if ladder, and switch. These statements allow the program to take logical decisions based on conditions. By implementing various examples, we understood how the flow of control changes depending on different inputs. This experiment helped us develop logical thinking and understand how real-world decisions can be programmed efficiently.





