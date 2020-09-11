/* 
 * File:   ContadorCaracteres.hpp
 * Author: matheus
 *
 * Created on June 13, 2019
 */

#ifndef CONTADORCARACTERES_HPP
#define CONTADORCARACTERES_HPP

// Classe derivada de AbstractChainElement
#include "AbstractChainElement.hpp" 
#include <string>

#include <memory>

using namespace std;

class ContadorCaracteres : public AbstractChainElement {
private:
    const string name = "ContadorCaracteres";
    void internalProcessing(shared_ptr <MyDataObject> value) override;

public:
    ContadorCaracteres();
    virtual ~ContadorCaracteres();
    string getName() override;

    // Funcao esta declarada aqui, pois ela deve ser sobreescrita para que no final mostre a quantidade de caracteres.
    virtual void writeResults (shared_ptr <MyDataObject> value) override;
};

#endif /* CONTADORCARACTERES_HPP */

