
# 0x10-variadic_functions

This repository contains C programs that implement a data structure for dogs. The programs were completed as part of the Holberton School curriculum.



## Authors

- [@hamza-essalhi](https://www.github.com/hamza-essalhi)


## 🚀 About Me
A passionate full stack developer


## Roadmap

- gcc

- vi or vim or emacs 
- Go to the Betty repository


## Files

The repository contains the following files:

- 1-init_dog.c: Initializes a "dog" structure with a given name, age, and owner.
- 2-print_dog.c: Prints the values of the "name", "age", and "owner" members of a "dog" structure.
- 4-new_dog.c: Allocates memory for a new "dog" structure and initializes its members with the given values.
- 5-free_dog.c: Frees the memory allocated for a "dog" structure.

## Header File

The repository also contains a header file:

- dog.h: Defines a new type "dog_t" as a new name for the type "struct dog". The "struct dog" type has the following members:

 "name", type "char *"\
 "age", type "float"\
 "owner", type "char *" 


## void init_dog(struct dog *d, char *name, float age, char *owner)

Initializes the members of a "dog" structure with the given "name", "age", and "owner" values.

## void print_dog(struct dog *d)

Prints the values of the "name", "age", and "owner" members of a "dog" structure.

## dog_t *new_dog(char *name, float age, char *owner)

Allocates memory for a new "dog" structure and initializes its members with the given "name", "age", and "owner" values.

## void free_dog(dog_t *d)

Frees the memory allocated for a "dog" structure.
