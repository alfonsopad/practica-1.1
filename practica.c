#include<stdio.h>
int main(){
	int v[11],aux=0;
	printf("por favor ingresa los numeros a ordenar \n");
	for(int i=1;i<=10;i++){
		printf("primer numero %i:\t",i);
		scanf("%i",&v[i]);
	}
	printf("-----------------\n");
	printf("Estos son tus numeros de mayor a menor\n");
	for(int t=0;t<11;t++){
	    for(int j=0;j<11;j++){
		    if(v[j]<v[j+1]){
			   aux=v[j];
			   v[j]=v[j+1];
			   v[j+1]=aux;
		    }
	    }
	}
	for(int k=0;k<10;k++){
			printf("[%i]",v[k]);
	}
	return 0;
