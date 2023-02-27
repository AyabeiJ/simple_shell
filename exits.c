#include "shell.h"

/**
 * _strncpy - copys a string with n
 * @dest: copy to
 * @src: copy from
 * @n: number of character to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int = j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

/**
 * _strncat - joins two strings wit n bytes
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strchr - function that locates a character in a string
 * @s: string to recieve a return
 * @c: character to recieve
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
