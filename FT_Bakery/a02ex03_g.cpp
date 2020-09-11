/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   
   Grupo 02
   Maio/2019
*/

#include <string>
#include "a02ex03_f.hpp"
#include "a02ex03_g.hpp"

CottageCheese::CottageCheese(string tipo, float volume, float peso, double valor) : Cheese(tipo, peso, valor)
   {
   this->volume = volume;
   };
   
string CottageCheese::getDescricao()
   { 
   return ("Requeijão volume de " + to_string(volume) + " - " + Cheese::getDescricao()); 
   };
   
/* fim de arquivo */
