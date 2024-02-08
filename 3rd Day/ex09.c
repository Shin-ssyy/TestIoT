#include <stdio.h>

int main() {

    printf("\n\n*******************************\n\n");

    int tmp;

    

    printf("Write your Number Under 50!\n\n");
    scanf("%d", &tmp);

    
    printf("LEVEL 1!\n");
    for(int i = 1; i <= tmp; i++){
        for(int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    printf("LEVEL 2!\n");
    for(int i = tmp; i >= 1; i--){
        for(int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    printf("LEVEL 3!\n");
    for(int i = 1; i <= tmp; i++){
        for(int j = 1; j <= tmp - i; j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++ ){
            printf("*");
        }
        printf("\n");
    }

    printf("LEVEL 4!\n");
    for(int i = 0; i <= tmp - 1; i++){
        for(int j = 1; j <= i; j++){
            printf(" ");
        }
        for(int j = i + 1; j <= tmp; j++ ){
            printf("*");
        }
        printf("\n");
    }
    
    printf("LEVEL 5!\n");
    if((tmp % 2) == 1){
        for(int i = 1; i <= tmp * 2; i++){
            if((i % 2) == 1 && i <= tmp){
                for(int j = 1; j <= tmp - i; j++){
                        if(j % 2 == 1)
                            printf(" ");
                }
                for(int j = 1; j <= i; j++ ){
                        printf("*");
                }
                printf("\n");
            }

            if((i % 2) == 1 && i > tmp){
                for(int j = tmp + 1; j <= i; j++){
                    if(j % 2 == 1)
                        printf(" ");
                }

                for(int j = i + 1; j <= tmp * 2; j++ ){
                    printf("*");
                }
                printf("\n");
                
            }
        }
    }


    

    

    printf("\n\nGood Bye!");
    printf("\n\n*******************************\n\n");

   
    return 0;
}
