/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_n.hpp"
#include "a02ex03_r.hpp"

using namespace std;

Porter::Porter(string tipo, float volume, double valor) : Beer(tipo, volume, valor)
   {
   };
   
string Porter::getDescricao()
   { 
   return ("Cerveja Porter " + Beer::getDescricao()); 
   };
   
   
/* fim de arquivo */
