int multiplication()
{
	int p, q;
	int ans, i;

	printf("Enter first number: ");
	scanf("%d", &p);
	printf("Enter second number: ");
	scanf("%d", &q);

	ans = 0;

	for (i = 1; i <= q; i++)
	{
		ans += p;
	}

	printf("Multiplication of %d and %d is: %d\n", p, q, ans);

	return 0;
}
