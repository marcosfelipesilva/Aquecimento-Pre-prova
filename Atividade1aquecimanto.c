#include <stdio.h>
#include <strig.h>

int main (){
	int starCodon(char dna[100],int,n){
		int i,pos=-1;
		for(i=0,i<n-2;i++){
			if(dna[i]=='A')&& dna[i+1]=='T'&& dna[i+2]=="6"{
				pos=i
				break;
			}
		
		}
	}
	
	int main(){
		char dna[100];
		int res,n;
		printf("Sequencia do DNA:");
		fflush (stdin);//limpa obuffer
		gets(dna);
		n=stren(dna);
		res=starCodon(dna,n);
		if(res==-1)
		printf("Não possui inicio de gene\n");
		else
		printf("Genese inicia em %d\n",res);
		return 0;
	}
	
}

