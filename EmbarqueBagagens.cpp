#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
int p,np,vol,kg,alt,larg,comp,linear,total;
total=0;
for(p=1;p<=30;p++){
	do{
		printf("Informe o número de passagem: \n");
		scanf("%d",&np);
	}while(np<1 || np>30);
	printf("Informe o número de volumes: \n");
	scanf("%d",&vol);
	if(vol<0 || vol>3){
		printf("Número de volumes não permitido.\n");}
	else{
		while(vol>0){
			printf("Informe o peso em kg do volume %d: \n",vol);
			scanf("%d",&kg);
			if(kg>32){
				printf("Volume excedeu o peso permitido.\n");}
			    printf("Informe a altura, largura e comprimento em cm do volume %d: \n",vol);
				scanf("%d",&alt);
				scanf("%d",&larg);
				scanf("%d",&comp);
				vol=vol-1;
				linear= alt+larg+comp;
				total= total+linear;
				if (linear>158)
					printf("A dimensão linear do volume excedeu o permitido.\n");
				if (total>400)
				    printf("A dimensão linear total dos volumes excedeu o permitido.\n");}
		}
	}
return 0; }
