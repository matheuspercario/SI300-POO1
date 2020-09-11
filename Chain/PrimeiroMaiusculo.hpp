/* 
 * File:   PrimeiroMaiusculo.hpp
 * Author: matheus
 *
 * Created on June 13, 2019
 */

#ifndef PRIMEIROMAIUSCULO_HPP
#define PRIMEIROMAIUSCULO_HPP

// Classe derivada de AbstractChainElement
#include "AbstractChainElement.hpp" 
#include <string>

#include <memory>

using namespace std;

class PrimeiroMaiusculo : public AbstractChainElement {
private:
    const string name = "PrimeiroMaiusculo";
    void internalProcessing(shared_ptr <MyDataObject> value) override;

public:
    PrimeiroMaiusculo();
    virtual ~PrimeiroMaiusculo();
    string getName() override;
};

#endif /* PRIMEIROMAIUSCULO_HPP */

