/**
 * 100-strtow.c
 * Description: Taking a string input, this program will ultimately split the string up such that
 * each word in the given string gets its own line by allocating the required amount of memory for each word
 * In the case where this is not possible, the memory that is already allocated gets freed up
 *
 * Code and commentary written by Anthony Louie and Kyle Campbell with the help of all students of Cohort 10
 * Thanks to everyone in Cohort 10 for putting in their 2 cents and contributing their struggles, blood, sweat, and tears towards this project. Figuratively
 * Special thanks to Ben Keener, Cynthia Taylor, Ariana Bibiano, Kristen Loyd, and Brent Muha, for without them this would not have been possible.
 *
 * P.S. This is definitely obvious, but remember to delete most of the comments here before uploading to Github.
 * The checker and Betty will not like it otherwise, as comments do count towards
 * the 40 line per function limit and the 80 character per line limit.
 */

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mem_clear - Frees memory to ensure no memory leak happens
 * @s: String input for memory deallocation
 * Return: Nothing
 */
void mem_clear(char **s)
{
	/* Loop through and free up each row of memory, then free up the block itself */
}

/**
 * word_count - Counts number of indexes in a string
 * @str: String being counted
 * Return: Number of indexes
 */
int word_count(char *str)
{
	/* Loop through given string */
		/* If the current index is anything other than a space, increment counter by 1 */
			/* Check the next index(es) for either space or null byte */
			/* If the end of the string is reached, exclude the null byte itself by decrementing by 1 */
	/* Return the word count*/
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
   * @array_row: Integer that keeps track of row index of new_str
   * @array_column: Integer that keeps track of column index of new_str
   * @new_str: Newly created double pointer and what will be returned at the end
   * Note that you do not need to use these specific variables; they are named only for clarification
   * because the strtow function is very complex and requires clarification and guidance
   * Comments within this function assume usage of our declared variables and helper functions. Replace if necessary
   */
	int i, j = 0;
	int input_length, word_size, array_row = 0, array_column;
	char **new_str = NULL;

	/* If the input string or the first index of string is null (does not exist), return NULL */

	/* Take the string input and calculate its length using word_count helper function */

	/* If the program cannot calculate the string length, return NULL */

	/**
	 * Allocate the memory for the double pointer. Used char * because newStr is declared as a double pointer.
	 * Be sure to add 1 as well to account for the null byte
	 * The instructions state that the last line must be NULL
	 */

	/* If memory allocation fails (such as not enough memory can be allocated for our newStr), return NULL */

	/**
	 * Set the array row of our new_str to NULL.
	 * This is mostly a precautionary step. This may be excluded if desired, but it's good practice to include
	 */

	/* Start from the first index of our arrayRow */

		/**
	 	* If a space is found, continue.
		* In other words, immediately go to the for loop's incrementation phase
		* All code after the continue statement is ignored if the if statement runs
		* This is because of how the continue statement works. See Google for more details
		*/

		/**
		 * Assuming the above if statement does not run, use variable j to "save" our position i
		 * Afterwards, loop through the string with j until a space or the null byte is found
		 * Through this, we have found our word and can set aside memory so that this word gets its own line
		 */

		/**
		 * Get the size of our word by taking the difference of j and i
		 * In other words, we take the placement of j and subtract that value by the placement of i
		 * In this way, we can determine how much memory is needed to allocate for that particular word
		 */

		/**
		 * Allocate the memory for each word. Char is used because we are giving each word its own memory
		 * Be sure to add 1 as well to account for the null byte
		 */

		/**
		 * If memory allocation fails at any point during this program, run mem_clear helper function
		 * This helper function clears out all memory already allocated to ensure no memory leaks happen
		 * Afterwards, return NULL
		 */

		/**
		 * Starting at array_column at 0, check to make sure that the index does not contain a space
		 * Also check to make sure that the index does not contain the null terminator
		 * If both conditions are met, copy the position of string i to the appropriate memory in new_str
		 * Afterwards, move to the next column and repeat
		 */

		/**
		 * Put the null byte at the end of the string to indicate this is the end of our word
		 */

		/**
		 * If we're at the null byte, decrement by 1
		 * The reason does not look very intuitive, so we'll try to explain it
		 * After this line and array_row++, we enter the for loop's incrementation phase from line 86
		 * If we do not decrement by 1 at the null byte, we increment by 1, thereby passing the null byte
		 * which may result in extra, undesirable text to be printed out, or possibly segmentation fault
		 */
		
		/* Move to the next row */
	}
	/* Return our newly split up 2d array of strings */
}
