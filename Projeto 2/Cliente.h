#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "Data.h"

using namespace std;


class Cliente {
 private:
  unsigned int id;
  string nome;
  Data cartaoCliente;
  float volCompras;

 public:
  Cliente(ifstream & in);
  Cliente();
  void setId(int id);
  void setNome(string nome);
  void setVolCompras(double VolCompras);
  void setData(Data data);
  string getNome() const;
  unsigned int getId() const;
  float getVolCompras() const;
  Data getData() const;
  void save(ofstream & out) const;
  friend ostream & operator << (ostream& out, const Cliente & cli);
  friend istream & operator >> (const Cliente & cli, istream& ín);

  friend bool operator<(const Cliente &cli1, const Cliente &cli2); // compara 2 clientes (1 cliente e menor que outro se o seu nome for "alfabeticamente" inferior)
};

