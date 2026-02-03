#include <stdio.h>

void minmax(int arr[], int n, int *min, int *max) {
    *min = *max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < *min)
            *min = arr[i];
        if(arr[i] > *max)
            *max = arr[i];
    }
}

int main() {
    int arr[5] = {4, 7, 1, 9, 2};
    int min, max;

    minmax(arr, 5, &min, &max);

    printf("Minimum = %d Maximum = %d", min, max);
    return 0;
}
