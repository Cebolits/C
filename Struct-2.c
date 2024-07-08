// 3.Crie uma estrutura representando os alunos de um determinado curso. A
// estrutura deve conter a matrícula do aluno, nome, nota da primeira prova,
// nota da segunda prova e nota da terceira prova.
// (a) Permita ao usuario entrar com os dados de 5 alunos.
// (b) Encontre o aluno com maior nota da primeira prova.
// (c) Encontre o aluno com maior media geral.
// (d) Encontre o aluno com menor media geral
// (e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o
// valor 6 para aprovac ̧ao.

#include <stdio.h>
#include <stdlib.h>

struct Dados {
  char nome[5][50];
  int numeromatricula[5];
  char curso[5][50];
  float nota1[5];
  float nota2[5];
  float nota3[5];
  float media[5];
};

int main() {
  struct Dados negocio;
  int i, maiornota1 = 0, maiormedia = 0, menormedia = 0;

  
  for (i = 0; i < 5; i++) {
    printf("\nDigite o nome do aluno: ");
    getchar(); 
    fgets(negocio.nome[i], 50, stdin);
    printf("Digite a matricula do aluno: ");
    scanf("%d", &negocio.numeromatricula[i]);
    printf("Digite o curso do aluno: ");
    getchar(); 
    fgets(negocio.curso[i], 50, stdin);
    printf("Digite a nota 1 do aluno: ");
    scanf("%f", &negocio.nota1[i]);
    printf("Digite a nota 2 do aluno: ");
    scanf("%f", &negocio.nota2[i]);
    printf("Digite a nota 3 do aluno: ");
    scanf("%f", &negocio.nota3[i]);

    negocio.media[i] = (negocio.nota1[i] + negocio.nota2[i] + negocio.nota3[i]) / 3;

    if (negocio.nota1[i] > negocio.nota1[maiornota1]) {
      maiornota1 = i;
    }

    if (negocio.media[i] > negocio.media[maiormedia]) {
      maiormedia = i;
    }

    if (negocio.media[i] < negocio.media[menormedia]) {
      menormedia = i;
    }
  }

  for (i = 0; i < 5; i++) {
    printf("\n\nNome: %sMatricula: %d \nCurso: %s \nNota 1: %.2f \nNota 2: %.2f \nNota 3: %.2f \nMedia: %.2f", negocio.nome[i], negocio.numeromatricula[i], negocio.curso[i], negocio.nota1[i], negocio.nota2[i], negocio.nota3[i], negocio.media[i]);

    if (negocio.media[i] >= 6) {
      printf("\nSituação: Aprovado");
    } else {
      printf("\nSituação: Reprovado");
    }
  }

  printf("\n\nAluno com maior nota na primeira prova:\nNome: %sMatricula: %d", negocio.nome[maiornota1], negocio.numeromatricula[maiornota1]);

  printf("\nAluno com maior media geral:\nNome: %sMatricula: %d", negocio.nome[maiormedia], negocio.numeromatricula[maiormedia]);

  
  printf("\nAluno com menor media geral:\nNome: %sMatricula: %d", negocio.nome[menormedia], negocio.numeromatricula[menormedia]);

  return 0;
}