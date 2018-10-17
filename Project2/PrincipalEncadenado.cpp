#include<iostream>
using namespace std;
#include"primitivasencadenadas.h"
int main()
{
	CPencadenadas objeto;
	int opcion, *arry, info, submenu, subindex = 1, index = 1, dato;
	arry = new int[2];
	Minodo *R;

	do
	{
		cout << "----------------------------//-------------------" << endl;
		cout << "\t. . : : M E N U : : . ." << endl;
		cout << " Que opcion desea realizar: " << endl;
		cout << " 1. Crear lista. " << endl;
		cout << " 2. probar lista. " << endl;
		cout << " 3. insertar dato. " << endl;
		cout << " 4. ver lista. " << endl;
		cout << " 5. eliminar dato. " << endl;
		cout << " 6. descruir lista " << endl;
		cout << " 7. Salir. " << endl;
		cin >> opcion;
		switch (opcion)
		{
		case 1:
			system("cls");
			{
				objeto.crear();
				cout << "lista creada" << endl;
				break;
			}
		case 2:
			system("cls");
			{
				objeto.probar();
				if (objeto.probar() == true)
				{
					cout << "la lista existe " << endl;
				}
				else
				{
					cout << "no existe la lista " << endl;
				}
				break;
			}
		case 3:
			system("cls");
			{
				{
					cout << "ingrese un valor " << endl;
					cin >> info;
					objeto.insertar(info);
					cout << "dato insertado " << endl;
				}
				break;
			}
		case 4:
			system("cls");
		{
				

					/*for (int i = 1; ; i++)
					int i = 1;
					do
					{

						arry = objeto.verheavy(i);
						cout << "pos " << i << " dato " <<arry[0] << endl;
						i++;
					} while (arry[1]!=1);*/


					R = objeto.ver();
					cout << "Los datos son: " << endl;
					Minodo *S = R;
					int i=1;
					cout << "Posicion\t " << " Dato " << endl;
					while (S != NULL)
					{
						cout<<"   "<<i<< "\t\t   "<< S->info << endl;
						S = S->enlace;
						i++;
					}
			break;
		}
		case 5:
			system("cls");
		{
				{
					do
					{
						cout << "Cual quiere eliminar: " << endl;
						cout << "1.un dato." << endl;
						cout << "2.el primer dato." << endl;
						cout << "3.el ultimo dato." << endl;
						cin >> submenu;
						switch (submenu)
						{
						case 1:
						{
							cout << "Que dato desea eliminar" << endl;
							cin >> dato;
							objeto.eliminar(dato);
							cout << "dato eliminado." << endl;
							subindex = 0;
							break;

						}
						case 2:
						{
							objeto.eliminarprimero();
							cout << "dato eliminado." << endl;
							subindex = 0;
							break;
						}
						case 3:
						{
							objeto.eliminarultimo();
							cout << "dato eliminado." << endl;
							subindex = 0;
							break;
						}
						default: cout << "esa opcion no existe, seleccione una opcion valida" << endl;
						}
					} while (subindex == 1);
				}
			break;
		}
		case 6:
		{
			system("cls");

			{
				objeto.destruir();
				cout << "lista destruida" << endl;
			}
			break;
		}

		case 7:
		{
			index = 0;
			break;
		}
		default: cout << "esa opcion no existe, seleccione una opcion valida" << endl;

		}
	} while (index == 1);
	system("pause");
	return 0;
}