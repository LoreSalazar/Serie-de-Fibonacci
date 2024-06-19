#include <stdio.h>

int fibo(int inicio, int anterior, int n);

int main(){
	
	int n=5, a=0, b=1;
	
	printf("¿Cuantos numeros de la serie deseas ver?: ");
	scanf("%d", &n);
	
	switch (n){
		case 0:
			printf("OK NO TE MOSTRAREMOS NADA POR PUTO");
			break;
		case 1:
			printf("Tu serie de Fibonacci es: %d", a);
			break;
		case 2:
			printf("Tu serie de Fibonacci es: %d, %d", a, b);
			break;
		default:
			printf("Tu serie de Fibonacci es: %d, %d", a, b);
			n = n-2;
			fibo(a,b,n);
	}
	
	return 0;
}

int fibo(int inicio, int anterior, int n){
	//-------------Al inicio del programa empieza con n = 5
	int result;
	
	if(n>0){
		result = inicio + anterior;
		inicio = anterior;
		anterior = result;
		printf(", %d", result);
		
		fibo(inicio, anterior, n-1);
	}

}
