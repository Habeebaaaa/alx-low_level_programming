#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog struct
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Description: long dog struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
