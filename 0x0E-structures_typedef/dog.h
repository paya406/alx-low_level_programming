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

#endif /* DOG_H */
