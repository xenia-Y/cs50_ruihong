#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int letter[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};

int main(int argc, string argv[])
{
    int d = 0,flag = 0, x = 0, y = 0; // y is the difference between text and key
    int duplicate = 0;
    if (argc != 2)
    {
        flag = 1;
        printf("Usage: ./substitution key\n");
        return 1;
    }
   for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        for(int j = 0; j < 52; j++)
        {
            if(argv[1][i] == letter[j])
            {
                duplicate += 1;
                //printf("%c",letter[j]);
                letter[j] = 0;
                //printf("%i\n",duplicate);
            }
            else
            {
                duplicate += 0;
            }
        }
        if(argc == 2 && ((argv[1][i] >= 65 && argv[1][i] <= 90) || (argv[1][i] >= 97 && argv[1][i] <= 122)))
        {
            //printf("%i\n",flag);
            flag += 0;                  // if command line has input and the input is digit, flag += 0
            if (duplicate == 26)
            {
                //printf("fw");
                flag += 0;
                d = 1;
            }
        }
        else
        {
            flag += 1;                  // if command line did not has input, flag +=
            printf("fff");
            //printf("Key must contain 26 characters.\n");
            return 1;
        }
       
    }
    
    if(d!=1)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    if(flag == 0 && d ==1 )                       // if flag = 0, means argv[1][i] are always integer, and argv[1] has 26 letters.
    {
       string text = get_string("plaintext:");     //enter key;
       printf("ciphertext:");
       for (x = 0; x < strlen(text); x++)
       {
           y = 0;
            if(isupper(text[x])!=0)     //if input is upper letter, ASCII of A is 65
            {
                y = (text[x] - 65);
                if(islower(argv[1][y]) != 0)
                {
                    printf("%c",argv[1][y] - 32);
                }
                else
                {
                printf("%c",argv[1][y]);
                }
            }
            else if(islower(text[x])!=0) //if input is lower letter, ASCII of a is 97
            {
                y = (text[x] - 97);
                if(isupper(argv[1][y]) != 0)
                {
                    printf("%c",argv[1][y] + 32);
                }
                else
                {
                printf("%c",argv[1][y]);
                }
            }
            else
            {
                printf("%c",text[x]);   // if text is not letter
            }
        }
        printf("\n");
    }
    else if(flag != 0 || d!=1)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
}
