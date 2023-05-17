# Lab Stack Interpreter 
## Objective
Implementation of a simple interpreter that uses stacks.
## Context
Many programming languages are compiled to an abstract machine compiled in stacks. With this in mind, in this software you can use operator and solutions that are stored in stacks.

## Commands
- Some basic commands you can use are:
  - `push` - receive an integer and add to the stack
  - `add` - add two numbers
  - `sub` - subtract two numbers
  - `div` - divide two numbers
  - `print` - remove the last value from the stack and prints it
  - `stack` - print the entire stack
  - `popx` - remove the last element of the stack and saves it
  - `pushx` - pushs the saved data without argument

### Example
```c
> push 10
operation: push
argument: 10

> push 30
operation: push
argument: 30

> print
operation: print
argument:

----- Stack -----
10
30

> mult
operation: mult
argument: 

> print
operation: print
argument:

----- Stack -----
300
```
