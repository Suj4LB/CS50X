#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// points array based on the game description -
int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// score counting function declared
int scoreCounter(string word);

int main(void)
{
    string player1;
    string player2;

    player1 = get_string("Enter the first word: ");
    player2 = get_string("Enter the second word: ");

    int score1 = scoreCounter(player1);
    int score2 = scoreCounter(player2);

    if (score1 > score2) // score of player1 is greater so he/she wins
    {
        printf("Player 1 wins");
    }
    else if (score2 > score1) // score of player2 is greater so he/she wins
    {
        printf("Player 2 wins");
    }
    else // otherwise its a tie
    {
        printf("Tie");
    }
}

int scoreCounter(string word)
{
    int score = 0;

    // Counting the score
    for (int i = 0; i < strlen(word); ++i)
    {
        if (isupper(word[i])) // calculating for uppercase alphabets
        {
            score += points[word[i] - 'A'];
        }
        else if (islower(word[i])) // calculating for lowercase alphabets
        {
            score += points[word[i] - 'a'];
        }
        // Non-alphabetic characters are ignored
    }
    return score;
}
