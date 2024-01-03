# holbertonschool-monty
The aim of this project is to create an interpreter for Monty ByteCodes files for Holberton school Lille. This project was realized with Omer Ozturk.

![Stack and queue diagram | source: medium](https://miro.medium.com/v2/resize:fit:1100/format:webp/1*zKnDkJpL-4GQ36kzrDiODQ.png)

----------

# <p align="center">C - Stacks, Queues - LIFO, FIFO</p>

----------

## ➤ Menu:

* [➤ Description]()
* [➤ Flowchart]()
* [➤ How to use]()
  * [Install]()
  * [Execute]()
  * [Librairies]()
  * [For compilation]()
* [➤ File Descriptions]()
* [➤ Tests]()
  * [Valgrind]()
* [➤ Man]()
* [➤ Requirements]()
* [➤ Author]()


----------

## ➤ Description:

Stacks and queues are fundamental data structures in computing. A stack follows the Last-In, First-Out (LIFO) principle, where the last element added is the first removed. A queue follows the First-In, First-Out (FIFO) principle, where the first element added is the first withdrawn. The C implementation examples show basic operations such as add (push/enqueue) and remove (pop/dequeue) for each structure.

----------

## ➤ Resources:
* [Google](https://www.google.com/webhp?q=stack%20and%20queue)
* [How do I use extern to share variables between source files in C?](https://intranet.hbtn.io/rltoken/LeTvCFCvcgkvd-6USy3yrA)

----------

## ➤ Requirements:

**General**

* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* Limit the usage of global variables to a maximum of one
* Each file is allowed to contain no more than 5 functions
* Inclure des prototypes pour toutes les fonctions dans votre fichier d'en-tête nommé monty.h
* Don’t forget to push your header file
* All your header files should be include guarded
* You are expected to do the tasks in the order shown in the project

----------

## ➤ Flowchart:

![➤ Flowchart ➤]()

----------

## ➤ Tasks:

### 0. push, pall

Implement the ```push``` and ```pall``` opcodes.

The push opcode

The opcode ```push``` pushes an element to the stack.

* Usage: ```push <int>```
  * where ```<int>``` is an integer
* if ```<int>``` is not an integer or if there is no argument given to ```push```, print the error message ```L<line_number>: usage: push integer```, followed by a new line, and exit with the status ```EXIT_FAILURE```
  * where is the line number in the file
* You won’t have to deal with overflows. Use the ```atoi``` function

The pall opcode

The opcode ```pall``` prints all the values on the stack, starting from the top of the stack.

* Usage ```pall```
* Format: see example
* If the stack is empty, don’t print anything

```bash
julien@ubuntu:~/monty$ cat -e bytecodes/00.m
push 1$
push 2$
push 3$
pall$
julien@ubuntu:~/monty$ ./monty bytecodes/00.m
3
2
1
julien@ubuntu:~/monty$
```

### 1. pint

Implement the ```pint``` opcode.

The pint opcode

The opcode ```pint``` prints the value at the top of the stack, followed by a new line.

Usage: ```pint```
If the stack is empty, print the error message ```L<line_number>: can't pint, stack empty```, followed by a new line, and exit with the status ```EXIT_FAILURE```

```bash
julien@ubuntu:~/monty$ cat bytecodes/06.m 
push 1
pint
push 2
pint
push 3
pint
julien@ubuntu:~/monty$ ./monty bytecodes/06.m 
1
2
3
julien@ubuntu:~/monty$
```

### 2. pop

Implement the ```pop``` opcode.

The ```pop``` opcode

The opcode ```pop``` removes the top element of the stack.

* Usage: ```pop```
* If the stack is empty, print the error message ```L<line_number>: can't pop an empty stack```, followed by a new line, and exit with the status ```EXIT_FAILURE```
```bash
julien@ubuntu:~/monty$ cat bytecodes/07.m 
push 1
push 2
push 3
pall
pop
pall
pop
pall
pop
pall
julien@ubuntu:~/monty$ ./monty bytecodes/07.m 
3
2
1
2
1
1
julien@ubuntu:~/monty$
```

### 3. swap

Implement the swap opcode.

The swap opcode

The opcode ```swap``` swaps the top two elements of the stack.

* Usage: ```swap```
* If the stack contains less than two elements, print the error message ```L<line_number>: can't swap, stack too short```, followed by a new line, and exit with the status ```EXIT_FAILURE```

```bash
julien@ubuntu:~/monty$ cat bytecodes/09.m 
push 1
push 2
push 3
pall
swap
pall
julien@ubuntu:~/monty$ ./monty bytecodes/09.m 
3
2
1
2
3
1
julien@ubuntu:~/monty$
```

### 4. add

Implement the ```add``` opcode.

The add opcode

The opcode ```add``` adds the top two elements of the stack.

* Usage: ```add```
* If the stack contains less than two elements, print the error message ```L<line_number>: can't add, stack too short```, followed by a new line, and exit with the status ```EXIT_FAILURE```
* The result is stored in the second top element of the stack, and the top element is removed, so that at the end:
  * The top element of the stack contains the result
  * The stack is one element shorter

```bash
julien@ubuntu:~/monty$ cat bytecodes/12.m 
push 1
push 2
push 3
pall
add
pall

julien@ubuntu:~/monty$ ./monty bytecodes/12.m 
3
2
1
5
1
julien@ubuntu:~/monty$
```

### 5. nop

Implement the ```nop``` opcode.

The nop opcode

The opcode ```nop``` doesn’t do anything.

* Usage: ```nop```

----------

## ➤ If you want to use our interpreter for Monty ByteCodes files :

### ➤ Install:
To use the interpreter for Monty ByteCodes files you can clone this repository:<br>

```git clone git@github.com:amandinekemp/holbertonschool-monty.git```

### ➤ Execute:
To run our interpreter for Monty ByteCodes files:<br>

  ```./monty```

----------

## ➤ For compilation: 

* Compile the code using :<br>

  ```gcc -Wall -Werror -Wextra -pedantic *.c -o monty```

----------

## ➤ Files description:

| Filename | Description | 
| -------- | -------- |
| [main.h]()    |     |
| [shell.c]()    |     |
| [_getenv.c]()    |     |
| [builtin_functions.c]()    |     |
| [execute.c]()    |     |
| [free_memory.c]()    |     |
| [get_filepath.c]()    |     |
| [path_append.c]()    |     |
| [print_error.c]()    |     |
| [get_localprog.c]()    |     |
| [split_arguments.c]()    |     |
| [string_functions.c]()    |     |

----------

## ➤ Tests:



----------

### ➤ Valgrind:

 * to test for segmentations errors and memory leeks use :<br>

    ```valgrind --tool=memcheck --leak-check=yes --track-origins=yes --show-leak-kinds=all -s ./monty```<br>

![Test valgrind]()

----------

## ➤ Author:

- Omer Ozturk [Github](https://github.com/diesos)
- Amandine KEMP [Github](https://github.com/amandinekemp)