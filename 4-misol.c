#include<stdio.h>


int main(){
    
    FILE* input = fopen("input.txt", "r" );
    FILE* output = fopen("output.txt", "w");
  
    int number;   
    int result = 0;

    for (int i = 0; i < 4; i++) {

        fscanf(input, "%d", &number);
        fprintf(output, "%d + ", number);
        result += number;
    }
    fscanf(input, "%d", &number);
    result += number;
    fprintf(output, "%d = %d", number, result);

    return 0;
}