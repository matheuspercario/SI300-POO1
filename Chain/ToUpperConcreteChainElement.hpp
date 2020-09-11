/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   toUpperConcreteChainElement.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 5:17 PM
 */

#ifndef TOUPPERCONCRETECHAINELEMENT_HPP
#define TOUPPERCONCRETECHAINELEMENT_HPP

//Classe derivada de AbstractChainElement
#include "AbstractChainElement.hpp"
#include <string>

#include <memory>

using namespace std;

class ToUpperConcreteChainElement : public AbstractChainElement {
private:
    const string name = "ToUpperConcreteChainElement";
    void internalProcessing(shared_ptr <MyDataObject> value) override;

public:
    ToUpperConcreteChainElement();
    virtual ~ToUpperConcreteChainElement();
    string getName() override;
};

#endif /* TOUPPERCONCRETECHAINELEMENT_HPP */

