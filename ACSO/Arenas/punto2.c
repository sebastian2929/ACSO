#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, x;
	float n, m;
	scanf("%d", &x);
	for(i = 0; i < x; i++){
		scanf("%f", &n);
        	scanf("%f", &m);
	        if(n > m){
        	        printf("%f\n", n);
	        }else{
                	printf("%f\n", m);
        	}
	}
	return 0;
}
