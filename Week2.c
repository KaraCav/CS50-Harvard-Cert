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

// Number 2 - Caesar Cipher - encrypt a string by moving letters by the number provided by the user
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


bool only_digits(string arg1)
{
    for (int i = 0; i < strlen(arg1); i++)
    {
        if(isdigit(arg1[i]) == 0) {
            printf("Usage: ./caesar key\n");
            return false;
        }
    }
    return true;
}

char rotate(int cipherkey, char plainLetter)
{
    int normalizeCipherKey = cipherkey;
// For each character in the plaintext, rotate it using the key
    if (cipherkey > 26) {
        normalizeCipherKey = cipherkey % 26;
        printf("line 26 cipher key 2 %i\n%c\n", normalizeCipherKey, plainLetter);
      //  printf("line 27 plain text %c\n", plainLetter);
    }
    if (isalpha(plainLetter)) {
    //    if (normalizeCipherKey + )
        // plainLetter += cipherkey;
        int finalLetter = atoi(&plainLetter);
        int finalCipher = finalLetter % 26;
        finalLetter += finalCipher;
    }
    return plainLetter;
}

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Error: run program with one parameter\n");
        return 1;
    }
    else
    {
// make sure all indices in argv are digits
        if(only_digits(argv[1]))
        {
// if they're all digits, convert string to int
            int cipherkey = atoi(argv[1]);
       //     printf("line 56 cipher key %i\n", cipherkey);

// Prompt user for plaintext
            string userText = get_string("plaintext: ");

            printf("ciphertext: ");
            for (int i = 0; i < strlen(userText); i++)
            {
              //  sprintf("%i", "%s", rotate(cipherkey, &userText[i]));
              char letter = rotate(cipherkey, userText[i]);    // pass int for cipher and char for text
            printf("line 66 %c", letter);
            }
            printf("\n");
        }
        else // if user inputs cipher that isn't a digit, return 1
        {
            return 1;
        }
    }
}
