/* 
 * File:   ContadorCaracteres.cpp
 * Author: matheus
 * 
 * Created on June 13, 2019
 */

#include <iostream>
#include <cctype>
#include "ContadorCaracteres.hpp"

ContadorCaracteres::ContadorCaracteres()
   {
   this->setNext(NULL);
   }

ContadorCaracteres::~ContadorCaracteres()
   {
   this->setNext(NULL);
   }

string ContadorCaracteres::getName()
   {
   return (this->name);
   }

// Essa funcao necessita estar no cpp e no hpp (MESMO QUE VAZIA) porque ela é VIRTUAL PURA na classe "AbstractChainElements"
void ContadorCaracteres::internalProcessing(shared_ptr<MyDataObject> value) {
}

void ContadorCaracteres::writeResults(shared_ptr <MyDataObject> value) //posso mudar "value" para abobora se quiser...
   {
        string buffer = value->getValue();
   
        // "buffer.size()" retorna o a quantidade de caracteres, portanto, é a funcao pronta 
        //que utilizamos para sobreescrever "writeResults"
        cout <<  "\nQuantidade de caracteres...: " << buffer.size() << endl;
   }

