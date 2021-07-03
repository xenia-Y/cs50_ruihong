#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count_letter(string letter);
int count_word(string letter);
int count_sentence(string letter);

int main(void)
{
    int letters = 0, words = 1, sentence = 0;
    float L = 0, S = 0, index = 0;
    string letter = get_string("Text: ");
    letters = count_letter(letter);
    words += count_word(letter);
    sentence = count_sentence(letter);
    L = ((float)letters/(float)words) * 100;
    S = ((float)sentence/(float)words) * 100;
    index = 0.0588 * L - 0.296 * S - 15.8;
    printf("%i\n",letters);
    printf("%i\n",words);
    printf("%i\n",sentence);    
    if(index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if(index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n",(int) round(index));
    }
}

int count_letter(string letter)
{
    int d = 0;
    for (int i = 0; i < strlen(letter); i++)
    {
        if((letter[i] >= 'a' && letter[i] <= 'z') || (letter[i] >= 'A' && letter[i] <= 'Z'))
        {
            d++;       
        }
    }
    return d;
}

int count_word(string letter)
{
    int x = 0;
    for (int i = 0; i < strlen(letter); i++)
    {
        if(letter[i] == 32)
        {
            x++;
        }
    }
    return x;
}

int count_sentence(string letter)
{
    int y = 0;
    for (int i = 0; i < strlen(letter); i++)
    {
        if(letter[i] == '.' || letter[i] == '?' || letter[i] == '!')
        {
            y++;       
        }
    }
    return y;
}
