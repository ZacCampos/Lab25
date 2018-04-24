/******************************************************************************
 * AUTHOR     : Kasra Tabib & Zac Campos
 * LAB #25a   : Array Train - Set #2
 * CLASS      : CS1A
 * SECTION    : MW - 8am
 * DUE DATE   : 4/25/18
 ******************************************************************************/

#include "lab25.h"

/******************************************************************************
 * FUNCTION - InitializeStrArray
 * ---------------------------------------------------------------------------
 * 	This function clears the values of the string array.
 *
 * => returns nothing
 * ---------------------------------------------------------------------------
 *  PRE-CONDITIONS
 * 	The following variables need a pre-defined value passed in.
 * 		ARRAY_SIZE
 *
 * POST-CONDITIONS
 * 	=> returns nothing
 *****************************************************************************/

void InitializeStrArray (string strAr[],		//	IN & CALC- the string array
						 const int ARRAY_SIZE)	//	IN - size of the array
{
	for(int index = 0; index < ARRAY_SIZE; index++)
	{
		strAr[index].clear();
	}
}

