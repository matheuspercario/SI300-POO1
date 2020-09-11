/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef A02EX03_N_H
   #define A02EX03_N_H

#include <string>
#include "a02ex03_j.hpp"

using namespace std;

class Beer : public Liquid
   {
   protected:
     string tipo;
      
   public:
      Beer(string, float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */
