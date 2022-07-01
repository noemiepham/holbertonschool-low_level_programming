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
	unsgined int i, j, k;
	dot_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
	;
	i++;
	dog->name = malloc(i * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (k = 0; k < i; i++)
	dog->name[i] = name[i];
	dog->age = age;
	for (j = 0; owner[j] != '\0'; j++)
	;
	j++;
	dog->owner = malloc(j * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k < j; i++)
		dog->owner[k] = owner[i];
	return (dog);
}
