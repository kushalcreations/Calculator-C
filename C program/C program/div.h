int division()
{
    int p, q, i = 0;
    printf("Enter the value of dividend and divisor \n");
    scanf("%d%d", &p, &q);
    while (p >= q)
    {
        p = p + (~q + 1);
        i++;
    }
    printf("\nThe value of Quotient is  = %d", i);
    printf("\nThe value of Remainder is = %d", p);
    return 0;
}