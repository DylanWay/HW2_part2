#include <stdio.h>
#include "hw1.c"

/*Main initializes the array, calls reverse, and checks the final array with another
  array corresponding to the original message. */
int main()
{
	int error = 0;
	
	char array1[17] = "This is a string.";
	char array2[18] = "some NUMmbers12345";
	char array3[30] = "Does it reverse \n\0\t correctly?";
	
	printf("Before: %s\n", array1);
	error = reverse(array1, 17);
	printf("After: %s\n", array1);
	
	if (!error) {	
		printf("Before: %s\n", array2);
		error = reverse(array2, 18);
		printf("After: %s\n", array2);
	}			
	
	if (!error) {	
		printf("Before: %s\n", array3);
		error = reverse(array3, 30);
		printf("After: %s\n", array3);
	}			
	//returns the error code	
	return error;
}
