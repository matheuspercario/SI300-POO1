/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   
   Grupo 02 - POO
   Mar/2016
*/

using namespace std;

#ifndef MYPROGRAM_H
   #define MYPROGRAM_H
   
#include <string>
#include <vector>
#include "a02ex01_a.hpp"
#include "a02ex03_b.hpp"


class MyProgram
   {
   private: 
   	string programName;
  
   	MyBooleanClass * verboseMode;      
	MyBooleanClass * shortMessageMode; 

	vector<Food *> myMainList;

   	void listItems(void);
   	//void clearAll(void); /* clearAll() substituido pelo destrutor! */
   	void process(void);
   	
   	void insertItems(void);
   	void insertBread(void);
   	void insertCracker(void);
   	void insertFilledWafer(void);
   	void insertCheese(void);
   	void insertCottageCheese(void);
   	void insertHam(void);
   	void insertMortadella(void);
  
   	void insertMilk(void);
   	void insertWater(void);
   	void insertSoda(void);
   	
   	void insertBeer(void);
   	void insertPilsen(void);
   	void insertIpa(void);
   	void insertApa(void);
   	void insertPorter(void);
   	
   public:
   	~MyProgram(); //implementar CPP
   	
   	string getProgramName();
   	void setProgramName(string);
   	
   	MyBooleanClass * getVerboseMode(); 			
   	void setVerboseMode(MyBooleanClass *);
   	MyBooleanClass * getShortMessageMode();	 
   	void setShortMessageMode(MyBooleanClass *);
   	
   	void start(void);	
   };
   
#endif

/* fim de arquivo */
