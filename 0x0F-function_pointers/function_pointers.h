#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

void print_name(char *name, void (*f)(char *));
void print_uppercase(char *name);
void print_lowercase(char *name);

#endif /* FUNCTION_POINTERS_H */
