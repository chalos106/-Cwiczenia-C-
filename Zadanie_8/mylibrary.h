#ifndef libh
#define libh

FILE * open(char path[], char mode[]);

void close(FILE *loc);

int couter(char file[]);

void load(char file[], int *arr);

void paste(char file[], int *arr);

void copy(int *arr_1, int *arr_2);

int if_ch(int c);

int characters(int *arr);

int words(int *arr);

int lines(int *arr);

#endif