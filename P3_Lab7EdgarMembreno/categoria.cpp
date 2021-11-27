#include "categoria.h"

categoria:: categoria(string cate){
	this-> cate = cate;
}
categoria:: categoria(){
}
categoria:: ~categoria(){
}
string categoria:: getCategoria(){
	return this-> cate;
}
void categoria:: setCategoria(string cate){
	this-> cate = cate;
}