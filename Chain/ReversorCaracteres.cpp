/* 
 * File:   ReversorCaracteres.cpp
 * Author: matheus
 * 
 * Created on June 13, 2019
 */

#include <cctype>
#include "ReversorCaracteres.hpp"

ReversorCaracteres::ReversorCaracteres()
   {
   this->setNext(NULL);
   }

ReversorCaracteres::~ReversorCaracteres()
   {
   this->setNext(NULL);
   }

string ReversorCaracteres::getName()
   {
   return (this->name);
   }

// Funcao que deve inverter os caracteres (ABC -> CBA)
void ReversorCaracteres::internalProcessing(shared_ptr<MyDataObject> value) 
    {
        // Recebendo valores do "myData"
        string buffer = value->getValue();

        // Funcao "REVERSE" eh responsavel por inverter toda a string, exemplo: ABC -> CBA. Ela tem como parametros
        //o comeco e o final da string.
        reverse(buffer.begin(), buffer.end());

        value->setValue(buffer);
        
        
    }