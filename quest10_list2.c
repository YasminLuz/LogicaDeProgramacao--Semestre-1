#include<stdio.h>
#include <math.h>

/*
Perguntar os coeficientes de uma equa��o de segundo grau (a, b e c) e:  
� Se delta for maior que zero � imprima as duas ra�zes;  
� Se delta for igual a zero � imprima apenas �nica raiz existente;  
� Se delta for menor que zero � imprima a mensagem �N�o existem ra�zes reais�  
*/

main(){

   float a,b,c,delta,x1,x2;
   
	
	printf("Informe os coeficientes A,B,C da equa�ao de segundo grau: \n");
	scanf("\n %f,%f,%f",&a,&b,&c);

    delta = ((b*b)-(4*a*c)); 
    
    if (delta>0){
    	
    	x1=(-b+sqrt(delta))/2*a;
    	x2=(-b-sqrt(delta))/2*a;
    	printf("As raizes sao: %f e %f", x1, x2);
    	
	}else if (delta == 0){
		x1 =  -b/(2*a);
	    printf("A raiz e: %f", x1);

	}else if (delta < 0){
		printf("Nao existem raizes no grupo dos reais nessa equa�ao");
	}


}
