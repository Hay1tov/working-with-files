#include<stdio.h>


int main(){
    
    FILE* input_file = fopen("input.txt", "r" );
    FILE* output_file = fopen("output.txt", "w");
  
    int number;   
    int result = 0;

    fscanf(input_file, "%d", &number);

    for (int i = 1; i <= number-1; i++) {

        fprintf(output_file, "%d + ", i);
        result += i;
    }
    fscanf(input_file, "%d", &number);
    fprintf(output_file, "%d", number);
    result += number;

    fprintf(output_file, " = %d", result);

    return 0;
}