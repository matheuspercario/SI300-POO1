/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

#include <string>
#include <vector>
#include <iostream>
#include <iomanip> 

#include "a02ex00.hpp"
#include "a02ex01_a.hpp"
#include "a02ex03_a.hpp"
#include "a02ex03_b.hpp"
#include "a02ex03_c.hpp"
#include "a02ex03_d.hpp"
#include "a02ex03_e.hpp"
// Exercicio ---------------------
#include "a02ex03_f.hpp"
#include "a02ex03_g.hpp"
#include "a02ex03_h.hpp"
#include "a02ex03_i.hpp"
#include "a02ex03_j.hpp"
#include "a02ex03_k.hpp"
#include "a02ex03_l.hpp"
#include "a02ex03_m.hpp"
#include "a02ex03_n.hpp"
#include "a02ex03_o.hpp"
#include "a02ex03_p.hpp"
#include "a02ex03_q.hpp"
#include "a02ex03_r.hpp"
// -------------------------------
#include "FT_bakery.hpp"
#include "MyProgram.hpp"

using namespace std;


/* 
-------------------------------------------------------------------------------------------------------------------------------------------------
	Funcao ClearAll == DESTRUTOR!
-------------------------------------------------------------------------------------------------------------------------------------------------
*/
MyProgram::~MyProgram()   // está errada ! corrigir !!!!
   {
   //myMainList.clear(); /* erro, pois apaga o primeiro no, entao a lista eh perdida na memoria */
   vector<Food *>::iterator scan = myMainList.begin();
   
   while(scan != myMainList.end())
      {
      delete (*scan);
      *scan = NULL;
      scan++;
      };

   delete verboseMode;
   delete shortMessageMode;
   verboseMode = NULL;
   shortMessageMode = NULL;
   myMainList.clear(); // usar no final, depois que a lista foi apagada!
   };
   
   
/* 
-------------------------------------------------------------------------------------------------------------------------------------------------
	Funcoes - SET/GET programName
-------------------------------------------------------------------------------------------------------------------------------------------------
*/   
void MyProgram::setProgramName(string programName) 	{ this->programName = programName; 	}
string MyProgram::getProgramName() 			{ return programName; 			}

/* 
-------------------------------------------------------------------------------------------------------------------------------------------------
	Funcoes SET/GET shortmessage e verbosemode
-------------------------------------------------------------------------------------------------------------------------------------------------
*/   
void MyProgram::setVerboseMode(MyBooleanClass * verboseMode) 		{ 	this->verboseMode = verboseMode; 		} 
void MyProgram::setShortMessageMode(MyBooleanClass * shortMessageMode) 	{	this->shortMessageMode = shortMessageMode; 	} 

MyBooleanClass * MyProgram::getVerboseMode () 		{ return verboseMode; 		} 
MyBooleanClass * MyProgram::getShortMessageMode ()	{ return shortMessageMode; 	}

/* 
-------------------------------------------------------------------------------------------------------------------------------------------------
	Funcao Start
-------------------------------------------------------------------------------------------------------------------------------------------------
*/   
void MyProgram::start()
   {
   	myMainList.clear();
   	Information::wellcome("C++ Program " + getProgramName() + " running!", shortMessageMode->getStatus());
  	process();
   	Information::bye(shortMessageMode->getStatus());
  	delete this;
   };

/* 
-------------------------------------------------------------------------------------------------------------------------------------------------
	Funcao Process
-------------------------------------------------------------------------------------------------------------------------------------------------
*/
void MyProgram::process()
   {
   vector<string> opcoes({ "Exit", "List Database", "Insert Items" });
   Menu menu("Main Menu", opcoes);
   int escolha = -1;
   
   while(escolha)
      {
      escolha = menu.getEscolha();
 
      switch(escolha)
         {
 	 case 1: { listItems();    }; break;
 	 case 2: { insertItems();  }; break;
         };
      };
   };

/* 
-------------------------------------------------------------------------------------------------------------------------------------------------
	Listar itens
-------------------------------------------------------------------------------------------------------------------------------------------------
*/
void MyProgram::listItems()
   {
   double total = 0.00;
      
   cout << "------------------------------\nItems in Database:\n------------------------------\n";
   vector<Food *>::iterator scan = myMainList.begin();
   
   while(scan != myMainList.end())
      {
      //setw(); setprecision(); fixed == MANIPULADORES DE STREAM
      cout << "  @ " << setw(20) << (*scan)->getDescricao() << "\n\tUS$ " << fixed << setprecision(2) << (*scan)->getValor() << endl;
      total +=  (*scan)->getValor();
      scan++;
      };
   cout << "  Total cost: US$ " << fixed << setprecision(2) << total << endl;
   };

/* 
-------------------------------------------------------------------------------------------------------------------------------------------------
	Inserir itens
-------------------------------------------------------------------------------------------------------------------------------------------------
*/
void MyProgram::insertItems()
   {
   cout << "------------------------------\nInsert New Items:\n------------------------------\n";
  
   Menu menu("Insert Items", { "Exit", "Bread", "Cheese", "Cottage Cheese", "Cracker", "Filled Wafer", "Ham", "Mortadella", "Milk", "Water", "Soda", "Beer" });
   int escolha = -1;
   
   while(escolha)
      {
      escolha = menu.getEscolha();
 
      switch(escolha)
         {
 	 case 1: { insertBread();        }; break;
 	 case 2: { insertCheese();       }; break;
 	 case 3: { insertCottageCheese();}; break;
 	 case 4: { insertCracker();      }; break;
 	 case 5: { insertFilledWafer();  }; break;
 	 case 6: { insertHam();          }; break;
 	 case 7: { insertMortadella();   }; break;
 	 case 8: { insertMilk();	 }; break;
 	 case 9: { insertWater();	 }; break;
 	 case 10:{ insertSoda();	 }; break;
 	 case 11:{ insertBeer();	 }; break;
         };
      };
   };

// Inserir Pão ------------------------------------------------------------------------------------------------------------------
void MyProgram::insertBread()
   {
   Bread * bread;
   string buffer;
   string type;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Bread:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   bread = new Bread(type, weight,cost);
   myMainList.insert(myMainList.end(), bread);
   
   cout << endl << bread->getDescricao() << " - US$ " << fixed << setprecision(2) << bread->getValor() << endl;   
   };


// Inserir Bolhacha ------------------------------------------------------------------------------------------------------------------
void MyProgram::insertCracker()
   {
   Cracker * cracker;
   string buffer;
   string type;
   int    amount;
   double cost;

   cout << "------------------------------\nInsert Cracker:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Amount ....: "; getline(cin, buffer); amount = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   cracker = new Cracker(type, amount, cost);
   myMainList.insert(myMainList.end(), cracker);
   
   cout << endl << cracker->getDescricao() << " - US$ " << fixed << setprecision(2) << cracker->getValor() << endl;   
   };

// Inserir Bolacha Recheada ------------------------------------------------------------------------------------------------------------------
void MyProgram::insertFilledWafer()
   {
   FilledWafer * filledWafer;
   string buffer;
   string type;
   string filling;
   int    amount;
   double cost;

   cout << "------------------------------\nInsert Filled Wafer:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, type); 
   cout << "Filling ...: "; getline(cin, filling);
   cout << "Amount ....: "; getline(cin, buffer); amount = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   filledWafer = new FilledWafer(type, filling, amount,cost);
   myMainList.insert(myMainList.end(), filledWafer);
   
   cout << endl << filledWafer->getDescricao() << " - US$ " << fixed << setprecision(2) << filledWafer->getValor() << endl;   
   };
   
// Inserir Queijo ------------------------------------------------------------------------------------------------------------------
void MyProgram::insertCheese()
   {
   Cheese * cheese;
   string buffer;
   string type;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Cheese:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   cheese = new Cheese(type, weight, cost);
   myMainList.insert(myMainList.end(), cheese);
   
   cout << endl << cheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cheese->getValor() << endl;   
   };
   
// Inserir Requeijão ------------------------------------------------------------------------------------------------------------------
void MyProgram::insertCottageCheese()
   {
   CottageCheese * cottageCheese;
   string buffer;
   string type;
   float volume;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Cottage Cheese:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Volume ....: "; getline(cin, buffer); volume = stof(buffer);
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   cottageCheese = new CottageCheese(type, volume, weight, cost);
   myMainList.insert(myMainList.end(), cottageCheese);
   
   cout << endl << cottageCheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cottageCheese->getValor() << endl;   
   };
   
// Inserir Presunto ------------------------------------------------------------------------------------------------------------------
void MyProgram::insertHam()
   {
   Ham * ham;
   string buffer;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Ham:\n------------------------------\n";
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   ham = new Ham(weight, cost);
   myMainList.insert(myMainList.end(), ham);
   
   cout << endl << ham->getDescricao() << " - US$ " << fixed << setprecision(2) << ham->getValor() << endl;   
   };

// Inserir Mortadela ------------------------------------------------------------------------------------------------------------------
void MyProgram::insertMortadella()
   {
   Mortadella * mortadella;
   string buffer;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Ham:\n------------------------------\n";
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   mortadella = new Mortadella(weight, cost);
   myMainList.insert(myMainList.end(), mortadella);
   
   cout << endl << mortadella->getDescricao() << " - US$ " << fixed << setprecision(2) << mortadella->getValor() << endl;   
   };

// Inserir Leite -----------------------------------------------------------------------------------------------------------------------
void MyProgram::insertMilk()
   {
   Milk * milk;
   string buffer;
   string type;
   float volume;
   double cost;

   cout << "------------------------------\nInsert Milk:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Volume ....: "; getline(cin, buffer); volume = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   milk = new Milk(type, volume, cost);
   myMainList.insert(myMainList.end(), milk);
   
   cout << endl << milk->getDescricao() << " - US$ " << fixed << setprecision(2) << milk->getValor() << endl;   
   };
   
// Inserir Agua -----------------------------------------------------------------------------------------------------------------------
void MyProgram::insertWater()
   {
   Water * water;
   string buffer;
   string type;
   float volume;
   double cost;

   cout << "------------------------------\nInsert Water:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Volume ....: "; getline(cin, buffer); volume = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   water = new Water(type, volume, cost);
   myMainList.insert(myMainList.end(), water);
   
   cout << endl << water->getDescricao() << " - US$ " << fixed << setprecision(2) << water->getValor() << endl;   
   };
   
// Inserir Refrigerante ---------------------------------------------------------------------------------------------------------------
void MyProgram::insertSoda()
   {
   Soda * soda;
   string buffer;
   string type;
   float volume;
   double cost;

   cout << "------------------------------\nInsert Soda:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Volume ....: "; getline(cin, buffer); volume = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   soda = new Soda(type, volume, cost);
   myMainList.insert(myMainList.end(), soda);
   
   cout << endl << soda->getDescricao() << " - US$ " << fixed << setprecision(2) << soda->getValor() << endl;   
   };

// Inserir Cerveja ---------------------------------------------------------------------------------------------------------------
void MyProgram::insertBeer()
   {
   cout << "------------------------------\nInsert Beers:\n------------------------------\n";
  
   Menu menu("Insert Beers", { "Exit", "Pilsen", "Ipa (Indian Pale Ale)", "Apa (American Pale Ale)", "Porter" }); 
   // Pilsen, IPA (Indian Pale Ale), APA (American Pale Ale), Stout
   int escolha = -1;
   
   while(escolha)
      {
      escolha = menu.getEscolha();
 
      switch(escolha)
         {
 	 case 1: { insertPilsen();   	}; break;
 	 case 2: { insertIpa();    	}; break;
 	 case 3: { insertApa();		}; break;
 	 case 4: { insertPorter();    	}; break;
 	 };
      };
   };

// Inserir Cerveja - Pilsen ----------------------------------------------------------------------------------------------------
void MyProgram::insertPilsen()
   {
   Pilsen * pilsen;
   string buffer;
   string type;
   float volume;
   double cost;

   cout << "------------------------------\nInsert Pilsen Beer:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Volume ....: "; getline(cin, buffer); volume = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   pilsen = new Pilsen(type, volume, cost);
   myMainList.insert(myMainList.end(), pilsen);
   
   cout << endl << pilsen->getDescricao() << " - US$ " << fixed << setprecision(2) << pilsen->getValor() << endl;   
   };
   
// Inserir Cerveja - Ipa ----------------------------------------------------------------------------------------------------
void MyProgram::insertIpa()
   {
   Ipa * ipa;
   string buffer;
   string type;
   float volume;
   double cost;

   cout << "------------------------------\nInsert Ipa Beer:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Volume ....: "; getline(cin, buffer); volume = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   ipa = new Ipa(type, volume, cost);
   myMainList.insert(myMainList.end(), ipa);
   
   cout << endl << ipa->getDescricao() << " - US$ " << fixed << setprecision(2) << ipa->getValor() << endl;   
   };

// Inserir Cerveja - Apa ----------------------------------------------------------------------------------------------------
void MyProgram::insertApa()
   {
   Apa * apa;
   string buffer;
   string type;
   float volume;
   double cost;

   cout << "------------------------------\nInsert Apa Beer:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Volume ....: "; getline(cin, buffer); volume = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   apa = new Apa(type, volume, cost);
   myMainList.insert(myMainList.end(), apa);
   
   cout << endl << apa->getDescricao() << " - US$ " << fixed << setprecision(2) << apa->getValor() << endl;   
   };
   
// Inserir Cerveja - Porter ----------------------------------------------------------------------------------------------------
void MyProgram::insertPorter()
   {
   Porter * porter;
   string buffer;
   string type;
   float volume;
   double cost;

   cout << "------------------------------\nInsert Porter Beer:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Volume ....: "; getline(cin, buffer); volume = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   porter = new Porter(type, volume, cost);
   myMainList.insert(myMainList.end(), porter);
   
   cout << endl << porter->getDescricao() << " - US$ " << fixed << setprecision(2) << porter->getValor() << endl;   
   };
   
/* fim de arquivo */
