#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,i=0;
    printf("Enter the dividend and divisor\n");
    scanf("%d%d",&a,&b);
    while(a>=b)
    {
        a=a+(~b+1);
        i++;
    }
    printf("\nQuestient = %d",i);
    printf("\nRemainder = %d",a);
    getch();
}
