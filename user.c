#include "includes.h"

/*
void initialize_buffer (uint8_t *buffer)
{
	uint8_t i,j=0;
	for (i=0;i<3;i++)
	{
		buffer[i]=0;		
	}
}
*/


void initialize_buffer (uint8_t *buffer, uint8_t j)
{
	uint8_t i=0;
	for (i=0;i<j;i++)
	{		
		(buffer[i])=15;	
	}
}

void incrementar_buffer (uint8_t *buffer, uint8_t j)
{
	uint8_t i=0;
	for (i=0;i<j;i++)
	{
		(buffer[i])++;		
	}
}
