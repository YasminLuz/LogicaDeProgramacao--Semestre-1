#include <stdio.h>
/*
Uma loja utiliza o c�digo V para transa��o � vista e P para transa��o a prazo. Fa�a um programa que receba o c�digo e
o valor de quinze transa��es, calcule e mostre:  a. O valor total das compras � vista;  
b. O valor total das compras a prazo;  
c. O valor total das compras efetuadas; e  
d. O valor da primeira presta��o das compras a prazo juntas, sabendo-se que ser�o pagas em tr�s vezes.
*/

main(void){
	
	int x; 
    float vista, prazo, total, val, prestacao;
    char codigo;
    
    
    for (x=0; x<3; x++){
    printf("Informe o codigo: \n"
	        "V - a vista "
			"P - a prazo\n");
		fflush(stdin);
		scanf("%c", &codigo);
		printf("Informe o valor da transa��o: \n");
		fflush(stdin);
		scanf("%f", &val);
//	
//	  if(codigo=='V'|| codigo=='v'){
//	  	vista+=val;
//	  }else if(codigo=='P'||codigo=='p'){
//	  	prazo+=val;
//	  }
//	  total = vista+prazo;
//	  prestacao = prazo/3;
//	  
//	  if (codigo!='V'||codigo!='V'){
//	  	printf("C�digo de transacao invalido");
//	  	break;
//	  }

     switch(codigo){
     	case 'V': case'v':
     	  {
		   vista+=val;
		   printf("entrou")	;
     	   break;
		  }
		 
		 case'P': case 'p':
		   {
		 	prazo+=val;
			break;	
		   }
		   
		 default: printf("C�digo de transacao invalido");break;
	 }	 
		  total = vista+prazo;
    	  prestacao = prazo/3; 
	
	}
	
	printf("Compras a vista: %f",vista);
	printf("Compras a prazo: %f", prazo);
	printf("Total de compras: %f", total);
	printf("Prestacao: %f", prestacao);
	
}
