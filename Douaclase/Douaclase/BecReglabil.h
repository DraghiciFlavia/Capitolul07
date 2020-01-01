#include <iostream>
class BecReglabil
{
private:
	unsigned short putereMaxima;
	unsigned short putereCurenta;
	bool aprins;
public:
	void SetPutereMaxima(unsigned short pMax) { putereMaxima = pMax; }
	void SetPutereCurenta(unsigned short pCurenta) { putereCurenta = pCurenta; }
	unsigned short GetPutereMaxima() { return putereMaxima; }
	unsigned short GetPutereCurenta() { return putereCurenta; }
	void Aprinde();
	void Stinge();
	void MaresteLumina(short mareste);
	void ReduceLumina(short reduce);
	void StareBec();
};

