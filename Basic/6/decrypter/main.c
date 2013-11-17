#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	/* Some variables... */
	char *encrypted;
	char *decrypted;
	int i;
	int len;

	/* Check the number of arguments... */
	if(argc != 2)
	{
		fprintf(stderr, "[!] Wrong number of arguments: ./decrypter <password>\n");
		return 1;
	}

	/* Asume the password is in argv[1]... */
	encrypted = argv[1];
	len = strlen(encrypted);
	decrypted = (char *)calloc(len, sizeof(char));
	if(decrypted == NULL)
	{
		fprintf(stderr, "[!] Could not allocate memory...\n");
		return 2;
	}

	/* Decrypt password... */
	for(i = 0; i < len; i++)
		decrypted[i] = encrypted[i] - i;

	/* Show results... */
	printf("The password is: %s\n", decrypted);

	/* The end. */
	return 0;
}
