#include<stdio.h>

int counter(int n, int count) {
    return n + count;
}

int main() {
    int result = counter(5, 3);
    printf("Counter result: %d\n", result);
    return 0;
}