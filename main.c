#include <stdio.h>

char function(unsigned int i, char c)
{
	while (i > 0)
	{
		c = c + 1;
		i--;
	}
	return (c);

}

char *ft_example(char *s, char (*f)(unsigned int, char))
{
	char c;

	c = 0;
	c = f(66, c); //　引数として渡された関数が呼ばれる。ここではfunction
	s[0] = c;

	return (s);
}

int main()
{
	char str[10] = "hello";

	printf("%s\n", str);
	ft_example(str, function);
	printf("%s\n", str);

}
