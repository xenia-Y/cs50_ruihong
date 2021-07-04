#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
    int d = 0;
    int flag = 0, key = 0;
    if (argc != 2)
    {
        flag = 1;
        return 1;
    }
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (argc == 2 && (argv[1][i] >= 48 && argv[1][i] <= 57))
        {
            //printf("%c\n",argv[1][i]);
            flag += 0;                  // if command line has input and the input is digit, flag += 0
        }
        else
        {
            flag += 1;                  // if command line did not has input, flag += 1
            return 1;
        }
    }
    if(flag == 0)                       // if flag = 0, means argv[1][i] are always integer
    {
       // printf("Success\n");
       // printf("%s\n",argv[1]);       //argv[1] is key in string
        string text = get_string("plaintext:");
       // printf("%i\n",(atoi)(argv[1]));
       printf("ciphertext:");
        for(d = 0; d < strlen(text); d++)
        {
            //printf("text:%i\n",text[d]);
            if(isupper(text[d])!=0)     //if input is upper letter, ASCII of A is 65
            {
                printf("%c",((text[d] - 65) + (atoi)(argv[1]))%26 + 65); 
            }
            else if(islower(text[d])!=0) //if input is lower letter, ASCII of a is 97
            {
                printf("%c",((text[d] - 97) + (atoi)(argv[1]))%26 + 97);
            }
            else
            {
                printf("%c",text[d]);   // if text is not letter
            }
        }
        printf("\n");
    }
    else
    {
        printf("./caesar key\n");
    }
}
