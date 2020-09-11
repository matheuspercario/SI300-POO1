/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   toUpperConcreteChainElement.cpp
 * Author: andre
 * 
 * Created on June 9, 2016, 5:17 PM
 */

#include <cctype>
#include "ToUpperConcreteChainElement.hpp"


ToUpperConcreteChainElement::ToUpperConcreteChainElement()
   {
   this->setNext(NULL);
   }

ToUpperConcreteChainElement::~ToUpperConcreteChainElement()
   {
   this->setNext(NULL);
   }

string ToUpperConcreteChainElement::getName()
   {
   return (this->name);
   }

void ToUpperConcreteChainElement::internalProcessing(shared_ptr <MyDataObject> value)
   {
   // Buffer do tipo string recebe o valor de "myData".
   string buffer = value->getValue();
   
   for(int count = 0; count < buffer.size(); count++)
      {
      // Cada uma das posicoes da string tornam-se maisculas pela funcao "toupper".
      buffer.at(count) = toupper(buffer.at(count));
      }
   // Retorna a string buffer processada.
   value->setValue(buffer);
   }
