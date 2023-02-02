#include <stdio.h>

int main() {
    int veces;
    float num1, num2, resultado;
    char op;
    int valido = 1;
    
    scanf("%i%*c", &veces);
    while(veces > 0){
        scanf("%c%*c", &op);
        scanf("%f%*c", &num1);
        scanf("%f%*c", &num2);
        
        switch (op) {
            case '+':
                resultado = num1 + num2;
                break;
            case '-':
                resultado = num1 - num2;
                break;
            case '*':
            case 'x':
                resultado = num1 * num2;
                break;
            case '/':
                resultado = num1 / num2;
                break;
            default:
                valido = 0;
        }
        veces--;

        if (valido)
            printf("El resultado es %f\n", resultado);
        else
            printf("Operacion invalida\n");
    }
    return 0;
}
