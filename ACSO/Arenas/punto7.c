#include<stdio.h>

int main(){
	int n, i, j, tam;
	scanf("%d", &n);
	for(j = 0; j < n; j++){
		scanf("%d", &tam);
		float arr1[tam], arr2[tam], res = 0;
		for(i = 0; i < tam; i++){
			scanf("%f", &arr1[i]);
		}
		for(i = 0; i < tam; i++){
                scanf("%f", &arr2[i]);
        }
		for(i = 0; i < tam; i++){
            res += arr1[i] * arr2[i];
        }
		printf("%f\n", res);
	}
	return 0;
}
