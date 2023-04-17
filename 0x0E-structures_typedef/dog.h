#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A structure representing the details of a dog.
 * @name: A pointer to a character array representing the dog's name.
 * @age: A floating-point value representing the dog's age.
 * @owner: A pointer to a character array representing the dog's owner's name.
 *
 * Description: This structure represents the details of a dog,
 * with its name, age, and owner's name.
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

/* function prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
