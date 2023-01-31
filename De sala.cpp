#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	char frase[100];
	int t=0;
	
	

	
	printf("Digite uma frase?\n");
	gets(frase);
	
	
	

	
	for(int i=0; i<100; i++){
		if(
		frase[i]=='a' || frase[i]=='e'|| frase[i] =='i' || frase[i] =='o' || frase[i]=='u' ||
		frase[i]=='A' || frase[i]=='E' || frase[i]=='I' || frase[i]=='O' || frase[i]=='U'){
			t++;
		}
		
		if(frase[i]=='\0'){	
	    
		    break;
    	}
	}
	
	printf(" A frase Digitada tem %d caracteres\n ",t );
	
	
	
	
	return 0;
}
