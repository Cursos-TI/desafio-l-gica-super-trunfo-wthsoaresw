#include <stdio.h>
int main() {

    printf("dasafio xadrez\n");
    printf("conmit\n");
    printf("\n");

    int i = 1;
    
    while (i <= 5){
        if(i % 1 <= 0)
        {
          printf("torre moveu %d casas para frente \n",i);                  
        }

        i++;
    }  
    printf("\n");

    int j = 1;
 
    do {
        printf("bispo moveu %d casa para frente direita \n", j);
        j++;

    } while (j <= 5);

    printf("\n");

    for (int k = 1; k <= 8; k++)
    {
      printf("rainha moveu %d casas para esquerda \n", k);
    }

    

   
   return 0; 
}