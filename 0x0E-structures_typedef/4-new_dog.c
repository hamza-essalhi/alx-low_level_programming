#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for dog
 * @d: dog to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}


/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *copy_of_name, *copy_of_owner;
	unsigned int name_len, owner_len;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	for (name_len = 0; name[name_len]; name_len++)
		;
	for (owner_len = 0; owner[owner_len]; owner_len++)
		;

	copy_of_name = malloc(sizeof(char) * (name_len + 1));
	if (copy_of_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	copy_of_owner = malloc(sizeof(char) * (owner_len + 1));
	if (copy_of_owner == NULL)
	{
		free(copy_of_name);
		free(new_dog);
		return (NULL);
	}

	for (name_len = 0; name[name_len]; name_len++)
		copy_of_name[name_len] = name[name_len];
	copy_of_name[name_len] = '\0';

	for (owner_len = 0; owner[owner_len]; owner_len++)
		copy_of_owner[owner_len] = owner[owner_len];
	copy_of_owner[owner_len] = '\0';

	new_dog->name = copy_of_name;
	new_dog->age = age;
	new_dog->owner = copy_of_owner;
	return (new_dog);
}
