/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   
   Grupo 02
   Maio/2019
*/

#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_i.hpp"

using namespace std;

Mortadella::Mortadella(float peso, double valor) : Food(valor)
   {
   this->peso = peso;
   };
   
string Mortadella::getDescricao()
   { 
   return ("Mortadela - " + to_string(peso) + " Kg."); 
   };
   
/* fim de arquivo */
