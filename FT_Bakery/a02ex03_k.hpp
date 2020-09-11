/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef A02EX03_K_H
   #define A02EX03_K_H

#include <string>
#include "a02ex03_j.hpp"

using namespace std;

class Milk : public Liquid
   {
   private:
      string tipo;
      
   public:
      Milk(string, float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */
