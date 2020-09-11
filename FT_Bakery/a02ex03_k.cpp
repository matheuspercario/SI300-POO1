/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_j.hpp"
#include "a02ex03_k.hpp"

using namespace std;

Milk::Milk(string tipo, float volume, double valor) : Liquid(volume, valor)
   {
   this->tipo = tipo;
   };
   
string Milk::getDescricao()
   { 
   return ("Leite " + tipo + Liquid::getDescricao()); 
   };
   
   
/* fim de arquivo */
