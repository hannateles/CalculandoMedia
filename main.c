/* DECLARAÇÃO DE BIBLIOTECAS */

#include <math.h>
#include <stdio.h>
#include <stdbool.h>

/* DECLARAÇÃO DE VARIAVES */

int menu  = 0;

float nota1 = 0, nota2 = 0,nota3 = 0, nota4 = 0, resultado;

char mensagem[100] = "";
/* INICIO DO PROGRAMA PRINCIPAL */
int main(void) {                    // MENU DE OPÇÕES
  printf("Selecione a matéria:\n");  
  printf("1 - Matemática\n");         
  printf("2 - Português\n");          
  printf("3 - História\n");           

  printf("Digite o número da matéria escolhida: ");
  scanf("%d", &menu);
  if (menu == 1){
    printf("Você escolheu Matemática\n");
    printf("Digite a nota da sua primeira atividade: ");
    scanf("%f", &nota1);
    printf("Digite a nota da sua segunda atividade: ");
    scanf("%f", &nota2);
    
    if ((nota1 <= 10) && (nota2<=10)){
      resultado = nota1 + nota2;
      resultado= resultado/2;
      printf("sua media é:%.2f\n",resultado);

    }
    else {
      printf("Nota invalida , digite uma nota entre 0 a 10\n");
    }
  }
    else if(menu == 2){
        printf("Você escolheu Português\n");
        printf("Digite a nota da sua primeira atividade: ");
        scanf("%f", &nota1);
        printf("Digite a nota da sua segunda atividade: ");
        scanf("%f", &nota2);
        printf("Digite a nota da sua terceira atividade: ");
        scanf("%f", &nota3);
        if ((nota1 <= 10) && (nota2<=10)){
          resultado = nota1 + nota2 + nota3;
          resultado= resultado/3;
          printf("sua media é:%.2f\n",resultado);
        }
        else {
          printf("Nota invalida , digite uma nota entre 0 a 10\n");
        }
    }
    else if (menu == 3){
      printf("Você escolheu História\n");
      printf("Digite a nota da sua primeira atividade: ");
      scanf("%f", &nota1);
      printf("Digite a nota da sua segunda atividade: ");
      scanf("%f", &nota2);
      printf("Digite a nota da sua terceira atividade: ");
      scanf("%f", &nota3);
      printf("Digite a nota da sua terceira atividade: ");
      scanf("%f", &nota4);
      if ((nota1 <= 10) && (nota2<=10)){
        resultado = nota1 + nota2 + nota3 + nota4;
        resultado= resultado/4;
        printf("sua media é:%.2f\n",resultado);
      }
      else {
        printf("Nota invalida , digite uma nota entre 0 a 10\n");
      }
    }
    else {
    printf("OPÇÃO INVÁLIDA\n");
    }
  if((resultado <= 4) && (resultado >= 0)){
    printf("Você está reprovado\n");}
  else if((resultado <= 6) && (resultado >= 5)) {
    printf("Você está em recuperação\n");
  } 
  else if((resultado <= 10) && (resultado >= 7)) {
    printf("PARABÉNS ! Você está aprovado\n");
  }

  
  return 0;
}