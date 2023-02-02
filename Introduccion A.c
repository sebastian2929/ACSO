#include <stdio.h>

int main() {
    int veces;
    int num1, num2, resultado;
    
    scanf("%i%*c", &veces);
    while(veces > 0){
        scanf("%i%*c", &num1);
        scanf("%i%*c", &num2);
        resultado = num1 + num2;
        veces--;
        printf("%i\n", resultado);
    }
    return 0;
}
