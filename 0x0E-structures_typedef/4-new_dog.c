#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *new_name, *new_owner;
	int name_len, owner_len;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	name_len = 0;
	while (name[name_len])
		name_len++;
	name_len++;
	new_name = malloc(name_len * sizeof(char));
	if (new_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	owner_len = 0;
	while (owner[owner_len])
		owner_len++;
	owner_len++;
	new_owner = malloc(owner_len * sizeof(char));
	if (new_owner == NULL)
	{
		free(dog);
		free(new_name);
		return (NULL);
	}
	for (int i = 0; i < name_len; i++)
		new_name[i] = name[i];
	for (int i = 0; i < owner_len; i++)
		new_owner[i] = owner[i];
	dog->name = new_name;
	dog->age = age;
	dog->owner = new_owner;
	return (dog);
}
