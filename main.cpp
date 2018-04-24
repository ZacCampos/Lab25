/******************************************************************************
 * AUTHOR     : Kasra Tabib & Zac Campos
 * LAB #25a   : Array Train - Set #2
 * CLASS      : CS1A
 * SECTION    : MW - 8am
 * DUE DATE   : 4/25/18
 ******************************************************************************/

#include "lab25.h"

/******************************************************************************
 * Array Train - Set #2
 ------------------------------------------------------------------------------
 This program uses two parallel arrays to print out a list of information with
 names of people and their ages. The program first initializes the array which
 includes the ages to the value -1, then it initializes the array with names
 to clear and outputs a table with the values of the arrays. The program then
 reads in input for the arrays from an input file and outputs a table with the
 information collected. Next, the program inputs values for the arrays from
 the user and outputs a table with the information collected from the user.
 ------------------------------------------------------------------------------
 INPUT:
 	 namesAr	: list of the names

 OUTPUT:
 	 namesAr	: list of the names
 	 agesAr		: list of the ages
 *****************************************************************************/
int main()
{
	/**************************************************************************
	* CONSTANTS
	* ------------------------------------------------------------------------
	* PROCESSING - Used for processing in the functions
	* ------------------------------------------------------------------------
	* ARRAY_SIZE	: size of the array
	*-------------------------------------------------------------------------
	*
	**************************************************************************/

	const int ARRAY_SIZE = 11;

	//Variable Declaration
	string	namesAr[ARRAY_SIZE];
	int		agesAr[ARRAY_SIZE];
	string	fileName;		// name of the input file
	int index;


	//OUTPUT - class heading
	OutputHeader("Array Train - Set #2", 'L', 25);

	InitializeIntArray(agesAr, ARRAY_SIZE);

	OutputToConsole (fileName,		// IN - input file
					 namesAr,		// IN - the names array
					 agesAr,		// IN - the ages array
					 ARRAY_SIZE);	// IN - size of the array

	InitializeStrArray(namesAr, ARRAY_SIZE);

	OutputToConsole (fileName,		// IN - input file
					 namesAr,		// IN - the names array
					 agesAr,		// IN - the ages array
					 ARRAY_SIZE);	// IN - size of the array

	InitializeArrays (namesAr,
					  agesAr,
					  ARRAY_SIZE);

	OutputToConsole (fileName,		// IN - input file
					 namesAr,		// IN - the names array
					 agesAr,		// IN - the ages array
					 ARRAY_SIZE);	// IN - size of the array

	fileName = "InputFile.txt";

	ReadInFromFile (fileName, namesAr,	agesAr,	ARRAY_SIZE);

	OutputToConsole (fileName,		// IN - input file
					 namesAr,		// IN - the names array
					 agesAr,		// IN - the ages array
					 ARRAY_SIZE);	// IN - size of the array

	InitializeArrays (namesAr,
					   agesAr,
					   ARRAY_SIZE);

	OutputToConsole (fileName,		// IN - input file
					 namesAr,		// IN - the names array
					 agesAr,		// IN - the ages array
					 ARRAY_SIZE);	// IN - size of the array

	ReadFromUser (namesAr, agesAr, ARRAY_SIZE);

	OutputToConsole (fileName,		// IN - input file
					 namesAr,		// IN - the names array
					 agesAr,		// IN - the ages array
					 ARRAY_SIZE);	// IN - size of the array


	fileName = "OutputFile.txt";

	OutputToFile (fileName,			// IN - input file
				  namesAr,			// IN - the names array
				  agesAr,				// IN - the ages array
				  ARRAY_SIZE);	// IN - size of the array


return 0;
}
