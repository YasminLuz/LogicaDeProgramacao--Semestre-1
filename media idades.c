#include <stdio.h>


main(void){
  
  int id,cont=1;
  float  media=0;
  
  printf("INFORME SUA IDADE: ");
  scanf("%d", &id);
  
  while(id!=0){
  	
  media+=id;
  media/=cont;
  
  printf("INFORME SUA IDADE: ");
  scanf("%d", &id);

  cont++;
  }
  
  printf("A MEDIA DE IDADES E: %f", media);
  getchar();

}

