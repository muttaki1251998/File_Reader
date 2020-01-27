#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#include "./headers.h"

int main(int argc, char *argv[])
{   
    /* Reading and printing file a1_words.txt */
    is_first_part_done = false;   
    read_words(fp);      
    print_words(read_words(fp)); 
    alphabatical_word_count(read_words(fp));
    print_alphabetical_word_count(alphabatical_word_count(read_words(fp)));
    
    /* Free all allocated memory */
    free_word_counts(alphabatical_word_count(read_words(fp)));
    free_alphabetical_array(read_words(fp));
    
    /* Reading and printing file a1_words_more.txt */
    is_first_part_done = true;
    read_words(fp);      
    print_words(read_words(fp)); 
    alphabatical_word_count(read_words(fp));
    print_alphabetical_word_count(alphabatical_word_count(read_words(fp)));
    
    /* Free all allocated memory */
    free_word_counts(alphabatical_word_count(read_words(fp)));
    free_alphabetical_array(read_words(fp));

    return 0;
}
