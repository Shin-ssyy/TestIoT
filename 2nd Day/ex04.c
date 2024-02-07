#include <stdio.h>

int main() {

    printf("\n\n*******************************\n\n");
    printf("Hello World!\n\n");

    printf("Multiple of 3 and 7!\n");

    for(int i = 0; i <= 100; i++){
        if(i % 3 == 0 || i % 7 == 0)
            printf("%d, ",i);
    }
    
    printf("\n\nGood Bye!");
    printf("\n\n*******************************\n\n");

   
    return 0;
}
