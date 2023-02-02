#include <stdio.h>

int main() {
    int veces;
    scanf("%i%*c", &veces);
    while(veces > 0){
        int longitud, contador1, contador2;
        float resultado;
        scanf("%i%*c", &longitud);
        contador1 = longitud - 1;
        contador2 = longitud - 1;
        float vector[longitud - 1];
        while(contador1 >= 0){
            scanf("%f",&vector[contador1]);
            contador1--;
        }
        resultado = vector[0];
        while(contador2 >= 0){
            float numero = vector[contador2]; 
            if(numero < resultado){
                resultado = numero;
            }
            contador2--;
        }
        printf("%f\n", resultado);
        veces--;
    }
    return 0;
}
