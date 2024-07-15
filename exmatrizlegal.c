#include <stdio.h>

int main(void){
int l, c,sl=0,st=0,n=3,m[n][n];


for(l=0;l<n;l++){
	for(c=0;c<n;c++){
		printf("m[%i][%i]:",l,c);
		scanf("%i",&m[l][c]);
	
	}	
	printf("\n");
}
		

for(l=0;l<n;l++){
	for(c=0;c<n;c++){
		printf("%i ",m[l][c]);
}
	printf("\n");
	}

for(l=0;l<n;l++){
	for(c=0;c<n;c++){
		if (m[l][c]==0){
	
		}
	}
}
for(l=0;l<n;l++){
	sl=0;
	for(c=0;c<n;c++){
		sl=sl+m[l][c];
	}
	printf("\nsoma da linha %i",sl);
	
}
for(l=0;l<n;l++){

	for(c=0;c<n;c++){
		st=st+m[l][c];
	}
	
	
}
printf("\nsoma da st %i",st);
return 0;
