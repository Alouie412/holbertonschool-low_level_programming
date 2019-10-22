/**
 * 100-strtow.c
 * Description: Taking a string input, this program will ultimately split the string up such that
 * each word in the given string gets its own line by allocating the required amount of memory for each word
 * In the case where this is not possible, the memory that is already allocated gets freed up
 *
 * Code and commentary written by Anthony Louie and Kyle Campbell with the help of all students of Cohort 10
 * Thanks to everyone in Cohort 10 for putting in their 2 cents and contributing their struggles and tears towards this project
 * Special thanks to Ben Keener, Cynthia Taylor, Ariana Bibiano, Kristen Loyd, and Brent Muha.
 */

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mem_clear - Frees memory
 * @s: String input for memory deallocation
 * Return: Nothing
 */
void mem_clear(char **s)
{
  /* For loop variable*/
	int i;

	/* Loop through and free up each row of memory */
	for (i = 0; s[i] != NULL; i++)
	{
		free(s[i]);
	}
	/* Free the block itself*/
	free(s);
}

/**
 * word_count - Counts number of indexes in a string
 * @str: String being counted
 * Return: Number of indexes
 */
int word_count(char *str)
{
  /* For loop variable. wc starts at 0 to ensure no garbage values are added */
	int i;
	int wc = 0;

	/* Loop through given string */
	for (i = 0; str[i]; i++)
	{
	  /* If the current index is anything other than a space, +1 to wc */
		if (str[i] != ' ')
		{
			wc++;
			/* Check the next index(es) for either space or null byte */
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			/* If the end of the string is reached, exclude the null byte itself by decrementing by 1 */
			if (str[i] == '\0')
				i--;
		}
	}

	/* Return the word count*/
	return (wc);
}

/**
 * strtow - "Master function": Splits a string such that each word gets its own line
 * @str: String input
 * Return: The pointer to the very first index of the list of words
 */
char **strtow(char *str)
{
  /**
   * Variables
   * @i and @j: for loop counters and holding index placements
   * @input_length: Holds length of the input string
   * @word_size: Holds length of a particular word within the input string
   * @array_row: Integer that keeps track of row index
   * @array_column: Integer that keeps track of column index
   * @new_str: Newly created double pointer and what will be returned at the end
   */
	int i, j = 0;
	int input_length, word_size, array_row = 0, array_column;
	char **new_str = NULL;

	/* If the input string or the first index of string is null, does not exist, return NULL */
	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* Take the string input and calculate its length using word_count helper function */
	input_length = word_count(str);

	/* If the program cannot calculate the string length, return NULL */
	if (!input_length)
		return (NULL);

	/**
	 * Allocate the memory for the double pointer. Used char * because newStr is declared as a double pointer.
	 * Added 1 as well to account for the null byte, as the instructions stated that the last line must be NULL
	 */
	new_str = malloc(sizeof(char *) * (input_length + 1));

	/* If not enough memory can be allocated for our newStr, return NULL */
	if (new_str == NULL)
		return (NULL);

	/* */
	new_str[array_row] = NULL;

	/* Start from the first index of our arrayRow */
	for (i = 0; str[i]; i++)
	{
	  /**
	   * If a space is found, continue. In other words, immediately go to the for loop's incrementation phase
	   * Everything under the continue statement is ignored if the if statement runs
	   */
		if (str[i] == ' ')
			continue;
		/**
		 * Assuming the above if statement does not run, use variable j to "save" our position
		 * Afterwards, loop through the string until a space or the null byte is found
		 */
		j = i;
		while (str[j] != '\0' && str[j] != ' ')
			j++;
		/* Get the size of our word by taking the difference of j and i. In other words, the placements of the two in our string */
		word_size = j - i;
		/**
		 * Allocate the memory for each word. Char is used because we are giving each string, char array, its own memory.
		 * Added 1 as well to account for the null byte
		 */
		new_str[array_row] = malloc((word_size + 1) * sizeof(char));
		/**
		 * If memory allocation fails at any point during this program, run memClear helper function
		 * This helper function clears out all memory already allocated to ensure no memory leaks
		 * Afterwards, return NULL
		 */
		if (new_str[array_row] == NULL)
		{
			mem_clear(new_str);
			return (NULL);
		}
		/**
		 * For loop. Starting at arrayColumn at 0, check to make sure that the index does not contain a space or null terminator
		 * If the two conditions are true, copy the position of string i to the appropriate memory in newStr
		 * Afterwards, move to the next column and repeat
		 */
		for (array_column = 0; str[i] && str[i] != ' '; i++, array_column++)
			new_str[array_row][array_column] = str[i];
		/**
		 * Put the null byte at the end of the string to indicate this is the end of the string
		 */
		new_str[array_row][array_column] = '\0';

		/**
		 * If we're at the null byte, decrement by 1
		 * The reason does not look very intuitive, so we'll try to explain it
		 * After this line and arrayRow++, we enter the for loop's incrementation phase from line 111
		 * If we do not decrement by 1 at the null byte, we increment by 1, thereby passing the null byte
		 * which may result in extra, undesirable text to be printed out, or possibly segmentation fault
		 */
		if (!str[i])
			i--;
		
		/* Move to the next row */
		array_row++;
	}
	/* Return our newly split up string */
	return (new_str);
}
