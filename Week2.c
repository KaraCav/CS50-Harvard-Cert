// NUMBER 1 - Readability
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// index = 0.0588 * L - 0.296 * S - 15.8;
// L is the average number of letters per 100 words in the text
// and S is the average number of sentences per 100 words
// number of letters, number of words, number of sentences
int count_letters(string text)
{
    int totalLetters = 0;
    for(int i = 0; i < strlen(text); i++)
    {
        if(isalnum(text[i]))
        {
            totalLetters += 1;
        }
    }
    printf("%i \n", totalLetters);
    return totalLetters;
}

int count_words(string text)
{
 int totalWords = 1;
    for(int i = 0; i < strlen(text); i++)
    {
        if(isspace(text[i]))
        {
            totalWords += 1;
        }
    }
    printf("%i \n", totalWords);
    return totalWords;
}

int count_sentences(string text)
{
 int totalSentences = 1;
 char testAtIndex;
    for(int i = 0; i < strlen(text); i++)
    {
        testAtIndex = text[i];
        if (strcmp(testAtIndex, ".") == 0);
        {
            totalSentences += 1;
        }
    }
    printf("%i \n", totalSentences);
    return totalSentences;
}

int main(void)
{
    string text = get_string("Text: ");
    printf("%s \n", text);
    // run count words, count letters, and count sentences
    count_words(text);
    count_sentences(text);
    // return the resulting equation from these functions
    return count_letters(text);
}
