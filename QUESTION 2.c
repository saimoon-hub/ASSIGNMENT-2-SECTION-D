#include <stdio.h>

int main() {
    int a[100], n, target, i, j;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] + a[j] == target) {
                printf("Pair found: %d and %d", a[i], a[j]);
                return 0;
            }
        }
    }

    printf("Pair not found");

    return 0;
}