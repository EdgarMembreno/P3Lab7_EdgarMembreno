#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <cstdlib>

#include "articulo.h"
#include "categoria.h"
#include "Tienda.h"

using namespace std;

int menuPrincipal();
int subMenu();

Tienda tienda;

int main() {
	int opcion = 0;
	while((opcion = menuPrincipal()) != 5) {
		if(opcion == 1) {
			tienda.crearCategoria();
		} else if(opcion == 2) {
			int opcion2 = subMenu();
			if(opcion2 == 1) {
				tienda.crearArticulo();
			} else if(opcion2 == 2) {
				tienda.modificarArticulo();
			} else if(opcion2 == 3) {
				tienda.eliminarArticulo();
			}
		} else if(opcion == 3) {
			tienda.estadisticasGenerales();
		} else if(opcion == 4) {
			tienda.buscarCategoriaTalla();
		}
	}
	tienda.~Tienda();
	return 0;
}

int menuPrincipal() {
	int opcion = 0;
	cout << "************ MENU ************" << endl;
	cout << "1. Agregar Categorías" << endl;
	cout << "2. Mantenimiento de Artículos" << endl;
	cout << "3. Estadísticas Generales " << endl;
	cout << "4. Búsqueda por categoría y talla"<< endl;
	cout << "5. Salir del menu" << endl;
	cout << "Ingrese su opcion: ";
	cin >> opcion;
	return opcion;
}

int subMenu() {
	int opcion = 0;
	cout << "1. Agregar Artículo" << endl;
	cout << "2. Modificar Artículo" << endl;
	cout << "3. Eliminar Artículo" << endl;
	cout << "Ingrese su opcion: ";
	cin >> opcion;
	return opcion;
}