#include <stdio.h>
#include <stdlib.h>

struct data{
  int dia;
  int mes;
  int ano;
};

struct Horario{
  int hora;
  int minuto;
  int segundos;
};


struct Compromisso{
  char comp[100];
  struct data hoje;
  struct Horario agora;
  };


int main() {
  int i;
 struct Compromisso negocio;
  printf("Digite o dia: \n:");
   scanf(" %d", &negocio.hoje.dia);
  while(negocio.hoje.dia<1 || negocio.hoje.dia>31){
  printf("\n Digite o dia novamente: \n:");
 scanf(" %d", &negocio.hoje.dia);
  printf("%i",negocio.hoje.dia);
  }
  printf("Digite o mes: \n:");
     scanf(" %d", &negocio.hoje.mes);
    while(negocio.hoje.mes<1 || negocio.hoje.mes>12){
    printf("\n Digite o mes novamente: \n:");
   scanf(" %d", &negocio.hoje.mes);
    printf("%i",negocio.hoje.mes);
    }

  printf("Digite o ano: \n:");
     scanf(" %d", &negocio.hoje.ano);
    while(negocio.hoje.ano<0){
    printf("\n Digite o ano novamente: \n:");
   scanf(" %d", &negocio.hoje.ano);
    printf("%i",negocio.hoje.ano);
    }


  printf("Digite a hora : \n:");
     scanf(" %d", &negocio.agora.hora);
    while(negocio.agora.hora>24){
    printf("\n Digite a hora novamente: \n:");
   scanf(" %d", &negocio.agora.hora);
    printf("%i",negocio.agora.hora);
    }

  printf("Digite os minutos: \n:");
     scanf(" %d", &negocio.agora.minuto);
    while(negocio.agora.minuto>59){
    printf("\n Digite a os minutos dnv: \n:");
   scanf(" %d", &negocio.agora.minuto);
    printf("%i",negocio.agora.minuto);
    }

  printf("Digite os segundos: \n:");
     scanf(" %d", &negocio.agora.segundos);
    while(negocio.agora.segundos>59){
    printf("\n Digite os segundos novamente: \n:");
   scanf(" %d", &negocio.agora.segundos);
    printf("%i",negocio.agora.segundos);
    }
  printf("Digite o compromisso: \n:");
  getchar();
  fgets(&negocio.comp[i],100,stdin);
  
    




  
  printf("\n %i/ %i / %i",negocio.hoje.dia,negocio.hoje.mes,negocio.hoje.ano);
  printf("\n %ih %imin  %iseg",negocio.agora.hora,negocio.agora.minuto,negocio.agora.segundos);
  printf("\n \n Compromisso: %s",negocio.comp);
 
    


  // struct Compromisso negocio2;
  //   printf("Digite o dia: \n:");
  //  scanf(" %d", &negocio2.ano);
  //   printf("%i",negocio2.ano);


  // struct Compromisso negocio3;
  //   printf("Digite o dia: \n:");
  //  scanf(" %d", &negocio3.hora);
  //   printf("%i",negocio3.hora);


  // struct Compromisso negocio4;
  //   printf("Digite o dia: \n:");
  //  scanf(" %d", &negocio4.minuto);
  //   printf("%i",negocio4.minuto);


  // struct Compromisso negocio5;
  //   printf("Digite o dia: \n:");
  //  scanf(" %d", &negocio5.segs);
  //   printf("%i",negocio5.segs);

  // struct Compromisso negocio6;
  //   printf("Digite o dia: \n:");
  //  scanf(" %d", &negocio6.descricao);
  //   printf("%i",negocio6.descricao);

  




}