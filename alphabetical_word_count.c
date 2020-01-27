#include<stdio.h>
#include<stdlib.h>

int *alphabatical_word_count(char words[])
{
    int i=0; 
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,_i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;

    for(i=0; words[i] != '\0'; i++)
    {
        /* Get the first character of a word */
        if(words[i-1] == ' ' || words[i-1] == '\n')
        {
           if(words[i] == 'a' || words[i] == 'A')
            {
                a++;
            }
            else if(words[i] == 'b' || words[i] == 'B')
            {
                b++;
            }
            else if(words[i] == 'c' || words[i] == 'C')
            {
                c++;
            }
            else if(words[i] == 'd' || words[i] == 'D')
            {
                d++;
            }
            else if(words[i] == 'e' || words[i] == 'E')
            {
                e++;
            }
            else if(words[i] == 'f' || words[i] == 'F')
            {
                f++;
            }            
            else if(words[i] == 'g' || words[i] == 'G')
            {
                g++;
            }
            else if(words[i] == 'h' || words[i] == 'H')
            {
                g++;
            }
            else if(words[i] == 'i' || words[i] == 'I')
            {
                _i++;
            }
            else if(words[i] == 'j' || words[i] == 'J')
            {
                j++;
            }
            else if(words[i] == 'k' || words[i] == 'K')
            {
                k++;
            }
            else if(words[i] == 'l' || words[i] == 'L')
            {
                l++;
            }
            else if(words[i] == 'm' || words[i] == 'M')
            {
                m++;
            }
            else if(words[i] == 'n' || words[i] == 'N')
            {
                n++;
            }
            else if(words[i] == 'o' || words[i] == 'O')
            {
                o++;
            }
            else if(words[i] == 'p' || words[i] == 'P')
            {
                p++;
            }
            else if(words[i] == 'q' || words[i] == 'Q')
            {
                q++;
            }
            else if(words[i] == 'r' || words[i] == 'R')
            {
                r++;
            }
            else if(words[i] == 's' || words[i] == 'S')
            {
                s++;
            }
            else if(words[i] == 't' || words[i] == 'T')
            {
                t++;
            }
            else if(words[i] == 'u' || words[i] == 'U')
            {
                u++;
            }
            else if(words[i] == 'v' || words[i] == 'V')
            {
                v++;
            }
            else if(words[i] == 'w' || words[i] == 'W')
            {
                w++;
            }
            else if(words[i] == 'x' || words[i] == 'X')
            {
                x++;
            }
            else if(words[i] == 'y' || words[i] == 'Y')
            {
                y++;
            }
            else if(words[i] == 'z' || words[i] == 'Z')
            {
                z++;
            }

        }       

    }

    int *word_count = malloc(sizeof(int) * 27);
    if(word_count == NULL)
    {
        printf("Not enough memory. Program terminating...\n");
        exit(1);
    }     
    
    /* Assign the values of the alphabets to the array */
    word_count[0] = a;
    word_count[1] = b;
    word_count[2] = c;
    word_count[3] = d;
    word_count[4] = e;
    word_count[5] = f;    
    word_count[6] = g;
    word_count[7] = h;
    word_count[8] = _i;
    word_count[9] = j;
    word_count[10] = k;
    word_count[11] = l;
    word_count[12] = m;
    word_count[13] = n;
    word_count[14] = o;
    word_count[15] = p;
    word_count[16] = q;
    word_count[17] = r;
    word_count[18] = s;
    word_count[19] = t;
    word_count[20] = u;
    word_count[21] = v;
    word_count[22] = w;
    word_count[23] = x;
    word_count[24] = y;
    word_count[25] = z;
    
    return  word_count;
 
}