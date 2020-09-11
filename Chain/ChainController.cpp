/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ChainController.cpp
 * Author: andre
 * 
 * Created on June 9, 2016, 4:20 PM
 */

#include <iostream>
#include "ChainController.hpp"
#include "Info.hpp"
#include "ToLowerConcreteChainElement.hpp"
#include "ToUpperConcreteChainElement.hpp"
#include "XorCriptoConcreteChainElement.hpp"
// Includes feitos pelo grupo -------------------------------------
#include "Menu.hpp"
#include "ContadorCaracteres.hpp"
#include "ReversorCaracteres.hpp"
#include "PrimeiroMaiusculo.hpp"
// ----------------------------------------------------------------

using namespace std;

ChainController::ChainController()
   {
   chainUnits.clear();
   myData = NULL;
   }

void ChainController::start(void)
   {
      vector<string> opcoes(  {  "Exit",
                                 "Entrar string para processamento",
                                 "Encadear elementos de processamento",
                                 "Disparar cadeia" 
                              });
      Menu menu("Primeiro Menu", opcoes);
      int escolha = -1;
      int validador = 0;

      while(escolha){
        escolha = menu.getEscolha();

        switch(escolha){
            case 1: {   
                        string entrada;
                        cout << "\nDigite a String...: "; getline(cin, entrada); loadData(entrada);
                     };
                        validador = 1; 
            break;

            case 2: { 
                  if (validador != 1)
                  {
                     cout << "\nATENCAO...: Antes de encadear elementos é preciso digitar uma string para processamento na opção 1! \t" << endl;
                  }  else { createElements(); }
                       
            break;

            case 3: {
                  if(validador == 0)
                  {
                     cout << "\nATENCAO...: Antes de processar é preciso digitar uma string para processamento na opção 1! \t" << endl;
                     break;
                  }
                  // verify if there is at least one element in the chain
                  if (chainUnits.size() > 0)
                  {
                     // prepare the chain, linking the elements
                     prepareChain();
                     // process all elements in the chain
                     processChain();
                  }
                  else
                  {
                     // no elements in the chain
                     cout << "Nothing to do... empty chain!" << endl;
                  };
               };
            }; 
         };    
      };
   };

void ChainController::loadData(string entrada) 
   {
      myData = make_shared <MyDataObject> (MyDataObject(entrada));
   }

void ChainController::createElements()
   {
   vector<string> opcoes({ "Exit",
                           "Elemento: ToLowerConcreteChainElement",
                           "Elemento: ToUpperConcreteChainElement",
                           "Elemento: XorCriptoConcreteChainElement",
                           "Elemento: ContadorCaracteres",
                           "Elemento: ReversorCaracteres",
                           "Elemento: PrimeiroMaiusculo",
                           "Encadear todos elementos de processamento"
                          });

    Menu menu("Segundo Menu", opcoes);
    int escolha = -1;

    while(escolha)
    {
        escolha = menu.getEscolha();

        switch(escolha)
        {
            case 1: { chainUnits.push_back(make_shared<ToLowerConcreteChainElement>(ToLowerConcreteChainElement()));}
            break;
            case 2: { chainUnits.push_back(make_shared<ToUpperConcreteChainElement>(ToUpperConcreteChainElement()));}
            break;
            case 3: { chainUnits.push_back(make_shared<XorCriptoConcreteChainElement>(XorCriptoConcreteChainElement()));}
            break;
            case 4: { chainUnits.push_back(make_shared<ContadorCaracteres>(ContadorCaracteres()));}
            break;
            case 5: { chainUnits.push_back(make_shared<ReversorCaracteres>(ReversorCaracteres()));}
            break;
            case 6: { chainUnits.push_back(make_shared<PrimeiroMaiusculo>(PrimeiroMaiusculo()));}
            break;
            // encadeia todos elementos de processamento.
            case 7: {
                chainUnits.push_back(make_shared<ToLowerConcreteChainElement>(ToLowerConcreteChainElement()));
                chainUnits.push_back(make_shared<ToUpperConcreteChainElement>(ToUpperConcreteChainElement()));
                chainUnits.push_back(make_shared<XorCriptoConcreteChainElement>(XorCriptoConcreteChainElement()));
                chainUnits.push_back(make_shared<ContadorCaracteres>(ContadorCaracteres()));
                chainUnits.push_back(make_shared<ReversorCaracteres>(ReversorCaracteres()));
                chainUnits.push_back(make_shared<PrimeiroMaiusculo>(PrimeiroMaiusculo()));
                //chainUnits.push_back(make_shared<TranspositionCripto>(TranspositionCripto()));
            }
            break; 
            };
         };
      };

void ChainController::prepareChain()
   {
   if (chainUnits.size() > 1)
      {
      // set the chain
      for (int count = 0; count < (chainUnits.size() - 1); count++)
         {
         (chainUnits.at(count))->setNext(chainUnits.at(count + 1));
         }
      }
   }

void ChainController::processChain()
   {
   cout << "\nInitial value ...: " << myData->getValue() << endl << endl;
   (chainUnits.at(0))->doProcessing(myData);
   cout << "\nFinal value .....: " << myData->getValue() << endl;
   }
