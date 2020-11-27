#include <stdio.h>
#include <stdlib.h>

int main()
{
    char d;
    int Uppercase_vowel, Lowercase_vowel;
    printf("Enter a letter from the alphabet: ");
    scanf("%c", &d);

    Uppercase_vowel = (d == 'A' || d == 'E' || d == 'I' || d == 'O' || d == 'U');

    Lowercase_vowel = (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u');

    if (Uppercase_vowel || Lowercase_vowel)
    {
        printf("%c is a vowel.", d);
    }
    else
    {
        printf("%c is a consonant.", d);
    }
    return 0;
}
