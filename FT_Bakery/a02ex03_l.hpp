/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef A02EX03_L_H
   #define A02EX03_L_H

#include <string>
#include "a02ex03_j.hpp"

using namespace std;

class Water : public Liquid
   {
   private:
      string tipo;
      
   public:
      Water(string, float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */
