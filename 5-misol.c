#include<stdio.h>


int main(){
    
    FILE* input = fopen("input.txt", "r" );
    FILE* output_toq = fopen("output.toq", "w");
    FILE* output_juft = fopen("output.juft", "w");
  
    int number, juft, toq;

    for (int i = 0; i < 8; i++) {
        fscanf(input, "%d", &number);

        if(number % 2 == 0) {
            fprintf(output_juft, "%d ", number);
        }
        else if(number % 2 == 1) {
            fprintf(output_toq, "%d ", number);
        }  
    }

    return 0;
}