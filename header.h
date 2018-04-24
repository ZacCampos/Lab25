/******************************************************************************
 * AUTHOR     : Kasra Tabib & Zac Campos
 * LAB #25a   : Array Train - Set #2
 * CLASS      : CS1A
 * SECTION    : MW - 8am
 * DUE DATE   : 4/25/18
 ******************************************************************************/
#ifndef LAB25_H_
#define LAB25_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

/******************************************************************************
 * OutputHeader
 *	This function receives an assignment name, type and number then outputs
 *	the appropriate header - returns nothing
 ******************************************************************************/
void OutputHeader(string asName, //IN - assignment name - used for output
				  char   asType, //IN - assignment type - used for output
				  int    asNum); //IN - assignment num  - used for output

/******************************************************************************
 * InitializeIntArray
 *  This function initializes the values of the integer array to the specified
 *  initialize value.
 *
 * => returns nothing
 *****************************************************************************/
void InitializeIntArray (int intAr[],			//	IN & CALC - the integer
						 	 	 	 	 	 	//				array
						 const int ARRAY_SIZE);	//	IN - size of the array


/******************************************************************************
 * InitializeStrArray
 * 	This function clears the values of the string array.
 *
 * => returns nothing
 *****************************************************************************/
void InitializeStrArray (string strAr[],		//	IN & CALC- the string array
						 const int ARRAY_SIZE);	//	IN - size of the array

/******************************************************************************
 * InitializeArrays
 * 	This function initializes both string and integer arrays by setting the
 * 	values of the integer array to the specified initialize value and by
 * 	clearing the values of the string array.
 *
 * => returns nothing
 ******************************************************************************/
void InitializeArrays (string strAr[],			// IN & CALC - the string array
					   int intAr[],				// IN & CALC - the integer
					   	   	   	   	   	   	   	//			   array
					   const int ARRAY_SIZE);	// IN - the array size


/******************************************************************************
 * ReadInFromFile
 * 	This function reads in the values of the string and integer arrays from
 * 	an input file.
 *
 * => returns nothing
 *****************************************************************************/
void ReadInFromFile (string &fileName,			// IN - input file
					 string namesAr[],			// IN - the names array
					 int agesAr[],				// IN - the ages array
					 const int ARRAY_SIZE);		// IN - size of the array

/******************************************************************************
 * ReadFromUser
 * 	This function reads in the values of the string and integer arrays from the
 * 	user.
 *
 * 	=> returns nothing
 *****************************************************************************/
void ReadFromUser (string namesAr[],		// IN - the names array
				   int agesAr[],			// IN - the ages array
				   const int ARRAY_SIZE);	// IN - size of the array

/******************************************************************************
 * OutputToConsole
 * 	This function outputs a table of contents in console based on the values
 * 	collected from the input file or the user and formats them in a readable
 * 	way.
 *
 * => returns nothing
 *****************************************************************************/
void OutputToConsole (string fileName,			// IN - input file
					  string namesAr[],			// IN - the names array
					  int agesAr[],				// IN - the ages array
		 	 	 	  const int ARRAY_SIZE);		// IN - size of the array

/******************************************************************************
 * OutputToFile
 * 	This function outputs a table of contents in an output file based on the
 * 	values collected from the input file or the user and formats them in a
 * 	readable way.
 *
 * => returns nothing
 *****************************************************************************/
void OutputToFile (string fileName,			    // IN - input file
				   string namesAr[],			// IN - the names array
				   int agesAr[],				// IN - the ages array
				   const int ARRAY_SIZE);		// IN - size of the array


#endif /* LAB25_H_ */
