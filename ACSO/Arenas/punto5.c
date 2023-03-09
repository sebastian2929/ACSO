#include<stdio.h>
#include<stdlib.h>

float suma(float x, float y){
	return x + y;
}

float resta(float x, float y){
	return x - y;
} 

float multiplicacion(float x, float y){
	return x * y;
}

float division(float x, float y){
	return x / y;
}

int main(){
	int i, j;
	char signo;
	float x, y, resultado;
	scanf("%d", &j);
	for(i = 0; i < j; i++){
		scanf(" %c", &signo);
		scanf("%f", &x);
		scanf("%f", &y);
		switch(signo){
			case '+':
				resultado = suma(x, y);
				break;
			case '-':
				resultado = resta(x, y);
				break;
			case '*':
				resultado = multiplicacion(x, y);
				break;
			case '/':
				if(y != 0){
					resultado = division(x, y);
				}
				break;
		}
		printf("%f\n", resultado);
	} 
	return 0;
}
