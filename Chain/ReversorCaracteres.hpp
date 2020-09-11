/* 
 * File:   ReversorCaracteres.hpp
 * Author: matheus
 *
 * Created on June 13, 2019
 */

#ifndef REVERSORCARACTERES_HPP
#define REVERSORCARACTERES_HPP

// Classe derivada de AbstractChainElement
#include "AbstractChainElement.hpp" 
#include <string>

#include <memory>
// <bits/stdc++.h> é a biblioteca necessaria para utilizar a funcao "REVERSE"
#include<bits/stdc++.h>

using namespace std;

class ReversorCaracteres : public AbstractChainElement {
private:
    const string name = "ReversorCaracteres";
    void internalProcessing(shared_ptr <MyDataObject> value) override;

public:
    ReversorCaracteres();
    virtual ~ReversorCaracteres();
    string getName() override;
};

#endif /* REVERSORCARACTERES_HPP */

