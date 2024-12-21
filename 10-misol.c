#include <stdio.h>

int main() {

    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");

    int number;

    fscanf(input_file, "%d", &number);
    fprintf(output_file, "%d ", number);

    while (!feof(input_file)) {
        fscanf(input_file, "%d", &number);
    }

    fprintf(output_file, "%d ", number);

    return 0;
}
