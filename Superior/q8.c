#include <stdio.h>

void findIntersection(int arr1[], int arr2[], int m, int n) {
    int i, j;
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
}
int main() {
    int arr1[10], arr2[10], i, j, m, n;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &m);

    printf("Enter the elements of the first array:\n");
    for(i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n);

    printf("Enter the elements of the second array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("The intersection of the two arrays is: ");
    findIntersection(arr1, arr2, m, n);

    return 0;
}