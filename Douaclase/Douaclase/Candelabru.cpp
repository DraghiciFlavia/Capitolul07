#include "Candelabru.h"

void Candelabru::ConfigureazaCandelabru(unsigned short nr)
{
	nrBecuri = nr;
	listaBecuri = new BecReglabil[nr];
	for (int i=0; i <nrBecuri; ++i)
	{
		listaBecuri[i].SetPutereMaxima(100);
		listaBecuri[i].SetPutereCurenta(0);
	}

}
void Candelabru::AprindeLumina()
{
	for (int i = 0; i < nrBecuri; ++i)
	{
		listaBecuri[i].Aprinde();
	}
}
void Candelabru::StingeLumina()
{
	for (int i = 0; i <= nrBecuri; ++i)
	{
		listaBecuri[i].Stinge();
	}
}
void Candelabru::MaresteLumina(unsigned short mareste)
{
	for (int i = 0; i < nrBecuri; ++i)
	{
		listaBecuri[i].MaresteLumina(mareste);
	}

}
void Candelabru::ReduceLumina(unsigned short reduce)
{
	for (int i = 0; i < nrBecuri; ++i)
	{
		listaBecuri[i].ReduceLumina(reduce);
	}
}
int GetPutereCurenta()
{
	return listaBecuri[i].SetPutereMaxima(100);
}
unsigned short Candelabru::PutereMaximaCandelabru()
{
	unsigned short sum = 0;
	for (int i = 0; i < nrBecuri; ++i)
	{
		sum = sum + listaBecuri[i].GetPutereMaxima();
	}
	return (sum);
}
bool Candelabru::StareCandelabru()
{
	for (int i = 0; i < nrBecuri; ++i)
		if (listaBecuri[i].GetPutereCurenta() > 0)
			return true;
		else
			return false;
}
