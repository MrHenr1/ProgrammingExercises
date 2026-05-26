// Problema dos Garçons

#include <stdio.h>

int main()
{

	int n, l, c, quebrados = 0;

	scanf("%d", &n);

	if (n >= 1 && n <= 100)
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &l);
			scanf("%d", &c);
			if ((l >= 0 && l <= 100) && (c >= 0 && c <= 100))
			{
				if (l > c)
				{
					quebrados += c;
				}
			}
		}
	}

	printf("%d\n", quebrados);

	return 0;
}
