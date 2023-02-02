#include <stdio.h>

int main() {
    int veces;
    scanf("%i%*c", &veces);
    
    while(veces > 0){
        
        char oper;
        scanf("%c", &oper);
        float num1;
        scanf("%f", &num1);
        float num2;
        scanf("%f%*c", &num2);
        int valido;
        float resultado = 0;
        
        if(oper == '+'){
            resultado = num1 + num2;
            valido = 1;
        }
        else if(oper == '-'){
            resultado = num1 - num2;
            valido = 1;
        }
        else if(oper == '*'){
            resultado = num1 * num2;
            valido = 1;
        }
        else if(oper == '/'){
            resultado = num1 / num2;
            valido = 1;
        }
        else{
            valido = 0;
        }
        if(valido == 1){
            printf("%f\n", resultado);
        }
        if(valido == 0){
            printf("Error\n");
        }
        veces--;
    }
    return 0;
}
