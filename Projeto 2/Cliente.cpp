#include "Cliente.h"


Cliente::Cliente(ifstream & in){
  // A IMPLEMENTAR
}


string Cliente::getNome() const{
  return nome;
}

unsigned int Cliente::getId() const{
  return id;
}

float Cliente::getVolCompras() const{
  return volCompras;
}

Data Cliente::getData() const {
	return cartaoCliente;
}

void Cliente::save(ofstream & out) const{

  // A IMPLEMENTAR

}

//ostream& operator<<(ostream& out, const Cliente & cli)
//{
//		out << cli.getId() << " ; " << cli.getNome() << " ; " << cli.getData() << " ; " << cli.getVolCompras();
//		return out;
//}


bool operator<(const Cliente &cli1, const Cliente &cli2){
  // A IMPLEMENTAR

	return true;
}
