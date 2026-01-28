> *This project has been created as part of the 42 curriculum by apolleux*
# push_swap

## Description

The **push_swap** project is an algorithmic project, a significatvie part of the 42 school curriculum. Push_swap is the first real project that teachs how to build an algorithm.

The push_swap's main **goal** is to implement an integers sorting algorithm :
- It receives a list of integers as a one-line argument
- The integers are delivered into the stack_a, the stack_b is initialised but set to *NULL* for now
- The instrutions are displayed, and the algorithm has to make the stack_a fully sorted. 


---
### Benchmark
By saving useless instructions its meant to deal with the shortest combination to reach the best benchmarks.

For maximum project validation **100%**
- 100 numbers < 700 operations
- 500 numbers < 5500 operations

For minimal project validation **80% minimum**
- 100 numbers < 1100 operations \
 500 numbers < 8500 operations
- 100 numbers < 700 operations \
 500 numbers < 11500 operations
- 100 numbers < 1300 operations \
 500 numbers < 5500 operations

All the allowed instructions are : `sa` `sb` `ss` `pa` `pb` `ra` `rb` `rr` `rra` `rrb` `rrr` 


---

## Instructions

### Requirements
- Language: `c`
- Includes **Header files** (`.h`)
- Follows the 42 Coding **Norm**
- Uses a **Makefile**

### Compilation

> I've used **submodules** for ft_printf and libft -> *--recurse-submodules*

Clone the repository and run:

```sh
make
```
Here is the easiest solution to clean up the project directory and keeping it work :
```sh
make re && make clean
```
### Execution
Then try it out, as you want or need it to be :
```sh
./push_swap <args>
```

Then, it should displays all the necessary instructions to sort the stack_a : \
*example*
```sh
sa
pb
rra
rb
pa
```

## Resources
### Documentation
[For learning stacks behavior and utilities - GeeksforGeeks](https://www.geeksforgeeks.org/c/implement-stack-in-c/)

[A long time ago, when I needed to learn how to use linked lists - GeeksforGeeks](https://www.geeksforgeeks.org/dsa/linked-list-data-structure/)

[A push_swap algorithm article - Medium](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)
### AI usage

Chatgpt served several purposes :
- Review of my code, and indicate possible errors encountered 
- Create the initial structure of this README, before I took it by myself
- Suggest arguments to test some parts of my program - *quite useful to test my parser*