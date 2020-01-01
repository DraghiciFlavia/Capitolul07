
#include "Candelabru.h"
#include <iostream>
using namespace std;

int main()
{
	Candelabru candelabru3, candelabru5;
	candelabru3.ConfigureazaCandelabru(3);
	candelabru5.ConfigureazaCandelabru(5);
	cout << "StareCandelabru dupa configurare: " << endl;
	cout << (candelabru3.StareCandelabru() ? "aprins" : "stins") << endl;
	cout << (candelabru5.StareCandelabru() ? "aprins" : "stins") << endl;

	candelabru3.AprindeLumina();
	candelabru5.AprindeLumina();
	cout << "StareCandelabru dupa ce aprind lumina: " << endl;
	cout << (candelabru3.StareCandelabru() ? "aprins" : "stins") << endl;
	cout << (candelabru5.StareCandelabru() ? "aprins" : "stins") << endl;

	candelabru.StingeLumina();
	candelabru.StingeLumina();
	cout << "StareCandelabru dupa ce sting lumina:" << endl;
	cout << (candelabru3.StareCandelabru() ? "aprins" : "stins") << endl;
	cout << (candelabru5.StareCandelabru() ? "aprins" : "stins") << endl;

	candelabru3.MaresteLumina(150);
	candelabru5.MaresteLumina(150);
	cout << "StareCandelabru dupa ce maresc lumina cu 150:" << endl;
	cout << (candelabru3.StareCandelabru() ? "aprins" : "stins") << endl;
	cout << (candelabru5.StareCandelabru() ? "aprins" : "stins") << endl;

	candelabru3.ReduceLumina(75);
	candelabru5.ReduceLumina(75);
	cout << "StareCandelabru dupa ce reduc lumina cu 75:" << endl;
	cout << (candelabru3.StareCandelabru() ? "aprins" : "stins") << endl;
	cout << (candelabru5.StareCandelabru() ? "aprins" : "stins") << endl;

	candelabru3.ReduceLumina(30);
	candelabru5.ReduceLumina(30);
	cout << "StareCandelabru dupa ce reduc lumina cu 30:" << endl;
	cout << (candelabru3.StareCandelabru() ? "aprins" : "stins") << endl;
	cout << (candelabru5.StareCandelabru() ? "aprins" : "stins") << endl;

	cout << "Puterea Maxima a Candelabru3: " << candelabru3.PutereMaximaCandelabru()<<endl;
	cout << "Puterea Maxima a Candelabru5: " << candelabru5.PutereMaximaCandelabru();
}

