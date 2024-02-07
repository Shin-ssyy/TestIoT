#include <stdio.h>

int main() {

    int a, b, tmp;
    printf("\n\n*******************************\n\n");
    printf("Hello World!\n");

    printf("INT Exchange\n");
    printf("\nNumber A : ");
    scanf("%d", &a);
    printf("\nNumber B : ");
    scanf("%d", &b);
    printf("\nNumber A : %d , Number B : %d\n", a, b);

    tmp = a;
    a = b;
    b = tmp;

    printf("\n\n*******************************\n\n");
    printf("\nExchange Number!\n");
    printf("Ex-Number A : %d , Ex-Number B : %d\n", a, b);

    printf("\nGood Bye!");
    printf("\n\n*******************************\n\n");

    return 0;
}
