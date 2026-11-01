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
        for(j = 0; j < i; j++) {
            if(a[j] == target - a[i]) {
                printf("Pair found: %d and %d", a[j], a[i]);
                return 0;
            }
        }
    }

    printf("Pair not found");

    return 0;
}