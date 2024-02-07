#include <stdio.h>

int main() {

    int area, width, height;
    printf("\n\n*******************************\n\n");
    printf("Hello World!\n");

    printf("Triangle\n");
    printf("Width : ");
    scanf("%d", &width);
    printf("Height : ");
    scanf("%d", &height);
    area = width * height / 2;
    printf("Answer : %d", area);

    printf("\nGood Bye!");
    printf("\n\n*******************************\n\n");

    return 0;
}
