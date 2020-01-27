#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

FILE *fp;

int file_size(FILE *fp);
char *read_words(FILE *fp);
void print_words(char words[]);
int *alphabatical_word_count(char words[]);
void print_alphabetical_word_count(int word_numbers[]);
void free_alphabetical_array(char array[]);
void free_word_counts(int word_count[]);

bool is_first_part_done;