#include <stdio.h>

int main()
{
	char ch;
	char pch = '\n';
	int ei = 0;

	while ((ch = getchar()) != '#')
	{
		if (pch == 'e' && ch == 'i')
			ei++;
		pch = ch;
	}

	printf("ei È½¼ö : %d\n", ei);

}