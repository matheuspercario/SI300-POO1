/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_j.hpp"
#include "a02ex03_n.hpp"

using namespace std;

Beer::Beer(string tipo, float volume, double valor) : Liquid(volume, valor)
   {
   this->tipo = tipo;
   };
   
string Beer::getDescricao()
   { 
   return (tipo + " - " + to_string(volume) + " Litro(s)."); 
   };
   
   
/* fim de arquivo */
