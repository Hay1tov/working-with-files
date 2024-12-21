#include <stdio.h>

int main(){

    FILE *input_file = fopen("input.txt","r");
    FILE *output_file = fopen("output.txt","w");

    char sign;
    int plus = 0, minus = 0, qavs = 0, qavs2 = 0 , teng = 0, div = 0, sqr = 0;


    while ((sign = fgetc(input_file)) != EOF){
        if (sign == '+') {
            plus++;
        }
        else if (sign == '-'){
            minus++;
        }
        else if (sign == '('){
            qavs++;
        }
         else if (sign == ')'){
            qavs2++;
        }
        else if (sign == '='){
            teng++;
        }
        else if (sign == '/'){
            div++;
        }
        else if (sign == '*'){
            sqr++;
        }
    }
    fprintf(output_file,"+ : %d ta\n",plus);
    fprintf(output_file,"- : %d ta\n",minus);
    fprintf(output_file,"* : %d ta\n",sqr);
    fprintf(output_file,"/ : %d ta\n",div);
    fprintf(output_file,"( : %d ta\n",qavs);
    fprintf(output_file,") : %d ta\n",qavs2);
    fprintf(output_file,"= : %d ta\n",teng);

    fclose(output_file);
    
    return 0;
}