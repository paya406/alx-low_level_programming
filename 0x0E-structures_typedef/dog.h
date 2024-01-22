#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 *
 * Description: A structure that represents dogs
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
