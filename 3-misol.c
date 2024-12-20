#include <stdio.h>
#include <string.h>

int main() {

    char word[64];

    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");

    int count = 0, next;
    
    printf("Qatorni kiriting: "); scanf("%d", &next);
   
    while (fgets(word, sizeof(word), input_file))  {
        count++;

        if (count != next) {
            fprintf(output_file, "%s", word);
        }
    }
    
}