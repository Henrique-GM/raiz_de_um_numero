#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	
	//inserindo vari�veis.
	float numero, R;
	
	//inserindo n�mero para transform�-lo em ra�z.
	printf("digite um numero\n");
	scanf("%f", &numero);
	
	//inserindo condicionais.
	if(numero > 0){
		R = sqrt(numero);
		
		printf("A raiz do numero digitado eh:%.2f", R);
	}else{
		printf("numero invalido");
	}
	
system("pause");	
return 0;	
}
