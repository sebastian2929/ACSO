#include<stdio.h>
#include<stdlib.h>

int main(){
	int tam, i, j, casos;
	scanf("%d", &casos);
	for(j = 0; j < casos; j++){
		scanf("%d", &tam);
        	float arreglo[tam], min;
	        for(i = 0; i < tam; i++){
        	        scanf("%f", &arreglo[i]);
	        }
	        min = arreglo[0];
	        for(i = 0; i < tam; i++){
        	        if(arreglo[i] < min){
                	        min = arreglo[i];
	                }
        	}
	        printf("%f\n", min);
	}
	return 0;
}

