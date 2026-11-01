#include <stdio.h>

int main() {
    int a[100], n, x, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element: ");
    scanf("%d", &x);

    i = n - 1;

    while(i >= 0 && a[i] > x) {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = x;
    n++;

    printf("Updated array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}