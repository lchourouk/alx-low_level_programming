#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 *
 * @name:string  name
 * @age: float age
 * @owner: string owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
#endif
