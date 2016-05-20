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

Cliente::Cliente()
{

}

void Cliente::setId(int id)
{
	this->setId = id;
}

void Cliente::setNome(string nome)
{
	this->setNome = nome;
}

void Cliente::setVolCompras(double VolCompras)
{
	this->setVolCompras = VolCompras;
}

void Cliente::setData(Data data)
{
	this->setData = data;
}

ostream& operator<<(ostream& out, const Cliente & cli)
{
		out << cli.getId() << " ; " << cli.getNome() << " ; " << cli.getData() << " ; " << cli.getVolCompras();
		return out;
}

istream & operator >> (const Cliente & cli, istream& in)
{
	int iId;
	string strNome;
	double dblVolCompras;
	Data ddata;
	string strId;
	string strVolCompras;
	string strdata;

	getline(in, strId, ';');
	strId.pop_back();
	iId = stoi(strId);

}

bool operator<(const Cliente &cli1, const Cliente &cli2){
  // A IMPLEMENTAR

	return true;
}
