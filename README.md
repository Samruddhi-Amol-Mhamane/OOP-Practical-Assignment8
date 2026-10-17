# Practical 8: Exception Handling in C++

## Problem Statement
To implement exception handling in C++ using `try`, `throw`, and `catch`. The program checks the age entered by the user and throws an exception if the age is less than 18.

## Objectives
- To understand exception handling in C++.
- To use `try`, `throw`, and `catch` keywords.
- To handle exceptions using a catch block.
- To understand program execution after exception handling.

## Expected Learning Outcomes
- Understand the working of exception handling.
- Implement exception handling in C++.
- Handle integer exceptions using `try`, `throw`, and `catch`.

## Theory / Concept
Exception handling is a mechanism used to handle runtime anomalies in C++.

- **try:** Contains code that may generate an exception.
- **throw:** Raises an exception.
- **catch:** Handles the thrown exception.

## Algorithm
1. Start the program.
2. Accept age from the user.
3. Execute the code inside the `try` block.
4. If age is less than 18, throw the age as an exception.
5. Catch the integer exception and display an error message.
6. Display a message that the program continues.
7. Stop the program.

## Technology / Tools Used
- **Language:** C++
- **IDE:** Dev-C++
- **Library:** `<iostream>`

## Implementation
The source code is available in [`exception_handling.cpp`](exception_handling.cpp).

## Sample Output

### Case 1: Exception Occurs
```text
Enter age: 15
Exception caught!
Age is 15. Must be 18 or above.
Program continues...
```

### Case 2: No Exception
```text
Enter age: 20
You are eligible.
Program continues...
```

## Results / Observations
- The exception is thrown when the age is less than 18.
- The `catch` block handles the integer exception.
- If no exception occurs, the catch block is skipped.
- The program continues after handling the exception.

## Conclusion
This practical demonstrates exception handling in C++ using `try`, `throw`, and `catch`. It shows how exceptional conditions can be handled separately
