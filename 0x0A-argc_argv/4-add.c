#include "main.h"

/**
* main - adds positive numbers
* @argc: argument counter
* @argv: array of pointer to strings
* Created by Charles Misheal
* Return: 0 if no errors, else
*/
int main(int argc, char *argv[])

{

int i, j, add = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{

printf("Error\n");
return (1);
}
}

add = add + atoi(argv[i]);

}

printf("%d\n", add);
return (0);
}
