#ifndef ARTICULO_H
#define ARTICULO_H
#include <iostream>
#include <string>

#include "categoria.h"

using namespace std;

class articulo {
	public:
		articulo(string, string, int, int, int, categoria*);
		~articulo();
		string getNombre(); 
		void setNombre(string);
		string getTalla();
		void setTalla(string);
		int getPrecio();
		void setPrecio(int);
		int getInventario();
		void setInventario(int);
		int getDescuento();
		void setDescuento(int);
		categoria* getCategoria();
		void setCategoria(categoria*);
	private:
		string nombre;
		string talla;
		int precio;
		int inventario;
		int descuento;
		categoria* Cate;
};

#endif