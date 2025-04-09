#include <stdio.h>
int main(){
//Sintaxe padrão printf    
//printf("texto com formatação", variavel1, variavel2...);
int turisticos1=20;
int populacao1=60189;
float area1=689.200;
double pib1=848.810;
char estado1='A';
char codigo1[20]="A06";
char cidade1[20]="Penedo";

int turisticos2=15;
int populacao2=2346960;
float area2=351.0;
double pib2=2.40000;
char estado2='B';
char codigo2[20]="C07";
char cidade2[20]="Arapiraca";

printf("Carta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n",codigo1);
printf("Nome da cidade: %s\n", cidade1);
printf("Populaçao: %d\n", populacao1);
printf("Área: %f km2\n " , area1);
printf("PIB: %f mil reais\n", pib1);
printf("Numero de pontos turisticos: %d\n", turisticos1);

printf("\n");

printf("Carta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %f km2\n", area2);
printf("PIB: %f bilhões de reais\n" , pib2);
printf("Numero de pontos turisticos: %d\n", turisticos2);

return 0;



/*printf("%formato1 $formato2 %formato3" , variavel1, variavel2, variavel3)

%d: imprimir um inteiro no formato decimal
%i: equivalente a %d
%f: imprimir um numero de ponto flutuante no formato padrão
%e: imprimir um numero de ponto flutuante na notação cientifica
%c: imprimir uma unica caractere
%s: imprimir uma cadeia(string) de caracteres

*/



}