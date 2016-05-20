#include "Produto.h"


Produto::Produto(ifstream & in){ // nome ; custo
  // A IMPLEMENTAR
}

string Produto::getNome() const {
  return nome;
}

float Produto::getCusto() const {
  return custo;
}

ostream& operator<<(ostream& out, const Produto & prod)
{
	out << prod.getNome() << " ; " << prod.getCusto();
	return out;
}


bool operator<(const Produto &prod1, const Produto &prod2){
  // A IMPLEMENTAR
	return true;
}
