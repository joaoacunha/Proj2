#include "utils.h"


void clearScreen(){
  // A IMPLEMENTAR
}


unsigned short int leUnsignedShortInt(unsigned short int min, unsigned short int  max)
{
	unsigned short int opcao;
	cin >> opcao;
	if (opcao <= max && opcao >= min)
	{
		return opcao;
	}
	else
		return 0;
}


int leInteiro(int min, int max){

  // A IMPLEMENTAR
	return 1;

}
