/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_j.hpp"

using namespace std;

Liquid::Liquid(float volume, double valor) : Food(valor)
   {
   this->volume = volume;
   };
   
string Liquid::getDescricao()
   { 
   return (" - " + to_string(volume) + " Litro(s)."); 
   };
   
   
/* fim de arquivo */
