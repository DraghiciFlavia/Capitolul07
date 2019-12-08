#include <iostream>
#include "BecReglabil.h"

int main()
{
	BecReglabil bec75, bec100;
	bec75.SetPutereCurenta(0);
	bec75.SetPutereMaxima(75);
	bec100.SetPutereCurenta(0);
	bec100.SetPutereMaxima(100);

	bec75.Aprinde();
	bec75.StareBec();
	bec100.Aprinde();
	bec100.StareBec();
	std::cout << std::endl;

	bec75.Stinge();
	bec75.StareBec(); 
	bec100.Stinge();
	bec100.StareBec();
	std::cout << std::endl;

	bec75.MaresteLumina(90);
	bec75.StareBec();
	bec100.MaresteLumina(90);
	bec100.StareBec();
	std::cout << std::endl;

	bec75.ReduceLumina(75);
	bec75.StareBec();
	bec100.ReduceLumina(75);
	bec100.StareBec();
	std::cout << std::endl;

	std::cout << "Puterea curenta a becului de 75w este: " << bec75.GetPutereCurenta() << " w" <<std::endl;
	std::cout << "Puterea curenta a becului de 100w este: " << bec100.GetPutereCurenta() <<" w" << std::endl;
}

