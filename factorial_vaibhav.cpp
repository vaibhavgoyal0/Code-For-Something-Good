#include<stdio.h>
int main(){
    int a,i;
    printf("Enter number whose factorial you want to find ");
    a=1;
    scanf("%d", &i);
    printf("Factorial of %d is ", i);
    while(i>=1){
        a=a*i;
        i=i-1;
    }
    printf("%d", a);
    return 0;
}
