#ifndef MAIN_H
#define MAIN_H

/*PRINT FUNCTIONS*/
int _putchar(char c);
void _puts(char *s);
int _abs(int n);
int _atoi(char *s);

/*DIGIT AND ALPHA FUNCTION*/
int _isupper(int c);
int _isdigit(int c);
int _islower(int c);
int _isalpha(int c);

/*STRING FUNCTIONS 1*/
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);

/*STRING FUNCTIONS 2*/
int _strcmp(char *s1, char *s2);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

/*MEMORY FUNCTIONS*/
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);

#endif
