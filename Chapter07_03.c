#include <stdio.h>

int main()
{
	int num;

	int odd = 0;
	int even = 0;
	int oddTotal = 0;
	int evenTotal = 0;

	while (scanf_s("%d", &num) && num != 0)
	{
		if (num % 2) {
			odd++;
			oddTotal += num;
		}
		else {
			even++;
			evenTotal += num;
		}
	}

	printf("Ȧ�� : %d, ��� : %.2f\n",
		odd, (float)oddTotal / odd);
	printf("¦�� : %d, ��� : %.2f\n",
		even, (float)evenTotal / even);

}