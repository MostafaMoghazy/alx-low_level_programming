#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog information structure
 * @name: 1st Criteria
 * @age: 2nd Criteria
 * @owner: 3rd Criteria
 *
 * Description: Ddescription
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for the dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
