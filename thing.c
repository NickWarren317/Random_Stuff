#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int shouldrun = 1;
int main(void){
    while(shouldrun == 1){

      int selection;
      int num;
      
      time_t t;
      srand((unsigned) time(&t));

      printf("%s", "Make a Selection: \n1 for full and \n2 for partial!\n");
      scanf("%d", &selection);
      printf("Enter number of rows\n");
      scanf("%d", &num);

      switch(selection){
       case 1: 
        for(int i = 0; i <= num; i++){
            for(int j = 0; j < i; j++){
                printf("%s", "0 ");
            }
            printf("\n");
        }
        break;
       case 2:
            for(int i = 0; i <= num; i++){
              for(int j = 0; j < i; j++){
                int random = rand();
                if(random % 2 == 0){
                    printf("%s", "0 ");
                } else {
                    printf("%s", "  ");
                }    
            }
            printf("%s","\n");
        }
        break;
       default:
            printf("%s", "Please enter 1 for full or 2 for partial \n");
        break;
    }
    }
    return 0;
}