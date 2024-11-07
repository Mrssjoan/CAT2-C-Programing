#include <stdio.h>

int main() {
    
    int scores[2][3] = {
        {65, 92},
        {84, 72}
    };

    
    int scores2[3][2] = {
        {35, 70},
        {59, 67},
      
    };

    
    printf("matrix A\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    
    printf("\Matrix B:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores2[i][j]);
        }
        printf("\n");
    }

    return 0;
}