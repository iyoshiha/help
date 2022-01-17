#include <stdio.h>

char *f(void)
{
	static int i;
	char f_c;

	f_c = 69;
	printf("in f: %p\n", &f_c);
	i++;
	if (i < 5)
	f();
	if (i > 8 && i < 12)
	f();
	return (&f_c);
}

int main()
{
	char *main_c;

for (int i = 0; i < 6; i++)
{
	main_c = f();
	printf("in main: %p\n", main_c);
}
	return 0;
}
