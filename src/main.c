/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    29-October-2017
  * @brief   Main function for SI4463.
  ******************************************************************************
*/

#include "stm32f0xx.h"

#include "si4463.h"

//------------------------------- Main ------------------------------
int main(void)
{
//	SI4463_Patch( );
	SI4463_Init( );
	SI4463_RX_Start( 0, 1 );

	while(1)
	{

	}
}











