#include"primitivasencadenadas.h"
void CPencadenadas :: crear()
{
	lista = NULL;

}
bool CPencadenadas::probar()
{
	if (lista==NULL)
	{
		return true;
	}
	else
	{
		return false;
	}

}
bool CPencadenadas:: insertar(int x)
{
	Minodo* Q = new Minodo(x);
	if (lista == NULL)//no hay nodos
	{
		lista = Q;
	}
	else // varios nodos
	{
		Minodo *P = NULL;//Crea sin memoria
		P = lista;//asigna
		while (P->enlace!=NULL)//recorre los nodos
		{
			P = P->enlace;
		}
		P->enlace = Q;
	}
	return true;
}
Minodo * CPencadenadas::ver()
{	
	return lista;
}
int* CPencadenadas::verheavy(int x)
{
	Minodo *P = lista;
	if (P == NULL)
	{
		return 0;
	}
	while (P != NULL)
	{
		
	}
}
/*{
	int *arr;
	arr = new int[2];

	int b = 1;

	Minodo*Q = lista;
	while (Q->enlace !=NULL )
	{
		if ( b<= x)
		{
			b=b+1;
			arr[0] = Q->info;
			arr[1] = 0;//false
			Q = Q->enlace;
		}
		return arr;
	}
}*/
void CPencadenadas::eliminar(int x)
{
	Minodo *P = lista;
	while (P->info != x)
	{
		P = P->enlace;
	}
	Minodo*Q = lista;
	while (Q->enlace != P)
	{
		Q = Q->enlace;
	}
	Q->enlace=P->enlace;
	delete P;
}
void CPencadenadas::eliminarultimo()
{
	Minodo *P =lista;
	Minodo *Q = P;
	while (P->enlace != NULL)
	{
		Q = P;
		P = P->enlace;
	}
	Q->enlace = NULL;
	delete P;
}
void CPencadenadas::eliminarprimero()
{
	Minodo *Q = lista;
	lista = Q->enlace;
	Q->enlace = NULL;
	delete Q;
}
void CPencadenadas::destruir()
{
		delete lista;
}