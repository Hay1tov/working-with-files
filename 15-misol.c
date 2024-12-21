#include <stdio.h>

int main(){

    FILE *input_file = fopen("input.txt","r");
    FILE *output_file = fopen("output.txt","w");

    char sign;
    int result = 0;


    while ((sign = fgetc(input_file)) != EOF){
        if (sign == '+') {
            result++;
        }
        else if (sign == '-'){
            result++;
        }
        else if (sign == '/'){
            result++;
        }
        else if (sign == '*'){
            result++;
        }
    }
    fprintf(output_file,"Amallar soni: %d ta\n",result);
    fclose(output_file);
    
    return 0;
}