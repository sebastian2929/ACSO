#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, m, resultado, sumas, i;
	scanf("%d", &sumas);
	for(i = 0; i < sumas; i++){
		scanf("%d", &n);
	        scanf("%d", &m);
        	resultado = n+m;
	        printf("%d\n", resultado);
	}
	return 0;
}
