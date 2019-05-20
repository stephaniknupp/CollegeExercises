#include<stdio.h>
#include<stdlib.h>
	struct alunos{
		char nome[70];
		float AV1;
		float AV2;
		float AV3;
	};
	int main(){
	struct alunos notas[5];
	float media;
	int i;
	for(i=0; i<5; i++){
		printf("\nDigite o nome do aluno: << ");
		gets(notas[i].nome);
		fflush(stdin);
		printf("\nDigita a nota da AV1: << ");
		scanf("%f",&notas[i].AV1);
		fflush(stdin);		
		printf("\nDigite a nota da AV2: << ");
		scanf("%f",&notas[i].AV2);
		fflush(stdin);
		printf("\nDigite a nota da AV3: << ");
		scanf("%f",&notas[i].AV3);
		fflush(stdin);
		if((notas[i].AV1<=notas[i].AV2) && (notas[i].AV1<=notas[i].AV3)){
			media= (notas[i].AV2+notas[i].AV3)/2;
		}
		if(notas[i].AV2<=notas[i].AV1 && notas[i].AV2<=notas[i].AV3){
			media= (notas[i].AV1+notas[i].AV3)/2;
		}
		if(notas[i].AV3<=notas[i].AV1 && notas[i].AV3<=notas[i].AV2){
			media= (notas[i].AV1+notas[i].AV2)/2;
		}
		printf("\n%s tem media = %.1f", notas[i].nome, media);
		if(media>=7){
			printf("\nAprovado!");
		}
		else{
			printf("\nReprovado!");
			}
	}
return 0;
}
