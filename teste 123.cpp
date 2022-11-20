#include <iostream>
#include <stdio.h>

int main(){
	
	const int numero = 500;
	int numero1;
	int contador = 0;
	printf("Usuario digite a quantidade o qual deseja imprimir: \n");
	scanf("%d",&numero1);
	while( contador <= numero ){
		
		printf("esse e o numero %d em relacao ao limite %d \n ",contador,numero);
		contador ++;
		
	}
return 0;
}
