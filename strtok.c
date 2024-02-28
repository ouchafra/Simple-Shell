#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *str = "This is a separated word by spaces";
	char *stc = malloc(sizeof(char) * strlen(str));
	char delim[5] = " ";
	char *trunks;
	int i;

	strcpy(stc,str);
	trunks = strtok(stc, delim);
	printf("%s\n", trunks);

	trunks = strtok(NULL, delim);
	printf("%s\n", trunks);

	trunks = strtok(NULL, delim);
        printf("%s\n", trunks);

	trunks = strtok(NULL, delim);
        printf("%s\n", trunks);

	trunks = strtok(NULL, delim);
        printf("%s\n", trunks);

	trunks = strtok(NULL, delim);
        printf("%s\n", trunks);

	trunks = strtok(NULL, delim);
        printf("%s\n", trunks);

	trunks = strtok(NULL, delim);
	if (trunks == NULL)
		printf("Last part is null");
	else
		printf("It is not null");

	return (0);
}
