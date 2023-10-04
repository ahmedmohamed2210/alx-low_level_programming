#include <stdlib>
#include "main.h"

/**
 * *str_concat - concatenate two string
 * @*s1: char
 * @*s2: char
 *
 * Return: pointer to allocated space (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	char *p
	unsigned int i = 0, j = 0, len1=0, len2=0;

 while(s1[i] != '\0'){
                i++;
		len1++;
        }
 while(s2[len2] != '\0'){
	 len++;
 }


	p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s3 == NULL)
		return (NULL);


	while(s2[j] != '\0')
	{
		s1[i]=s2[j];
		i++;
		j++;
	}

	s1[i]='\0'

		return(s1);




}
