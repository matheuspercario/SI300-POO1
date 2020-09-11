/* 
 * File:   PrimeiroMaiusculo.cpp
 * Author: matheus
 * 
 * Created on June 13, 2019
 */

#include <cctype>
#include "PrimeiroMaiusculo.hpp"

PrimeiroMaiusculo::PrimeiroMaiusculo()
   {
   this->setNext(NULL);
   }

PrimeiroMaiusculo::~PrimeiroMaiusculo()
   {
   this->setNext(NULL);
   }

string PrimeiroMaiusculo::getName()
   {
   return (this->name);
   }

// Funcao que deve fazer com que todas as primeiras letras se tornem maiusculas. (Exemplo: "mat mat mat" -> "Mat Mat Mat")
void PrimeiroMaiusculo::internalProcessing(shared_ptr<MyDataObject> value) 
    {
        string buffer = value->getValue();
        // Faz com que sempre a primeira posicao da string seja maiscula.
        buffer.at(0) = toupper(buffer.at(0));

        // Variavel do tipo char que deve identificar um espaco em meio a string.
        char espaco = ' ';

        for (int i = 0; i < buffer.size(); i++)
        {
            // Quando encontrar um espaco, deve-se ir para proxima posicao e entao torna-la maiuscula.
            if (buffer.at(i) == espaco)
            {
                i++;
                buffer.at(i) = toupper(buffer.at(i));
            }
        }
        value->setValue(buffer);
    }