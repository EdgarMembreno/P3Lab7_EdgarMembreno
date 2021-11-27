#ifndef CATEGORIA_H
#define CATEGORIA_H
#include <iostream>

using namespace std;

class categoria {
	public:
		categoria();
		categoria(string);
		~categoria();
		string getCategoria();
		void setCategoria(string);
	private:
		string cate;
};

#endif