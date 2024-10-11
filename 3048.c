#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int *sequence = (int *)malloc(N * sizeof(int));
    // if (sequence == NULL) {
    //     printf("Memory allocation failed.\n");
    //     return 1;
    // }

    for (int i = 0; i < N; i++) {
        scanf("%d", &sequence[i]);
    }

    int max_length = 0;
    int current_length = 1;

    for (int i = 1; i < N; i++) {
        if (sequence[i] != sequence[i - 1]) {
            current_length++;
            max_length = (current_length > max_length) ? current_length : max_length;
        } else {
            current_length = 1;
        }
    }

    printf("%d\n", max_length);

    free(sequence);
    return 0;
}