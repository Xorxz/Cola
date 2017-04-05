#include "Cola.h"

int main()
{
	Cola c = Cola();//crea una cola vacia 
	c.Encolar(89);	
	c.Encolar(528);
	c.Descolar();
	c.VaciarCola();
	c.Encolar(230);
	c.Show();	
	return 0;
}
