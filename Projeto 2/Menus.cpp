#include "Menus.h"

bool fileExists(string filename)
{
	std::ifstream infile(filename);
	return infile.good();
}

bool infoInicial(string & loja, string & fichClientes, string & fichProdutos, string & fichTransacoes)
{
	bool result = true;

	string CLIENTS_FILENAME;
	string PRODUCTS_FILENAME;
	string TRANSACTIONS_FILENAME;

	cout << "Ensira os ficheiros" << endl << endl;
	cout << "Ficheiros dos Clientes: ";
	cin >> fichClientes;
	cout << "Ficheiro dos Produtos: ";
	cin >> fichProdutos;
	cout << "Ficheiro das Transacoes: ";
	cin >> fichTransacoes;
	cout << endl;

	if (!fileExists(fichClientes)) 
	{
		cout << "O ficheiro dos clientes ('" << fichClientes << "') não existe." << endl;
		result = false;
	}
	else
	{
		CLIENTS_FILENAME = fichClientes;
	}

	if (!fileExists(fichProdutos))
	{
		cout << "o ficheiro dos produtos ('" << fichProdutos << "') não existe." << endl;
		result = false;
	}
	else
	{
		PRODUCTS_FILENAME = fichProdutos;
	}

	if (!fileExists(fichTransacoes))
	{
		cout << "O ficheiro das transacoes ('" << fichTransacoes << "') não existe." << endl;
		result = false;
	}
	else
	{
		TRANSACTIONS_FILENAME = fichTransacoes;
	}

	cout << endl;
	system("pause");

	return result;
}

/******************************************
 * Gestao de Clientes
 ******************************************/
unsigned short int menuGestaoClientes(){
  unsigned short int opcao;

  system("cls");
  cout << TAB_BIG << "Menu Gestao Clientes" << endl;
  cout << endl;
  cout << TAB << "1 - Listar clientes" << endl;
  cout << TAB << "2 - Ver informacao cliente" << endl;
  cout << TAB << "3 - Editar cliente" << endl;
  cout << TAB << "4 - Remover cliente" << endl;
  cout << TAB << "5 - Voltar ao menu inicial" << endl << endl;
  cout << TAB << "Qual a sua opcao: ";
  opcao = leUnsignedShortInt(1, 5);

  if(opcao == 5)
    return 0;

  return opcao;
}


void opcoesGestaoClientes(VendeMaisMais & supermercado){
  unsigned int opcao;
  string nome;

  while((opcao = menuGestaoClientes()))
    switch (opcao){
    case 1: supermercado.listarClientesOrdemAlfa();
      break;
    case 2: cout << "Qual o nome do cliente: ";
      getline(cin, nome);
      supermercado.mostraInformacaoCliente(nome);
      break;
    case 3:
      break;
    case 4:
      break;
    }
}

/******************************************
 * Gestao de Transacoes
 ******************************************/
unsigned short int menuGestaoTransacoes(){
	return 1;
}

void opcoesGestaoTransacoes(VendeMaisMais & supermercado){
  unsigned int opcao;

  while((opcao = menuGestaoTransacoes()))
    switch (opcao){
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    }
}

/******************************************
 * Gestao de Transacoes
 ******************************************/
unsigned short int menuRecomendacao(){
	return 1;
}

void opcoesRecomendacao(VendeMaisMais & supermercado){
  unsigned int opcao;

  while((opcao = menuRecomendacao()))
    switch (opcao){
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    }

}

/******************************************
 * Menu Inicial
 ******************************************/
unsigned short int menuInicial(){
  unsigned short int opcao;

  system("cls");
  cout << TAB_BIG << "Menu Inicial" << endl;
  cout << endl;
  cout << TAB << "1 - Gestao de clientes" << endl;
  cout << TAB << "2 - Lista produto disponiveis" << endl;
  cout << TAB << "3 - Gestao de transacoes" << endl;
  cout << TAB << "4 - Recomendacoes" << endl;
  cout << TAB << "5 - Sair do programa" << endl << endl;
  cout << TAB << "Qual a sua opcao: ";
  opcao = leUnsignedShortInt(1, 5);

  if(opcao == 5)
    return 0;

  return opcao;
}

void opcoesIniciais(VendeMaisMais & supermercado){
  unsigned int opcao;


  while((opcao = menuInicial()))
    switch (opcao){
    case 1: opcoesGestaoClientes(supermercado);
      break;
    case 2: supermercado.listarProdutos();
      break;
    case 3: opcoesGestaoTransacoes(supermercado);
      break;
    case 4: opcoesRecomendacao(supermercado);
      break;
    }

  supermercado.saveChanges();
}
