/******************************************************************************
 * AUTHOR     : Kasra Tabib & Zac Campos
 * LAB #25a   : Array Train - Set #2
 * CLASS      : CS1A
 * SECTION    : MW - 8am
 * DUE DATE   : 4/25/18
 ******************************************************************************/

#include "lab25.h"

/******************************************************************************
 * FUNTION - InitializeIntArray
 * ---------------------------------------------------------------------------
 *  This function initializes the values of the integer array to the specified
 *  initialize value.
 *
 * => returns nothing
 * ---------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	The following variables need a pre-defined value passed in.
 * 		ARRAY_SIZE
 *
 * POST-CONDITIONS
 * 	=> returns nothing
 *****************************************************************************/
void InitializeIntArray (int intAr[],			//	IN & CALC - the integer
						 	 	 	 	 	 	//				array
						 const int ARRAY_SIZE)	//	IN - size of the array
{
	/**************************************************************************
	* CONSTANTS
	* ------------------------------------------------------------------------
	* PROCESSING - Used for processing in the functions
	* ------------------------------------------------------------------------
	* INITIALIZE_VAL: The specified initialize value
	**************************************************************************/
	const int INITIALIZE_VAL = -1;

	for(int index = 0; index < ARRAY_SIZE; index++)
	{
		intAr[index] = INITIALIZE_VAL;
	}
}
