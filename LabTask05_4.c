#include <stdio.h>

int main() {
    int Enter_amount;
    int hundred_notes;
    int  fifty_notes;
    int five_notes;
    int one_note;

    printf("Enter the amount of (Notes): ");
    scanf("%d", &Enter_amount);

    hundred_notes = Enter_amount / 100;
    Enter_amount %= 100;

    fifty_notes = Enter_amount / 50;
    Enter_amount %= 50;

    five_notes = Enter_amount / 5;
    one_note = Enter_amount % 5;

    printf("Notes of 100: %d\n", hundred_notes);
    printf("Notes of 50 : %d\n", fifty_notes);
    printf("Notes of 5  : %d\n", five_notes);
    printf("Notes of 1  : %d\n", one_note);

    return 0;
}
