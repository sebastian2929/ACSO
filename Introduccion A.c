#include <stdio.h>

int main() {
    int veces;
    float num1, num2, resultado;
    char op;
    int valido = 1;
    
    scanf("%i%*c", &veces);
    while(veces > 0){
        scanf("%f%*c", &num1);
        scanf("%f%*c", &num2);
        resultado = num1 + num2;
        veces--;
        printf("El resultado es %f\n", resultado);
    }
    return 0;
}
