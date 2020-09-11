/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   
   Grupo 02
   Maio/2019
*/

#ifndef A02EX03_G_H
   #define A02EX03_G_H
   
#include <string>
#include "a02ex03_f.hpp"

using namespace std;

class CottageCheese : public Cheese
   {
   private:
   	float volume;
   	
   public:
      CottageCheese(string, float, float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */
