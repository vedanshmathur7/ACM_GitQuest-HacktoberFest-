// Triangle using no.s
#include <stdio.h>

int main() {
    int rows = 5; 
            for (int i = 1; i <= rows; ++i) {
        for (int space = 1; space <= rows - i; ++space) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }
         return 0;
}
