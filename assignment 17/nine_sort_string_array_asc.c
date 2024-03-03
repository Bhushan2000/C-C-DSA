#include <stdio.h>
#include <string.h>
int main()
{
	// char str[] = "String@123";
	char str[] = "javascript"; // Ans : aacijprstv
	int temp, i, counter;
	// Bubble
	// selection character
	for (counter = 0; counter != strlen(str); counter++)
	{
		for (i = counter; i < strlen(str); i++)
		{ // swap character
			if (str[i] < str[counter])
			{
				temp = str[counter];
				str[counter] = str[i];
				str[i] = temp;
			}
		}
	}
	printf("After Sort on String %s\n", str);
	return 0;
}