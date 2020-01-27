/*

File: alphabetical_printing.c
Author: Muhammad Muttaki
Date: 27/01/2020
Course: CIS 2500
Description: This program reads in two files and prints out the words in separate lines. Unfortunately I was unable to code the following functions:
            create_alphabetical_array() 
            print_words_alphabetically()
            
            This program includes the following functions:
            int file_size(FILE *fp);
            char *read_words(FILE *fp);
            void print_words(char words[]);
            int *alphabatical_word_count(char words[]);
            void print_alphabetical_word_count(int word_numbers[]);
            void free_alphabetical_array(char array[]);
            void free_word_counts(int word_count[]);    (I wrote this function for my own ease. Writing this function wasn't mandatory.)

*/


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
    
    printf("\n");

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
