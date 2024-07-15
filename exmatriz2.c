#include <stdio.h>

int main (void){

int l, c;
int matriz[3][3];

for(l=0;l<3;l++){
for (c=0;c<3;c++){
printf(" matriz[%i][%i] ", l, c);
scanf ("%i",&matriz[l][c]);
}
printf("\n");
}

for(l=0;l<3;l++){
for (c=0;c<3;c++){
printf(" %i ", matriz[l][c]);
}
printf("\n");
}
return 0;
}