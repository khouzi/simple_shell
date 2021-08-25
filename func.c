#include "shell.h"

/**
 * _strlen - returns a string
 * @s: integer to be used
 * Return: length of string
 */
size_t _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return ((i + 1));
}

/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 * Return: returns an integer less  than,  equal  to,  or
 * greater  than zero if s1 is found, respectively, to be
 * less than, to match, or be greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	char *p1 = s1;
	char *p2 = s2;

	while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
	{
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}

/**
 * _strdup - copies a string to another
 * @duplicate: the array
 * Return: pointer of sting copied
 */
char *_strdup(char *duplicate)
{
	char *copy;
	int len, i;

	if (duplicate == 0)
		return (NULL);

	for (len = 0; duplicate[len]; len++)
		;
	copy = malloc((len + 1) * sizeof(char));

	for (i = 0; i <= len; i++)
		copy[i] = duplicate[i];

	return (copy);
}

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 *@filename: is the file to read
 *@letters: is the number of letters it sould read and print
 * Return: printed chars.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t read_buf, printed;
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		return (-1);
	}
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (-1);
	}
	read_buf = read(fd, buf, letters);
	if (read_buf == -1UL)
	{
		free(buf);
		return (-1);
	}
	printed = write(STDOUT_FILENO, buf, read_buf);
	if (printed == -1UL)
	{
		return (-1);
	}
	write(1, "\n", 1);
	free(buf);
	close(fd);
	return (printed);
}
/**
 * free_array - frees an array
 * @str : double pointer
 */
void free_array(char **str)
{
	int i;

for (i = 0; str[i] != NULL; i++)
{
free(str[i]);
}
free(str);
}
