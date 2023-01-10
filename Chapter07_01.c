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

	printf("공백문자 %d개\n 개행문자 %d개\n 그 외 문자 %ld개\n", space, new, cch);

}