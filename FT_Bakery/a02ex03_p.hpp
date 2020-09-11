/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef A02EX03_P_H
   #define A02EX03_P_H

#include <string>
#include "a02ex03_n.hpp"

using namespace std;

class Ipa : public Beer
   {
   private:
      
      
   public:
      Ipa(string, float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */

