int subtraction(){

	int a,b,c;

	printf("         Enter the 1st number: ");
	scanf("%d",&a);
	
	printf("\n         Enter the 2nd number: ");
	scanf("%d",&b);
	
	c=a+(~b+1);
	printf("\n            %d - %d = %d",a,b,c);
	
	
}
