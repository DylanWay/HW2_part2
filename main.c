#include <stdio.h>
#include "hw1.c"

/*Main initializes the array, calls reverse, and checks the final array with another
  array corresponding to the original message. */
int main()
{
	int error = 0;
	int i;
	
	char array1[17] = "This is a string.";
	char array2[18] = "some NUMmbers12345";
	char array3[30] = "Does it reverse \n\0\t correctly?";
	
	error = reverse(array1, 17);
	for(i = 0; i < 17; i++) {
		printf("%c", *(array1+i));
	}
	printf("\n");


	error = reverse(array2, 18);
	for(i = 0; i < 18; i++) {
		printf("%c", *(array2+i));
	}
	printf("\n");
	
	error = reverse(array3, 30);
	for(i = 0; i < 30; i++) {
		printf("%c", *(array3+i));
	}
	printf("\n");
	
	//returns the error code	
	return error;
}
