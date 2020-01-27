#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#include "./headers.h"

char *read_words(FILE *fp)
{
    char *words;
    
    /* Read the file */   
    if(is_first_part_done == false)
    {
        if( (fp = fopen("a1_words.txt", "r")) == NULL)
        {   
        printf("Could not open the file\n");
        exit(1);
        }
        else
        {           
            fseek(fp, 0, SEEK_SET);  
            words = malloc(file_size(fp));
            if(words == NULL)
            {
                printf("Not enough memory. Program terminating...\n");
                exit(1);
            }

            if(words)
            {
                fread(words, 1, file_size(fp), fp);
            }
            fclose(fp); 
        }
    }
    else if(is_first_part_done == true)
    {
        if( (fp = fopen("a1_words_more.txt", "r")) == NULL)
        {   
        printf("Could not open the file\n");
        exit(1);
        }
        else
        {           
            fseek(fp, 0, SEEK_SET);  
            words = malloc(file_size(fp));
            if(words == NULL)
            {
                printf("Not enough memory. Program terminating...\n");
                exit(1);
            }

            if(words)
            {
                fread(words, 1, file_size(fp), fp);
            }
            fclose(fp); 
        }
    }
    
    return words;
     
}