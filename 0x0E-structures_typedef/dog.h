#ifndef __STRUCT__VAR__H__
#define __STRUCT__VAR__H__

/**
 * struct dog - thaaaaat
 * @name: sssqqq
 * @age: w55sss
 * @owner:asqwtt
 *
 * Description: wxxvvvv
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

#endif /*#ifndef __STRUCT__VAR__H__*/

#ifndef __AR__H__
#define __AR__H__

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*#ifndef __AR__H__*/

