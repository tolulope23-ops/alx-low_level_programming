#ifndef DOG_H
#define DOG_H

/**
 * struct dog - New type of struct decribing a dog
 * @name: The name ofthe dog
 * @age: The dog's age
 * @owner: The owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

/**
 * dog_t - A typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
