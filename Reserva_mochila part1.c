#include <stdio.h>


main(){
	
	unsigned int mochila[10]= {};
	int opc, x, num = 0, posic, cont;
	int cheio = 0;
	
	do{
		printf("\n Opcoes:\n"
		        "1- Adicionar mochila;\n"
				"2- Remover mochila;\n"
				"3- Listar estado do armário;\n"
				"4- Limpar armario;\n"
				"-1 - Sair; \n");
	     scanf("%d",&opc);			
		
		switch(opc){
			
			case 1:{
				     if(cheio==0){
					  for(x = 0; x < 10; x++){ 
					   	printf("Informe um a mochila que quer adicionar: \n");
		               	scanf("%d",&mochila[x]);
		              				     									  
					   if(mochila[x] != NULL){
					    cheio=1;
				       }
				      }
				     
				     }else{
				     				     					        
				        printf("\n Armario cheio!\n");
				 	}
					break;
					}
					
			case 2:{
					 printf("Informe a posicao da mochila: \n");
		             scanf("%d",&posic);
		             
	     		     for(x = 0; x < 10; x++){
		               	
				     	if(posic == x){
						 	printf("A mochila %d foi retirada do armario %d! \n", mochila[x],x);
				     		mochila[x] = NULL; 
				     		break;
				     		
						}else{
						  cont++;	
						}
			          }
			          
			          if (cont>=10){
			          	printf("O valor digitado não foi encontrado! \n");
					  }
					break;
			        }
				   
				   
		    case 3:	{
		         	  for(x = 0; x < 10;x++){
		               	printf("Mochila[%d]= %d\n",x, mochila[x]);
					  }
			      	break;
		           	}	   	
					   
		    case 4: { 
		               for(x = 0; x < 10;x++){
		               	mochila[x]=NULL;
					   }
				     break;
			        }	
			          
			case -1:{printf("Volte sempre!\n");break;}
			         
			default: printf("Digite uma opcao valida! \n"); break;       
		}
		
	}while (opc>-1); 
	
	getchar();
	
	}


	
	

