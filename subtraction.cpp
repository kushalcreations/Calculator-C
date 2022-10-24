#include<stdio.h>
#include<conio.h>
int main(){

int a,b,c;

	printf("\n Enter the two numbers that u want to subtract: ");
	scanf("%d%d",&a,&b);
	c=a+(~b+1);
	printf("subtraction of %d and %d : %d",a,b,c);
	getch();
	
}
