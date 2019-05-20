#include<stdio.h>
#include <locale.h>
#include<stdlib.h>
void Menu(){	
	printf("\n==============================");
	printf("\n     Menu de Opções:     \n");
	printf("0: Sair.\n1: Fatorial\n2: Soma dos termos.");
	printf("\n==============================");
	}
int fatorial (int num){
	if (num == 0)
	return 1;
	else
	return (num * fatorial(num -1));
}
int soma (int n){
	if (n == 1)
	return 1;
	else
	return (n + soma(n -1));
	
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	int op, a, resul;
	do{
		Menu();
		printf("\nDigite a opção desejada: << ");
		do{
			scanf("%d",&op); 
		}while(op!=1 && op!=2 && op!=0);
		if(op==1){
			printf("Digite um número inteiro maior que zero: << ");
			do{
				scanf("%d",&a);
			}while(a<0);
			resul=fatorial(a);
			printf("Fatorial de %d = %d\n", a, resul);
			system("pause");
		}
		if(op==2){
			printf("Digite um número inteiro maior que zero: << ");
			do{
				scanf("%d",&a);
			}while(a<0);
			resul=soma(a);
			printf("A soma de 1 a %d = %d\n", a, resul);
			system("pause");
		}
	}while(op!=0);
return 0;
}

