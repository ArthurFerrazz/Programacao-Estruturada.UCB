/*Faça um programa em C para ler 10 números DIFERENTES a serem 
armazenados em um vetor. Os dados deverão ser armazenados no vetor na 
ordem que forem sendo lidos, sendo que caso o usuário digite um número que 
já foi digitado anteriormente, o programa deverá pedir para ele digitar outro 
número. Note que cada valor digitado pelo usuário deve ser pesquisado no 
vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir 
na tela o vetor final que foi digitado.*/

#include <stdio.h>

int main (){
    int num[10], i, y, j;
    for ( i = 0; i < 10; i++){
       printf("Digite o numero %d :", i);
       scanf("%d", &num[i]);
       y = num[i];
        
     for ( j = 0; j < 10; j++){
      if (y == num[j]){
       printf("Digite outro numero pois o numero %d ja existe :", num[j]);
       scanf("%d", &num[j]);
                
 }   
}
 }
}

