/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef A02EX03_J_H
   #define A02EX03_J_H

#include <string>
#include "a02ex03_b.hpp"

using namespace std;

class Liquid : public Food
   {
   protected:
      float volume;
      
   public:
      Liquid(float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */
