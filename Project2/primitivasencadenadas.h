#include"nodo.h"

class CPencadenadas
{
private://variables
	int x,a;


public:
	void crear();
	bool probar();

	bool insertar(int);

	int *verheavy(int);
	Minodo * ver();

	void eliminar(int);
	void eliminarultimo();
	void eliminarprimero();

	void destruir();


//atributos
	Minodo *lista;
	
};