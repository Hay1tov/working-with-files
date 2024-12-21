#include <stdio.h>

int main() {
    
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");


    char word[64];
    int count = 0;

    while (!feof(input_file)) {

        fscanf(input_file, "%s", word);
        if (word[0] >= 'a' && word[0] <= 'z') {
            word[0] -= 32;
            fprintf(output_file, "%s ", word);
        }
        else {
            fprintf(output_file, "%s ", word);
        }     
    }

    return 0;
}