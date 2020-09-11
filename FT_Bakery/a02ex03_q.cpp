/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_n.hpp"
#include "a02ex03_q.hpp"

using namespace std;

Apa::Apa(string tipo, float volume, double valor) : Beer(tipo, volume, valor)
   {
   };
   
string Apa::getDescricao()
   { 
   return ("Cerveja Apa (American Pale Ale) " + Beer::getDescricao()); 
   };
   
   
/* fim de arquivo */
