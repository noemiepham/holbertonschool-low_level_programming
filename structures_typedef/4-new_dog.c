#include <stdio.h>
#include "dog.h"

/**
* new_dog - coppy to name and owner
* @name : pointer
* @age: age
* @owner : pointer
* Return: NULL if the function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dot_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(*dog));
	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
	;
	dog->name = malloc(i + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	dog->name[k] = name[k];
	dog->name[k] = '\0';
	dog->age = age;
	for (j = 0; owner[j] != '\0'; j++)
	;
	dog->owner = malloc(j + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k < j; k++)
		dog->owner[k] = owner[k];
	dog->owner[k] = '\0';
	return (dog);
}
