//65040233130 pawornrut santudsomeruatkarn
#include <stdio.h>

int main() {
    int integer, odd_count = 0, even_count = 0;
    printf("Enter An Integer Number: ");
    scanf("%d", &integer);

    while (integer >= 1) {
        if (integer % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }

        printf("Enter An Integer Number (0 to stop): ");
        scanf("%d", &integer);
    }

    printf("Count of odd integerbers: %d\n", odd_count);
    printf("Count of even integerbers: %d\n", even_count);

    
    
}

