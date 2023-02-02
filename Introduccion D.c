#include <stdio.h>

int main() {
    int veces;
    scanf("%i%*c", &veces);
    while(veces > 0){
        int longitud, contador1, contador2;
        int resultado = 0;
        scanf("%i%*c", &longitud);
        contador1 = longitud - 1;
        contador2 = longitud - 1;
        int vector[longitud - 1];
        while(contador1 >= 0){
            scanf("%i%*c",&vector[contador1]);
            contador1--;
        }
        while(contador2 >= 0){
            resultado = resultado + vector[contador2];
            contador2--;
        }
        printf("%i\n", resultado);
        veces--;
    }
    return 0;
}
