Structures, typedef

Define a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *

Write a function that initialize a variable of type struct dog
Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

Define a new type dog_t as a new name for the type struct dog.

Write a function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails

Write a function that frees dogs.
Prototype: void free_dog(dog_t *d);
