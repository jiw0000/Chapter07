#include <stdio.h>

int main()
{
	char ch;
	int space = 0;
	int new = 0;
	long cch = 0;

	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case ' ':
			space++;
			break;
		case '\n':
			new++;
			break;
		default:
		    cch++;
			break;
		}
	}

	printf("���鹮�� %d��\n ���๮�� %d��\n �� �� ���� %ld��\n", space, new, cch);

}