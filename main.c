#include "includes.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
uint8_t Data_Buffer [];

int main(void)
{
	uint8_t i,j=10;
	
	initialize_buffer (&Data_Buffer,j);
	printf("\nInicializa Data_Buffer\n");	
	printf("Valores cargados en Data_Buffer\n \n");	
	for (i=0;i<j;i++)
	{	
			printf("%d ",Data_Buffer[i]);				
	}
	printf("\n");
	incrementar_buffer (&Data_Buffer,j);
	printf("\nIncrementa Data_Buffer\n");	
	printf("Valores cargados en Data_Buffer\n \n");	
	for (i=0;i<j;i++)
	{
		printf("%d ",Data_Buffer[i]);			
		
	}
	
	
	
	return 0;
}
