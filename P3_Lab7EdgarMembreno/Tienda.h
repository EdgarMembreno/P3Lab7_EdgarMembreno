#ifndef TIENDA_H
#define TIENDA_H
#include "categoria.h"
#include "articulo.h"
#include <vector>
using std :: vector;

class Tienda {
	public:
		Tienda();
		~Tienda();
		void crearCategoria();
		void crearArticulo();
		void modificarArticulo();
		void eliminarArticulo();
		void estadisticasGenerales();
		void buscarCategoriaTalla();
	private:
		vector<categoria*> categorias;
		vector<articulo*> articulos;
};

#endif