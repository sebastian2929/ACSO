#include<stdio.h>
#include<stdlib.h>

void leer(int tam, int *arreglo){
	int i;
	for(i = 0; i < tam; i++){
		scanf("%d", &arreglo[i]);
	}
}

int sumar(int *arreglo, int tam){
	int suma = 0, i;
	for(i = 0; i < tam; i++){
		suma += arreglo[i];
	}
	return suma;
}

int main(){
	int tam, respuesta, i, j;
	scanf("%d", &i);
	for(j = 0; j < i; j++){
		scanf("%d", &tam);
		int arr[tam];
        	leer(tam, arr);
	        respuesta = sumar(arr, tam);
        	printf("%d\n", respuesta);
	}
	return  0;
}
