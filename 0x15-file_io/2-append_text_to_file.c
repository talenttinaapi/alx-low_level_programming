#include "main.h"
/**
 *append_text_to_file - ...
 *@filename: ...
 *@text_content: ...
 *
 *Return: ...
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int j, k, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	j = open(filename, O_WRONLY | O_APPEND);
	k = write(j, text_content, len);

	if (j == -1 || k == -1)
		return (-1);

	close(j);

	return (1);
}

