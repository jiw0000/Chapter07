#include <stdio.h>

int main()
{
	char ch;
	int a = 0;
	int b = 0;

	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '.':
			putchar('!');
			a++;
			break;
		case '!':
			printf("!!");
			b++;
			break;
		default:
			putchar(ch);
			break;
		}
	}

	printf(". -> !  È½¼ö : %d\n", a);
	printf("! -> !! È½¼ö : %d\n", b);

}