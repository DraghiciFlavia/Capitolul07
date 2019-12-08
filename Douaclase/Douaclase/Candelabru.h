#include "BecReglabil.h"

class Candelabru
{
private:
	unsigned short nrBecuri;
	BecReglabil* listaBecuri;

public:
	void ConfigureazaCandelabru(unsigned short nr);
	void AprindeLumina();
	void StingeLumina();
	void MaresteLumina(unsigned short mareste);
	void ReduceLumina(unsigned short reduce);
	unsigned short PutereMaximaCandelabru();
	bool StareCandelabru();
};

