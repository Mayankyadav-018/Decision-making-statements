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


Conclusion:
In this experiment, we learned how to use decision-making statements in C++ such as if, if-else, else-if ladder, and switch. These statements allow the program to take logical decisions based on conditions. By implementing various examples, we understood how the flow of control changes depending on different inputs. This experiment helped us develop logical thinking and understand how real-world decisions can be programmed efficiently.





