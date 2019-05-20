#include <stdio.h>
int QTD=0;
void divisores(int numero, int cont)
{
   if(numero >= cont)
   {
      if((numero % cont) == 0)
         QTD=QTD+1;
      divisores(numero,cont + 1);
      return;
   }
   else
      return;
}

int main()
{
   int numero, count;
   while(count<10){
       do{ 
           printf("Informe um numero inteiro positivo: ");
           scanf("%d", &numero);
       }while(numero<0);
       divisores(numero,1);
       printf("O numero %d possui %d divisores.\n",numero, QTD);
       QTD=0;
       count++;}
   return 0;
}
