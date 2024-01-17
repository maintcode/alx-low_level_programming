#ifndef MAIN_H
#define MAIN_H

char *argstostr(int ac, char **av);
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int count_words(char *str);
char **strow(char *str);
static void copy_word(car *str, char *dest, int len);
static char *allocate_and_copy(char *str, int len);

#endif /* MAIN_H  */
