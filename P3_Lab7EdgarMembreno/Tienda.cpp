#include "Tienda.h"

Tienda:: Tienda() {
}
void Tienda:: crearCategoria() {
	string nombre;
	cout << "Ingrese el nombre de la nueva categoria: ";
	cin >> nombre;
	categoria* nuevo = new categoria(nombre);
	categorias.push_back(nuevo);
}
void Tienda:: crearArticulo() {
	string nombre, talla;
	int precio, inventario, descuento, op;
	cout << "Ingrese el nombre: ";
	cin >> nombre;
	cout << "Ingrese la talla: ";
	cin >> talla;
	cout << "Ingrese el precio: ";
	cin >> precio;
	cout << "Ingrese el inventario: ";
	cin >> inventario;
	cout << "Ingrese el descuento: ";
	cin >> descuento;
	for(int i = 0; i < categorias.size(); i++) {
		cout << i << ". " << categorias[i]->getCategoria() << endl;
	}
	cout << "Ingrese el numero de la categoria: ";
	cin >> op;
	categoria* cate = categorias[op];
	articulo* nuevo = new articulo(nombre, talla, precio, inventario, descuento, cate);
	articulos.push_back(nuevo);
}
void Tienda:: modificarArticulo() {
	string nombre, talla;
	int precio, inventario, descuento, op, op2;
	for(int i = 0; i < articulos.size(); i++) {
		cout << i << ". " << articulos[i]->getNombre() << endl;
	}
	cout << "Ingrese el numero del articulo que desea de modificar: ";
	cin >> op;
	if(op < articulos.size()) {
		cout << "1. Modificar nombre" << endl;
		cout << "2. Modificar talla" << endl;
		cout << "3. Modificar precio" << endl;
		cout << "4. Modificar inventario" << endl;
		cout << "5. Modificar descuento" << endl;
		cout << "6. Modificar categoria" << endl;
		cout << "Ingrese el numero del elemento que desea de modificar: ";
		cin >> op2;
		if(op2 == 1) {
			cout << "Ingrese el nombre: ";
			cin >> nombre;
			articulos[op]->setNombre(nombre);
		} else if(op2 == 2) {
			cout << "Ingrese la talla: ";
			cin >> talla;
			articulos[op]->setTalla(talla);
		} else if(op2 == 3) {
			cout << "Ingrese el precio: ";
			cin >> precio;
			articulos[op]->setPrecio(precio);
		} else if(op2 == 4) {
			cout << "Ingrese el inventario: ";
			cin >> inventario;
			articulos[op]->setInventario(inventario);
		} else if(op2 == 5) {
			cout << "Ingrese el descuento: ";
			cin >> descuento;
			articulos[op]->setDescuento(descuento);
		} else if(op2 == 6) {
			int op3;
			for(int i = 0; i < categorias.size(); i++) {
				cout << i << ". " << categorias[i]->getCategoria() << endl;
			}
			cout << "Ingrese el numero de la categoria: ";
			cin >> op3;
			categoria* cate = categorias[op3];
			articulos[op]->setCategoria(cate);
		}
	}
}
void Tienda:: estadisticasGenerales() {
	for(int i = 0; i < categorias.size(); i++) {
		cout << i << ". " << categorias[i]->getCategoria() << endl;
		for(int j = 0; j < articulos.size(); j++) {
			if(categorias[i]->getCategoria().compare(articulos[j]->getCategoria()->getCategoria()) == 0) {
				cout << "	" << articulos[j]->getNombre() << ", " << articulos[j]->getTalla() << ", " << articulos[j]->getPrecio() << ", " <<
				     articulos[j]->getInventario() << ", " << articulos[j]->getDescuento() << ", " << endl;
			}
		}
	}
}
void Tienda:: eliminarArticulo() {
	int op = 0;
	for(int i = 0; i < articulos.size(); i++) {
		cout << i << ". " << articulos[i]->getNombre() << endl;
	}
	cout << "Ingrese el numero del articulo que desea de eliminar: ";
	cin >> op;
	if(op < articulos.size()) {
		articulos.erase(articulos.begin() + op);
	}
}
Tienda:: ~Tienda() {
	for(int i = 0; i < categorias.size(); i++) {
		delete categorias[i];
	}
	for(int i = 0; i < articulos.size(); i++) {
		delete articulos[i];
	}
}
void Tienda:: buscarCategoriaTalla() {
	int op = 0;
	int op3;
	for(int i = 0; i < categorias.size(); i++) {
		cout << i << ". " << categorias[i]->getCategoria() << endl;
	}
	cout << "Ingrese el numero de la categoria: "<<endl;
	cout<< "1.numero de categoria"<<endl;
	cout<< "2.ninguna"<<endl;
	cin >> op3;
	categoria* cate = categorias[op3];
	for(int i = 0; i < categorias.size(); i++) {
		cout << i << ". " << categorias[i]->getCategoria() << endl;
		for(int j = 0; j < articulos.size(); j++) {
			if(categorias[i]->getCategoria().compare(articulos[j]->getCategoria()->getCategoria()) == 0) {
				cout << "	" <<  ", " << articulos[j]->getTalla() << ", " <<  ", " <<
				     articulos[j]->getInventario() << ", " <<  ", " << endl;
			}
		}
	}


}

