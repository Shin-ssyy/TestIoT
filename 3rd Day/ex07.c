#include <stdio.h>

int main() {

    printf("\n\n*******************************\n\n");
   
    int tmp;

    printf("Write your Number!\n");
    scanf("%d", &tmp);

    if((tmp % 2) == 1){
        printf("%d is a ODD!\n", tmp);
    }

    if((tmp % 2) == 0){
        printf("%d is a EVEN!\n", tmp);
    }
    
    printf("\n\n*******************************\n\n");

   
    return 0;
}
