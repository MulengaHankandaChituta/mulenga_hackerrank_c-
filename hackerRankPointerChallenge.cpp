#include <stdio.h>
#include <stdlib.h>

// UUpdates a with the sum and b with the absolute difference
void update(int *a, int*b) {
    int sum = *a + *b;
    int difference = abs(*a - *b);

    *a = sum;
    *b = difference;
}

int main() {
    int a, b;
    int *pa = &a;
    int *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    
    printf("%d\n%d\n", a, b);
    return 0;
}