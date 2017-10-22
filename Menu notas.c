#include <stdio.h>

main(void){
	
	 int opcao, x; 
	 float n1, n2, mp[2],peso[2],ponderada, ma;
	 
	 do{
	 	printf("\n Opcoes:\n"
		        "1- Media aritmetica;\n"
				"2- Media ponderada;\n"
				"3-Sair;\n");
	    scanf("%d",&opcao);
	    
	    switch(opcao){
	    	case 1:{			
	    	        printf("Digite duas notas: \n");
	    	        scanf("%f %f",&n1,&n2);
	    	        ma=(n1+n2)/2;
	    	        printf("Média aritmetica: %f\n",ma);
				break;
			}
			case 2:{
				    for(x=0; x<=2;x++){
					  printf("Digite 3 notas: \n");
			          scanf("%f",&mp[x]);
			           
			          printf("Informe o peso da nota:\n");
			          scanf("%f", &peso[x]);
			          
			          ponderada += mp[x]*peso[x];
			         
			        }
			           printf("Média ponderada: %f\n",ponderada);
		    	break;
			}
				
			case 3: {printf("Saiu.\n"); break;}
//			if( opcao == 3){
//				printf("Saiu.\n");
//				continue;
//			}

			
			default:printf("Nenhuma opcao foi escolhida! Digite 1, 2 ou 3 \n");break;
		}
	    
	    
	 }while(opcao!=3);
	
}
