# Push_swap
School 21 project. The purpose of this project is to sort data with a limited set of instructions and minimum possible amount of operation used.

Task file: [Subject.pdf](https://github.com/Ollietani/Push_swap_21_school/blob/master/Subject.pdf)
## Project description

Data sorted by using two stacks, stack **a** is filled with integer numbers, without duplicates, recieved as an arguments from command line.
Stack **b** is empty at start.
The goal is to sort numbers in stack **a** by ascending order.

#### Allowed operations to sort numbers are:

- **sa** : swap a - swap the first 2 elements at the top of stack a. Do nothing if there
is only one or no elements.  
- **sb** : swap b - swap the first 2 elements at the top of stack b. Do nothing if there
is only one or no elements.  
- **ss** : sa and sb at the same time.  
- **pa** : push a - take the first element at the top of b and put it at the top of a. Do
nothing if b is empty.  
- **pb** : push b - take the first element at the top of a and put it at the top of b. Do
nothing if a is empty.  
- **ra** : rotate a - shift up all elements of stack a by 1. The first element becomes
the last one.  
- **rb** : rotate b - shift up all elements of stack b by 1. The first element becomes
the last one.  
- **rr** : ra and rb at the same time.  
- **rra** : reverse rotate a - shift down all elements of stack a by 1. The last element
becomes the first one.
- **rrb** : reverse rotate b - shift down all elements of stack b by 1. The last element
becomes the first one.
- **rrr** : rra and rrb at the same time.

There is two programms `push_swap` and `checker`.  
`push_swap` receives as an argument list of integers and display list of instructions that sort stack **a**.  
`checker` receive as an argument list of integers, it reads instructions from standart input and execute them on the list of arguments. If stack is arctually sorted `checker` displays **"OK**, else it displays **"KO"**.

In case of error both programms display **Error**

## Usage

Run `make` to execute `push_swap`.  
./push_swap 3 4 0 -23 32 1
Run `make bonus` to execute `checker`
