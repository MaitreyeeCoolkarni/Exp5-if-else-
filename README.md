# Exp5-if-else-
Aim-To learn about switch case and if else conditions

Tools-VS Code / Programiz

Algorithm:

Program 1: Even or Odd Number Checker
Start: Begin program execution.

Declare Variable: Create an integer variable num to store the user’s input.

Prompt User: Display the message "Enter a integer to check for even or odd" to request input.

Read Input: Accept an integer from the user and store it in num.

Program 2: Vowel or Consonant Checker
This program checks whether the entered character is a vowel or a consonant. It compares the character against both uppercase and lowercase vowels (A, E, I, O, U, a, e, i, o, u) using logical OR (||) operators. Any other alphabetic character is considered a consonant.
1. Input a character (char1)
2. If char1 is 'a', 'e', 'i', 'o', 'u' (lowercase) or 'A', 'E', 'I', 'O', 'U' (uppercase):
   - Output "vowel"
3. Else:
   - Output "consonant"
4. End


Program 3: Finding the Largest of Three Numbers
This program compares three numbers and determines the largest one using nested if statements. It performs sequential comparisons between all three inputs to identify the maximum.
1. Input three integers (num1, num2, num3)
2. If num1 is greater than num2 and num1 is greater than num3:
   - Output "num1 is bigger"
3. Else if num2 is greater than num3 and num2 is greater than num1:
   - Output "num2 is bigger"
4. Else:
   - Output "num3 is bigger"
5. End



Program 4:
Switch case has been used in this case
Switch case allows multiple options using case
Break is also used
Default case can be used
1. Display menu: A:Shoot, B:Kill, C:Respawn, D:Bomb
2. Input a character (choice)
3. Switch choice:
   - Case 'A': Output "Shoot", break
   - Case 'B': Output "Kill", break (Note: Code has a bug; break is misplaced)
   - Case 'C': Output "Respawn", break
   - Case 'D': Output "Bomb", break
4. End


Program 5:
Same switch case is used
Cases include addition subtraction multiplication and division
Input will be taken from the user and the case which matches will be used
1. Display menu: A:Add, B:Subtract, C:Divide, D:Multiply
2. Input a character (choice)
3. Input two numbers (a, b)
4. Switch choice:
   - Case 'A': Output a + b, break
   - Case 'B': Output a - b, break (Note: Code has a bug; break is misplaced)
   - Case 'C': Output a / b, break
   - Case 'D': Output a * b, break
5. End

THEORY:
SWITCH CASE:The switch-case construct is a control flow statement used in many programming languages (like C, C++, Java, etc.) to execute one of several possible blocks of code based on the value of an expression. It provides a cleaner and more efficient alternative to multiple if-else statements when comparing a single variable against multiple possible values.

switch (expression) {
    case value1:
        // Code to execute if expression equals value1
        break;
    case value2:
        // Code to execute if expression equals value2
        break;
    ...
    default:
        // Code to execute if expression doesn't match any case
}

IF ELSE:
The if-else construct is a fundamental control flow statement used in programming languages (like C, C++, Java, Python, etc.) to make decisions based on conditions. It allows the program to execute specific blocks of code depending on whether a given condition evaluates to true or false.

if (condition) {
    // Code to execute if condition is true
} else if (another_condition) {
    // Code to execute if another_condition is true
} else {
    // Code to execute if all conditions are false
}

CONCLUSION:We learn how to handle multiple cases using if else as well as switch

