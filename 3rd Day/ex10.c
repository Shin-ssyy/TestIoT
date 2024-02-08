#include <stdio.h>

int solution(int number, int n, int m){

    if((number % n == 0) && (number % m == 0)){
        printf("return 1\n");
        return 1;
    }
    else{
        printf("return 0\n");
        return 0;
    }

}

int main(){
    int a, b, c;
    printf("\n\n*******************************\n\n");

    printf("\nNumber : ");
    scanf("%d", &a);
    printf("\nN : ");
    scanf("%d", &b);
    printf("\nM : ");
    scanf("%d", &c);

    printf("%d\n", solution(a, b, c));
}
