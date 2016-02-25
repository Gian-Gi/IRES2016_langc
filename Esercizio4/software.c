#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char* name;
	char* version;
} Software;

void Software_setName(Software* this, char* name)
{
	int length = strlen(name);
	this->name = malloc(length + 1);
	strcpy(this->name, name);
}

void Software_getName(Software* this, char* name)
{
	strcpy(name, this->name);
}

void Software_setVersion(Software* this, char* version)
{
	int length = strlen(version);
	this->version = malloc(length + 1);
	strcpy(this->version, version);
}

void Software_getVersion(Software* this, char* version)
{
	strcpy(version, this->version);
}

int main()
{
	int numel = 10000;
	for (int i = 0; i < numel; ++i)
	{
		/* code */
	}

	return EXIT_SUCCESS;
}