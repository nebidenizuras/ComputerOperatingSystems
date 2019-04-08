//============================================================================//
//
//	File Name	: 504181527.c
//	Create Date	: 21.04.2019
//	Designers	: Nebi Deniz Uras
//	Number 	    : 504181527
//	Description	: Computer Operating Systems Assignment 2
//
//	Important Notes: Code was compiled and tested on ITU SSH 
//
//============================================================================//

#define _CRT_SECURE_NO_WARNINGS

//============================================================================//
//=============================== INCLUDES ===================================//
//============================================================================//
#include <stdio.h> 		// printf
#include <stdlib.h> 	// exit

#if !_WIN32
#include <unistd.h> 	// fork
#include <sys/wait.h> 	// wait
#endif

//============================================================================//
//==========================  MACRO DEFINITIONS ==============================//
//============================================================================//

//============================================================================//
//=========================== TYPE DEFINITIONS ===============================//
//============================================================================//

//============================================================================//
//========================== FUNCTION PROTOTYPES =============================//
//============================================================================//

//============================================================================//
//============================ GLOBAL VARIABLES ==============================//
//============================================================================//

//============================================================================//
//============================ PUBLIC FUNCTIONS ==============================//
//============================================================================//
int main(void)
{

	printf("assignment 2\n");

#if _WIN32
	system("pause");
#endif		
	return 0;
}