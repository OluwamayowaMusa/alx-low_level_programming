# 0x0C.C - More malloc, free

## Learning Objectives
* **How to use the exit function**
* **What are the functions calloc and realloc from the standard library and how to use them**

## Things to note
* **Differences between malloc and calloc**
    - void \*malloc(size_t size)  | void \*calloc(size_t no_of_elements, size_t size)
    - Malloc doesn't initialize the address gotten from memory.
    - Calloc initialize the address gotten from the memory with zero.

* **realloc**
    - void \*realloc(void \*ptr, size_t size)
    - reallocate a dynamically allocated block of memory to a diferent size.
    - can perform the malloc or free function with right arguments
* **exit()**
    - Terminates the calling process immediately
    - void exit(int status)
    - 0: no errors encountered
    - 1: ended with errors
  
