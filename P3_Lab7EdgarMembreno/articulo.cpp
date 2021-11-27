#include "articulo.h"

articulo::articulo(string Nombre, string Tallas, int Precios, int Inventario, int Descuento, categoria*cate){
	this-> nombre = Nombre;
	this-> talla= Tallas;
	this-> precio = Precios; 
	this-> inventario = Inventario;
	this-> descuento = Descuento;
	this-> Cate = cate;
}
articulo::~articulo(){
}
string articulo:: getNombre() {
	return this-> nombre;
}
void articulo:: setNombre(string nombre) {
	this-> nombre = nombre;
}
string articulo:: getTalla() {
	return this-> talla;
}
void articulo:: setTalla(string talla) {
	this-> talla = talla;
}
int articulo:: getPrecio() {
	return this-> precio;
}
void articulo:: setPrecio(int precio) {
	this-> precio = precio;
}
int articulo:: getInventario() {
	return this-> inventario;
}
void articulo:: setInventario(int inventario) {
	this-> inventario = inventario;
}
int articulo:: getDescuento() {
	return this-> descuento;
}
void articulo:: setDescuento(int descuento) {
	this-> descuento = descuento;
}
categoria* articulo:: getCategoria() {
	return this-> Cate;
}
void articulo:: setCategoria(categoria* categoria) {
	this-> Cate = categoria;
}





