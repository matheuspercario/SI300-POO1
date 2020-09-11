/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <iostream>
#include "Sistema.h"
#include "Concessionaria.h"

int main(int argc, char* argv[])
  {
  try
     {
     Concessionaria * cliente = new Concessionaria("Auto-FT Veiculos S.A.", "R. Paschoal Marmo, 1888", "Limeira", "SP", "+55 19 2113-3306");
     Sistema * programa = new Sistema(cliente);
     programa->processa();
     delete cliente;
     }
  catch(exception& excecao)
     {
     cerr << "Ocorreu um problema: " << excecao.what();
     };
  };
  

/* fim de arquivo */