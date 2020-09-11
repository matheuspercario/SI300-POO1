/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   
   Grupo 02
   Maio/2019
*/

#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_h.hpp"

using namespace std;

Ham::Ham(float peso, double valor) : Food(valor)
   {
   this->peso = peso;
   };
   
string Ham::getDescricao()
   { 
   return ("Presunto - " + to_string(peso) + " Kg."); 
   };
   
/* fim de arquivo */
