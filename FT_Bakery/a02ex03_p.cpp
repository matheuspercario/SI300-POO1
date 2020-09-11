/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_n.hpp"
#include "a02ex03_p.hpp"

using namespace std;

Ipa::Ipa(string tipo, float volume, double valor) : Beer(tipo, volume, valor)
   {
   };
   
string Ipa::getDescricao()
   { 
   return ("Cerveja Ipa (Indian Pale Ale) " + Beer::getDescricao()); 
   };
   
   
/* fim de arquivo */
