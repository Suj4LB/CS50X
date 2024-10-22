#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Taking the user input
    string user_input = get_string("Enter the sentence : ");

    // Initialising variable with value 0
    int letters = 0;
    int words = 0;
    int sentences = 0;

    // A loop for the entire sentence or paragraph or whatever the user inputs
    for (int i = 0; i < strlen(user_input); ++i)
    {
        char current = user_input[i];

        if (isalpha(current) != 0)
        {
            letters++; // Incrementing letters
        }

        if (current == ' ')
        {
            words++; // Incrementing words
        }

        if (current == '.' || current == '!' || current == '?')
        {
            sentences++; // Incrementing sentences
        }
    }
    // For the last word we increment once again
    words++;

    float L = ((float) letters / (float) words) * 100; // Average number of letters per 100 words
    float s =
        ((float) sentences / (float) words) * 100;  // Average number of sentences per 100 words
    float subindex = 0.0588 * L - 0.296 * s - 15.8; // Coleman-Liau index
    int index = round(subindex);

    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }
}
