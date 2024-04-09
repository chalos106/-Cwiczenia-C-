#ifndef libh
#define libh

int min(int a, int b);

FILE * open(char path[], char mode[]);

void close(FILE *loc);

int couter(char file[]);

void load(char file[], int arr[]);

void paste(char file[], int arr[], long unsigned int size);

void copy(int arr_1[], int arr_2[], int size);

int if_ch(int c);

int characters(int arr[], int size);

int words(int arr[], int size);

int lines(int arr[], int size);

#endif