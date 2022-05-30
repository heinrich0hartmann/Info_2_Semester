#include <stdio.h>

int main()

{
	char chr = getchar() & 0xDF;
	printf("\n %c", chr);
	system("pause");
	return 0;
}
