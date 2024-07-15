#include <stdio.h>

int main (void){

int l, c;
int matriz[2][4];

for(l=0;l<2;l++){
for (c=0;c<4;c++){
printf(" matriz[%i][%i] ", l, c);
scanf ("%i",&matriz[l][c]);
}
printf("\n");
}

for(l=0;l<2;l++){
for (c=0;c<4;c++){
printf(" %i ", matriz[l][c]);
}
printf("\n");
}
return 0;
}