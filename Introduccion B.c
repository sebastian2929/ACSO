#include <stdio.h>

int main() {
    int veces;
    float num1, num2;
    char op;
    int valido = 1;
    
    scanf("%i%*c", &veces);
    while(veces > 0){
        scanf("%f%*c", &num1);
        scanf("%f%*c", &num2);
        if(num1 < num2){
            printf("%f\n", num2);
        }
        else{
            printf("%f\n", num1);
        }
        veces--;
    }
    return 0;
}
