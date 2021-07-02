#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int letter_up[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};
int letter_down[] = {};

int compute_score(string word);

int main(void)
{
    for (int i = 0; i < 26; i++)
    {
        letter_down[i] = letter_up[i]+32;

    }
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if ( score1 > score2 )
    {
        printf("Player 1 wins!\n");
        printf("%i\n",score1);
        printf("%i\n",score2);
    }
    if ( score2 > score1 )
    {
        printf("Player 2 wins!\n");
        printf("%i\n",score1);
        printf("%i\n",score2);
    }
    if ( score1 == score2 )
    {
        printf("Tie\n");
        printf("%i\n",score1);
        printf("%i\n",score2);
    }
}

int compute_score(string word)
{
    int score = 0, y = 0, x = 0;
    // TODO: Compute and return score for string
    for(y = 0; y < strlen(word); y++)
    {
        x = 0;
        if(isupper(word[y])!=0)
        {
            x = word[y] - letter_up[0];
            score += POINTS[x];
        }

        else if(islower(word[y])!=0)
        {
            x = word[y] - letter_down[0];
            score += POINTS[x];
        }
        else
        {
            score+=0;
        }
    }
    return score;
}
