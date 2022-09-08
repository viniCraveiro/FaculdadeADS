//29) Solicite ao usuário duas palavras e concatene-as em uma terceira variável, alternando 
//entre os caracteres da primeira e da segunda palavra. (ex: ANA / CLAUDIO = ACNLAAUDIO);
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	char p1[50], p2[50], p3[50];
	int  tam1,tam2,x,y=1,i=0;
	int maior;
	

	printf("Informe a %d palavra: ",y++);
	gets(p1);
	printf("Informe a %d palavra: ",y++);
	gets(p2);
	
	tam1=strlen(p1);
	tam2=strlen(p2);
	
	if (tam1>tam2){
		maior=tam1;
	}else{
		maior=tam2;
	}
	
	for(x=0; x<maior; x++){
		p3[i]=p1[x];
		i++;
		if(p1[x]>p2[x]){
		p3[i]=p2[x];
		i++;
		
	}
	}
	//p3[i]='\0';
	
	printf("%s",p3);
	
	printf("\n\n\n");
	system("pause");
}
