#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um N�mero qualquer: ");
	int num;
	scanf("%d",&num);
	if(num>10){
		printf("� MAIOR QUE 10!\n");
	}else{
		printf("N�O � MAIOR QUE 10!\n");
	}
	system("pause");
}
