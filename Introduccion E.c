#include <stdio.h>

int main() {
    int veces;
    scanf("%i%*c", &veces);
    
    while(veces > 0){
        
        char oper;
        scanf("%c", &oper);
        printf("%c\n", oper);
        float num1;
        scanf("%f", &num1);
        printf("%f\n", num1);
        float num2;
        scanf("%f%*c", &num2);
        printf("%f\n", num2);
        float resultado;
        
        if(oper == '+'){
            resultado = num1 + num2;
        }
        else if(oper == '-'){
            resultado = num1 - num2;
        }
        else if(oper == '*'){
            resultado = num1 * num2;
        }
        else if(oper == '/'){
            resultado = num1 / num2;
        }
        veces--;
        printf("%f\n", resultado);
    }
    return 0;
}
