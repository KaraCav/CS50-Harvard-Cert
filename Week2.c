// NUMBER 1 - Readability
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// index = 0.0588 * L - 0.296 * S - 15.8;
// L is the average number of letters per 100 words in the text
// and S is the average number of sentences per 100 words
int count_letters(string text)
{
    int counter = 0;
    for(int i = 0; i < strlen(text); i++)
    {
        if(isalnum(text[i]))
        {
            counter += 1;
        }
    }
    printf("%i", counter);
    // let gradeLevel = 0;
    return counter;
}
int main(void)
{
    string text = get_string("Text: ");
    printf("%s", text);

    return count_letters(text);
}
