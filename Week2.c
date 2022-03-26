// NUMBER 1 - Readability
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

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

        if ( text[i] == '.')
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

    // index = 0.0588 * L - 0.296 * S - 15.8;
    return count_letters(text);
}

