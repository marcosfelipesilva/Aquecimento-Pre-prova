#include <stdio.h>
#include "matrixlib.h"

int main(){
	int m[100][100],lin,cols,i,j;
	float par=0,inpar=0,perpar,perimpar;
	printf("Quantidade de linhas e colunas:");
	geraMatrix(m,lin,cols);
	printMatrix(m,lin,cols);
	for(i=0;i<lin;i++){
		for(j=0;j<cols;j++)
		if(m[i][j]%2==0)
			par++;
			else
			impar++;
	}
	printf("Pares=%of\nimpares;%df\n",par,impar);
	perpar=(pares/lin*cols),*100;
	printf("Percentual de pares %2f",n ,perpar);
		perpar=(perimpar/lin*cols),*100;
	printf("Percentual de impares %2f",n ,perimpar);
}
