/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_n.hpp"
#include "a02ex03_o.hpp"

using namespace std;

Pilsen::Pilsen(string tipo, float volume, double valor) : Beer(tipo, volume, valor)
   {
   };
   
string Pilsen::getDescricao()
   { 
   return ("Cerveja Pilsen " + Beer::getDescricao()); 
   };
   
   
/* fim de arquivo */
