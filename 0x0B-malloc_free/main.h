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
/**
 * static void copy_word(char *str, char *dest, int len);
 * static char *allocate_and_copy(char *str, int len);
 * static char **fill_word_array(char **arr, char *str, int words);
 */
#endif /* MAIN_H  */
