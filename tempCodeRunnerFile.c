#include <stdio.h>

int main() {
    char Alphabet;

    printf("Enter an alphabet: ");
    scanf(" %c", &Alphabet);  

    switch(Alphabet) {
        case 'a':
            printf("%c is a vowel.\n", Alphabet);
            break;

        case 'e':
            printf("%c is a vowel.\n", Alphabet);
            break;

        case 'i':
            printf("%c is a vowel.\n", Alphabet);
            break;

        case 'o':
            printf("%c is a vowel.\n", Alphabet);
            break;

        case 'u':
            printf("%c is a vowel.\n", Alphabet);
            break;

        case 'A':
            printf("%c is a vowel.\n", Alphabet);
            break;

        case 'E':
            printf("%c is a vowel.\n", Alphabet);
            break;

        case 'I':
            printf("%c is a vowel.\n", Alphabet);
            break;

        case 'O':
            printf("%c is a vowel.\n", Alphabet);
            break;

        case 'U':
            printf("%c is a vowel.\n", Alphabet);
            break;

        default:
            printf("%c is a consonant.\n",Alphabet);
            break;
    }

    return 0;
}
