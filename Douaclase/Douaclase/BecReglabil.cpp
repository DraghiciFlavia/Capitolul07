#include <iostream>
#include "BecReglabil.h"


void BecReglabil::Aprinde()
{
	aprins = true;
	putereCurenta = putereMaxima;  
}
void BecReglabil::Stinge()
{
	aprins = false;
	putereCurenta = 0;

}
void BecReglabil::MaresteLumina(short mareste)
{
	putereCurenta += mareste;
		if (putereCurenta > putereMaxima)
			putereCurenta = putereMaxima;
		aprins = true;
}
void BecReglabil::ReduceLumina(short reduce)
{
	putereCurenta -= reduce;
	if (putereCurenta < 0)
		putereCurenta = 0;
	if (putereCurenta == 0)
		aprins = false;
}
void BecReglabil::StareBec()
{
	if (aprins == true)
		std::cout << "Becul e aprins\n";
	else
		std::cout << "Becul e stins\n";
}