#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    // TODO
    for (int i = 0; i < candidate_count; i++)
    {
        if(strcmp(candidates[i].name, name) == 0)
        {
            candidates[i].votes ++;
            return true;
        }
    }
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    int min = 0, temp_votes = 0, flag = 1;
    string temp_name;
    for (int i=0; i < candidate_count-1; i++)
    {
        min = i;
        for (int j=i; j < candidate_count; j++)
        {
            if(candidates[j].votes < candidates[min].votes)
            {
                min = j;
            }
            if(min != i)
            {
                temp_name = candidates[i].name;
                temp_votes = candidates[i].votes;
                candidates[i]= candidates[j];
                candidates[j].name = temp_name;
                candidates[j].votes = temp_votes;
            }
        }
        if(candidates[i].votes == candidates[i+1].votes)
        {
            flag++;
        }
    }
    for(int x=0;x<flag;x++)
    {
        printf("%s\n",candidates[candidate_count - x - 1].name);
        //printf("%i\n",flag);
    }
}
