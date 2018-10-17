#include <stdio.h>
struct Minodo
{
	int info;
	Minodo*enlace;
	Minodo()
	{
		info = 0;
		enlace = NULL;
	}
	Minodo(int Pinfo)
	{
		info = Pinfo;
		enlace = NULL;
	}
	Minodo(int Pinfo, Minodo*Penlace)
	{
		info = Pinfo;
		enlace = Penlace;
	}
};