#include <stdio.h>

int main()
{
	int numero, residuo, mcd;
	int i, numeros[5], respuesta = 0;

    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &numero);
		numeros[i - 1] = numero;

        if (i == 1)
        {
            mcd = numero;
        }
        else
        {
            do
            {
                residuo = mcd % numero;
                mcd = numero;
                numero = residuo;
            } while (residuo != 0);
        }
    }

    printf("%d\n", mcd);
	for(i = 0; i < 5; i++){
		respuesta += numeros[i] / mcd;
		printf("%d\n", numeros[i] / mcd);
	}
	printf("%d\n", respuesta);
    return 0;
}
