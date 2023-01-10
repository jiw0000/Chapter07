#include <stdio.h>

int main()
{
	char ch;

	for (int i = 1; (ch = getchar()) != '#'; i++)
	{
		if (ch == '\n') 
			continue;

		printf("%c-%d ", ch, ch);

		if (i % 8 == 0)
			putchar('\n');
	}


}