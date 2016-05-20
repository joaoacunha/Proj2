#include "Vende++.h"
#include "fstream"
#include "string"


VendeMaisMais::VendeMaisMais(string loja, string fichClients, string fichProdutos, string fichTransacoes){

	this->transacoesAlterdas = false;
	this->clientesAlterados = false;
	this->loja = loja;
	this->fichClientes = fichClients;
	this->fichProdutos = fichProdutos;
	this->fichTransacoes = fichTransacoes;

}

/*********************************
 * Gestao de Clientes
 ********************************/  

// lista os cleinets por ordem alfabetica crescente
void VendeMaisMais::listarClientesOrdemAlfa() const{

  // A IMPLEMENTAR 

}

// mostra a informacao individual de um cliente
void VendeMaisMais::mostraInformacaoCliente(string nome){



}

/*********************************
 * Gestao de Produtos
 ********************************/  

// lisat os produto por ordem alfabetica crescente
void VendeMaisMais::listarProdutos() const{

  // A IMPLEMENTAR 

}


/*********************************
 * Preservar Informacao
 ********************************/  

// guarda apenas a informacao de clientes e/ou de transacoes que foi alterada
void VendeMaisMais::saveChanges() const{

  // A IMPLEMENTAR 

}

void VendeMaisMais::leClientes(string nomeficheiro)
{
	fstream clientesfile;
	clientesfile.open(nomeficheiro);
		if (!clientesfile)
		{
			cout << "Opcao invalida";
		}
		int itamanho;
		string stamanho;
		getline(clientesfile, stamanho);
		itamanho = stoi(stamanho);
		for (int a = 0; a <= itamanho; a++)
		{
			Cliente clientea;
			string strauxiliar;
			getline(clientesfile, strauxiliar);
			clientea << strauxiliar;
		}
}

/*********************************
 * Mostrar Loja
 ********************************/  

// mostra o conteudo de uma loja
ostream& operator <<(ostream& out, const VendeMaisMais & supermercado)
{

	return out;
}
