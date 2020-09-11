/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_j.hpp"
#include "a02ex03_m.hpp"

using namespace std;

Soda::Soda(string tipo, float volume, double valor) : Liquid(volume, valor)
   {
   this->tipo = tipo;
   };
   
string Soda::getDescricao()
   { 
   return ("Refrigerante " + tipo + Liquid::getDescricao()); 
   };
   
   
/* fim de arquivo */
