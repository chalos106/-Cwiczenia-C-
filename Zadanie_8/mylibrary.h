#ifndef libh
#define libh

FILE * open(char path[], char mode[]);

void close(FILE *loc);

int couter(char file[]);

void load(char file[], int *restrict arr);

void paste(char file[], const int *restrict arr);

void copy(const int *restrict arr_1, int *restrict arr_2);

int if_ch(int c);

int characters(const int *restrict arr);

int words(const int *restrict arr);

int lines(const int *restrict arr);

#endif