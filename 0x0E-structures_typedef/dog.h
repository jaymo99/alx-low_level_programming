#ifndef DOG_H
#define DOG_H

/**
 * struct dog - containes properties about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
