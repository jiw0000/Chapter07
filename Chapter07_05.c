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

	printf(". -> !  Ƚ�� : %d\n", a);
	printf("! -> !! Ƚ�� : %d\n", b);

}