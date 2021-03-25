/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArrayDeque.cpp
 * Author: maria
 * 
 * Created on 16 de marzo de 2021, 17:20
 */

#include "ArrayDeque.h"
#include <vector>
#include <cstdlib>
#include <iostream>
#include <stdexcept>

using namespace std;

ArrayDeque::ArrayDeque(const int max){
    this->_max_size=max;
    vector<int> cua;
    _data=cua;
    this->_size=this->_data.size();
    cout<<"Estructura creada"<<endl;
  
}

void ArrayDeque::enqueueBack(const int key){
    if(this->isFull()){
        throw std::invalid_argument( "EXCEPTION: L’estructura està plena" );
        
    }
    this->_size++;
    _data.push_back(key);
    
}

void ArrayDeque::dequeueFront(){
    if(this->isEmpty()){
        throw std::invalid_argument( "EXCEPTION: L’estructura està buida" );
        
    }
    _data.erase(_data.begin());
    this->_size--;
}

int ArrayDeque::size(){
    return this->_size;
}

bool ArrayDeque::isFull(){
    if(this->_size>=this->_max_size){
        return true;
    }
    return false;
}

bool ArrayDeque::isEmpty(){
    if(this->_size=0){
        return true;
    }
    return false;
    
}

void ArrayDeque::print(){
    for (int i=0; i<_size; i++){
        cout<<this->_data[i]<<endl;
       
    }
    
}

const int ArrayDeque::getFront(){
    return this->_data.begin();
    
}

void ArrayDeque::enququeFront(const int key){
    if(this->isFull()){
        throw std::invalid_argument( "EXCEPTION: L’estructura està plena" );
        
    }
    this->_size++;
    _data.insert(_data.begin(),key);
    
    
}

void ArrayDeque::dequeueBack(){
    if(this->isEmpty()){
        throw std::invalid_argument( "EXCEPTION: L’estructura està buida" );
        
    }
    _data.pop_back();
    this->_size--;
    
}

const int ArrayDeque::getBack(){
    return this->_data.back();
    
}