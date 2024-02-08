#include <stdio.h>

int main() {

    printf("\n\n*******************************\n\n");

    int tmp;

    printf("Make Diamond!\n");

    printf("Write your ODD Number Under 100!\n");
    scanf("%d", &tmp);

    if((tmp % 2) == 0){
        printf("(ERROR)%d is EVEN!\n", tmp);
        return 1;
    }


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
