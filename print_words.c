#include<stdio.h>
#include<stdlib.h>

void print_words(char words[])
{   
    int i = 0;    

    /* Loop through each character stored inside the array and printing it out */
    for(i=0; words[i] != '\0'; i++)
    {        
        if(words[i] == ' ')
        {
            printf("\n");                       
        }
        else if(words[i] == '\n')
        {            
           i = i++;
           printf("\n");
        }
               
        else
        {
            printf("%c", words[i]);
        }
    }  
    printf("\n");  
   
}
