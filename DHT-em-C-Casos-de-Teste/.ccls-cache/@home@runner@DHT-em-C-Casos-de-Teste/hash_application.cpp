
#include "hash.h"
#include <iostream>

using namespace std;

int main() {
  Hash clientesHash(10); // determinando o tamanho da tabela

  // caso de TESTE 1: Adicionar novos usuários utilizando o Imei e Login
  int imeis[7] = {73567, 28945, 37265, 19758, 38294, 27487, 39267};

  string login[7] = {"Joao", "Carol",  "Gabriel",  "Kathy",
                     "Pedro", "Cecilia", "Marina"};
  

  // caso de TESTE 2 -  adicionar strings login imei
  for (int i = 0; i < 7; i++) {
    Cliente cliente = Cliente(imeis[i], login[i]);
    clientesHash.insertItem(cliente);
  }

  // caso de TESTE 3 - print da tabela
  clientesHash.print();
  cout << "------------------------------" << endl;

  // caso de TESTE 4 - posicionamento da Kathy
  Cliente cliente(19758, "");
  bool found = false;
  clientesHash.retrieveItem(cliente, found);
  cout << cliente.getLogin() << " -> " << found << endl;

  // caso de TESTE 5 - apagar um cliente
  clientesHash.deleteItem(cliente);
  clientesHash.print();
  cout << "Fim" << endl;
}
