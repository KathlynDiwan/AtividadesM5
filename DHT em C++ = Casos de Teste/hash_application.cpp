
#include <iostream>
#include "hash.h" 

using namespace std;


int main() {
  Hash clientHash(8); //determinando o tamanho da tabela 
 
//caso de TESTE 1: Colocar novos imeis e logins
  Hash clienteHash(10);
  
   int   ras[7]   = {
     73567, 28945, 37265,
     19758, 38294, 27487,
     39267};
  
  string nomes[7] = {
    "Pedro", "Raul", "Paulo",
    "Carlos", "Lucas", "Maria",
    "Samanta"}; 

//caso de TESTE 2 -  adicionar strings login imei
    for (int i = 0; i < 7; i++) {
    Cliente cliente = Cliente(imeis[i], nomes[i]);
    clientesHash.insertItem(cliente);
      } 

  //caso de TESTE 3 - print da tabela
  clientesHash.print();  
  cout << "------------------------------" <<  endl;
  
  //caso de TESTE 4 - posicionamento do CARLOS
  Cliente cliente(19758,"");  
  bool     found = false;
  clientesHash.retrieveItem(cliente, found);
  cout << cliente.getNome() << " -> " << found << endl;
  
  cout << "------------------------------" <<  endl;

  //caso de TESTE 5 - apagar um cliente
  clientesHash.deleteItem(cliente);
  clientesHash.print();
  cout << "Fim" << endl;  
}
