/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   
   Grupo 02 - POO
   Mar/2016
*/

#include <vector>
#include <iostream>
#include "FT_bakery.hpp"
#include "MyProgram.hpp"

void verifyArguments(int argc, char* argv[], MyProgram * programa);
   
int main(int argc, char* argv[])
  {    
   
   MyProgram * programa = new MyProgram();
   verifyArguments(argc, argv, programa);
   programa->setProgramName(string(argv[0]));
   programa->start();
   
  }
  
  







void verifyArguments(int argc, char* argv[], MyProgram * programa)
   {
     
   MyBooleanClass * verboseMode 	= programa->getVerboseMode();
   MyBooleanClass * shortMessageMode 	= programa->getShortMessageMode();
   
   if(verboseMode)                     { delete verboseMode;         }; 
   if(shortMessageMode)                { delete shortMessageMode;    };  

   programa->setVerboseMode(NULL);
   programa->setShortMessageMode(NULL);
   
   for(int count = 1; count < argc; count++)
      {
      if(string(argv[count]) == "-v") { programa->setVerboseMode(new MyBooleanClass(true));  		};
      if(string(argv[count]) == "-s") { programa->setShortMessageMode(new MyBooleanClass(true));	};
      };
   
   if(!programa->getVerboseMode())                    { programa->setVerboseMode(new MyBooleanClass());     	};  // default is false
   if(!programa->getShortMessageMode())               { programa->setShortMessageMode(new MyBooleanClass());    };  // default is false
   }
