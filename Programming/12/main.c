#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/* Returns 1 if it is prime and 0 if not. */
char is_prime(int n);

int main(int argc, char **argv)
{
	char *string;
	char char_str[26];
	char cmd[50];
	int prime_sum, composite_sum;
	int i, j;
	int len;

	/* Check for arguments... */
	if(argc != 2)
		return 1;

	/* Get the original string... */
	string = argv[1];
	len = strlen(string);

	/* Main algorithm... */
	prime_sum = 0;
	composite_sum = 0;
	j = 0;
	for(i = 0; i < len; i++)
		if(!isdigit(string[i]))
		{
			if(j < 26)
				char_str[j++] = string[i] + 1;
		}
		else
		{
			char numchar = string[i];
			int num = atoi(&numchar);
			if(num != 0 && num != 1)
			{
				if(is_prime(num))
					prime_sum += num;
				else
					composite_sum += num;
			}
		}
	char_str[j] = '\0';

	/* Print the result... */
	printf("%s%i\n", char_str, composite_sum*prime_sum);

	/* Copy result to clipboard... */
	sprintf(cmd, "echo %s%i | pbcopy\n", char_str, composite_sum*prime_sum);
	system(cmd);

	return 0;
}

char is_prime(int n)
{
	char is_prime = 1;
	int i, l = n/2 +1;
	for(i = 2; i <= l && is_prime; i++)
		if(n%i == 0)
			is_prime = 0;
	return is_prime;
}
