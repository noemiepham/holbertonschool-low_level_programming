#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - define new type
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_d - Typedef for structdog
 */
typedef struct dog dog_t;

void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
