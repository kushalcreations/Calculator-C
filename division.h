int division(){
    int a,b,i=0;
    // divedend is the value which has to be divided and divisor is the no which divide 
    printf("       Enter the dividend and divisor\n");
    scanf("%d%d",&a,&b);
    while(a>=b)
    {
        a=a+(~b+1);
        i++;
    }
    printf("\n       Questient = %d",i);
    printf("\n       Remainder = %d",a);
    
}
