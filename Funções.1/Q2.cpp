/*Faca uma funcao que receba um numero inteiro entre 1 a 12 e imprima em tela o mês e a
sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo:
Entrada = 4. Saída = abril.*/

#include <stdio.h>

int imprimeMes (int mes){
    switch (mes){
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("marco");
        break;
    case 4:
        printf("abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho ");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("agosto");
        break;
    case 9:
        printf("setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("Dezembro");
        break;
    default:
        printf("Mes nao fornecido");
        break;
    }
}
int main (){
    int mes ;
    printf("informe o mes: ");
    scanf("%d",&mes);
    imprimeMes(mes);
}


