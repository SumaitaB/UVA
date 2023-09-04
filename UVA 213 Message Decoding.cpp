
#include<cstdio>
#include<cstring>

int exp2[8] = { 0,1,3,7,15,31,63,127 };
int map[7] = { 0,1,4,11,26,57,120 };
inline int hash(char *str)
{
	int len = strlen(str);
	int num = 0;

	for (int i = 0; i < len; i++)
	{
		num <<= 1;
		num += str[i] - '0';
	}

	if (num == exp2[len])
		return -1;
	else
		return num + map[len - 1];
}
inline char readChar()
{
	char c;
	while ((c = getchar()) == '\n');

	return c;
}
inline bool getHead(char *str)
{
	char c;
	int idx = 0;
	c = readChar();

	if (c == EOF)
		return false;

	str[idx++] = c;

	while ((c = getchar()) != '\n')
		str[idx++] = c;

	str[idx] = NULL;
	return true;
}
inline int getLen()
{
	char c;
	int num = 0;

	for (int i = 0; i < 3; i++)
	{
		c = readChar();
		num <<= 1;
		num += c - '0';
	}

	return num;
}
int main()
{
	char str[300];
	while (getHead(str))
	{
		int len, i;
		char c, code[10];
		while (len = getLen())
		{
			while (true)
			{
				for (i = 0; i < len; i++)
				{
					c = readChar();
					code[i] = c;
				}

				code[i] = NULL;
				int val = hash(code);
				if (val == -1)
					break;

				putchar(str[val]);
			}
		}

		putchar('\n');
	}

	return 0;
}
