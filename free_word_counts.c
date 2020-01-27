#include<stdio.h>
#include<stdlib.h>

void free_word_counts(int word_count[])
{
    free(word_count);
}