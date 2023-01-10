#include <stdio.h>
#include <stdbool.h>

int main()
{
	int num;
	_Bool a;

	printf("Á¤¼ö : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		a = false;
		for (int j = 2; (j * j) <= i; j++)
			if (i % j == 0)
				a = true;

		if (a == false)
			printf("%d ", i);
	}
	printf("\n");

}