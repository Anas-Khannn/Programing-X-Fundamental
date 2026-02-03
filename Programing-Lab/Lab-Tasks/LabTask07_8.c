#include <stdio.h>
int k_search(int arr[], int size, int key, int k)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            count++;
        if (count == k)
            return i;
    }
    return -1;
}
int main()
{
    int arr[10], key, k;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    printf("Enter key and k: ");
    scanf("%d %d", &key, &k);
    int index = k_search(arr, 10, key, k);
    if (index != -1)
        printf("The %dth occurrence found at index %d\n", k, index);
    else
        printf("Not found\n");
    return 0;
}
