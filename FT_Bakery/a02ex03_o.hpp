/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef A02EX03_O_H
   #define A02EX03_O_H

#include <string>
#include "a02ex03_n.hpp"

using namespace std;

class Pilsen : public Beer
   {
   private:
      
      
   public:
      Pilsen(string, float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */
