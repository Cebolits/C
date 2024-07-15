#include <stdio.h>

int main(void){
int l, c, contZero=0, n=3,m[n][n], contnzero=0;


for(l=0;l<n;l++){
	for(c=0;c<n;c++){
		printf("m[%i][%i]:",l,c);
		scanf("%i",&m[l][c]);
		
	
	}	
	printf("\n");
}
for(l=0;l<n;l++){
	for(c=0;c<n;c++){
		printf("%i",m[l][c]);
}
	printf("\n");
	}

for(l=0;l<n;l++){
	for(c=0;c<n;c++){
		if (m[l][c]==0){
			contZero++;
		}
		else{
			contnzero++;
		}
	}
}

printf("\n\nforam enontrados %i zeros.",contZero);
printf("\n\nforam enontrados %i diferentes de zeros.",contnzero);

return 0;
}