#include <stdio.h>

void sortDesc(int arr[], int n) {
    int i, j, temp;
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[10] = {5,2,9,1,7,6,3,8,4,10};
    sortDesc(arr, 10);

    for(int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    return 0;
}
