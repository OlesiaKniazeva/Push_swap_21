# Push_swap
«School 21» project. The purpose of this project is to sort data with a limited set of instructions and the minimum possible amount of operation used.

Task file: [Subject.pdf](https://github.com/Ollietani/Push_swap_21_school/blob/master/Subject.pdf)

To make this project, I use my library with functions that we made as one of the tasks in «School 21».

## Project description

Data is sorted by using two stacks, stack **a** is filled with integer numbers, without duplicates, received as arguments from the command line.
Stack **b** is empty at the start.
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

There are two programs `push_swap` and `checker`.  
`push_swap` receives as an argument list of integers and displays a list of instructions that sort stack **a**.  
`checker` receives as an argument list of integers, it reads instructions from standard input and executes them on the list of arguments. If stack is actually sorted `checker` displays **"OK**, else it displays **"KO"**.

In case of error, both programs display **Error**: if there are duplicate numbers, if some arguments are not integers, number if bigger than an integer. For checker also - if instruction doesn't exist or incorrectly formatted.

## Usage

`git clone git@github.com:Ollietani/Push_swap_21.git`

Run `make` to execute `push_swap`.  

##### Usage of push_swap:
![](https://github.com/Ollietani/Push_swap_21_school/blob/master/images/Screen%20Shot%202021-10-07%20at%203.03.09%20PM.png)
![](https://github.com/Ollietani/Push_swap_21_school/blob/master/images/Screen%20Shot%202021-10-07%20at%203.04.33%20PM.png)
![](https://github.com/Ollietani/Push_swap_21_school/blob/master/images/Screen%20Shot%202021-10-07%20at%203.05.12%20PM.png)

Run `make bonus` to execute `checker`

##### Usage of checker:  
You can add commands to standard input to sort stack.
![](https://github.com/Ollietani/Push_swap_21_school/blob/master/images/Screen%20Shot%202021-10-07%20at%203.56.57%20PM.png)

Or run push_swap and send a list of instructions to the checker by using a pipe.
![](https://github.com/Ollietani/Push_swap_21_school/blob/master/images/Screen%20Shot%202021-10-07%20at%203.53.37%20PM.png)

## Results

To receive the best grade amount of movements for 100 numbers must be less than 700.  
![](https://github.com/Ollietani/Push_swap_21_school/blob/master/images/Screen%20Shot%202021-10-07%20at%203.09.26%20PM.png)

For 500 numbers it must be less than 5500.

![](https://github.com/Ollietani/Push_swap_21_school/blob/master/images/Screen%20Shot%202021-10-07%20at%203.09.53%20PM.png)
