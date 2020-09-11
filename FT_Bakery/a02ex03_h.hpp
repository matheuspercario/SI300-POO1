/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   
   Grupo 02
   Maio/2019
*/

#ifndef A02EX03_H_H
   #define A02EX03_H_H
   
#include <string>
#include "a02ex03_b.hpp"

using namespace std;

class Ham : public Food
   {
   private:
      float peso;
      
   public:
      Ham(float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */
