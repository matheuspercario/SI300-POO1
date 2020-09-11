/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ChainController.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 4:20 PM
 */

#ifndef CHAINCONTROLLER_HPP
#define CHAINCONTROLLER_HPP

#include "AbstractChainElement.hpp"
#include "MyDataObject.hpp"
#include <vector>
// Biblioteca memory é responsável por ponteiros inteligentes (SmartPointers)
#include <memory>

using namespace std;

class ChainController {
private:
    // Implementação dos SmartPointers [Exercício "a)"]
    vector <shared_ptr <AbstractChainElement>> chainUnits;
    // Implementação dos SmartPointers [Exercício "a)"]
    shared_ptr <MyDataObject> myData;
public:
    ChainController();
    void start();

    //loadData deve receber a STRING fornecida pelo usuario, portanto, foi preciso colocar o parametro na funcao.
    void loadData(string);

    void processChain();

    void prepareChain();

    void createElements();
};

#endif /* CHAINCONTROLLER_HPP */

