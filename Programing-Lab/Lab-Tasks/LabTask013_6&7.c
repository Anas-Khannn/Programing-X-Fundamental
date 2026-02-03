#include <stdio.h>
#include <string.h>

int main() {
    char text[200], pattern[50];
    int count = 0;

    printf("Enter the text : ");
    fgets(text, sizeof(text), stdin);

    printf("Enter the pattern : ");
    scanf("%s", pattern);

    printf("Locations : ");
    for(int i = 0; text[i] != '\0'; i++) {
        if(strncmp(&text[i], pattern, strlen(pattern)) == 0) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nNumber of hits : %d", count);
    return 0;
}
