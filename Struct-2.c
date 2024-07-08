// Construa uma estrutura aluno com nome, numero de matrícula e curso.
// Leia do usuário a informação de 5 alunos, armazene em vetor dessa estrutura
// e imprima os dados na tela.




#include <stdio.h>
#include <stdlib.h>

struct Dados{
  char nome[2][50];
  int numero_matricula[2];
  char curso[2][50];
};

int main() {
  int j,i;
  struct Dados negocio;

  for(i=0;i<2;i++){
    
    printf("\nDigite o nome do aluno: ");
    fgets(negocio.nome[i],50,stdin);
    printf("\nDigite a matricula do aluno: ");
    scanf("%d",&negocio.numero_matricula[i]);
    printf("\nDigite o curso do aluno: ");
    getchar();
    fgets(negocio.curso[i],50,stdin);
     
    }
    printf("\n");
    for(i=0;i<2;i++){
      printf("\n");
      printf("nome: %smatricula: %i \ncurso: %s ",negocio.nome[i],negocio.numero_matricula[i],negocio.curso[i]);
    }
}

