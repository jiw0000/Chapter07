#include <stdio.h>

int main()
{
	char ch;
	int a = 0;
	int b = 0;

	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			putchar('!');
			a++;
		}
		else if (ch == '!')
		{
			printf("!!");
			b++;
		}
		else putchar(ch);
	}

	printf(". -> !  : %d\n", a);
	printf("! -> !! : %d\n", b);

}