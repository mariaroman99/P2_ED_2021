/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DoubleNode.cpp
 * Author: maria
 * 
 * Created on 17 de marzo de 2021, 13:28
 */

#include "DoubleNode.h"
#include "Patient.h"
#include <iostream>

using namespace std;


DoubleNode::DoubleNode(Patient& p){
    this->_element=p;
    _next=NULL;
    _prev=NULL;
    
}

Patient& DoubleNode::getElement(){
    _element.print();
    return _element;
    
}

DoubleNode* DoubleNode::getNext(){
    return _next;
    
}

DoubleNode* DoubleNode::getPrevious(){
    return _prev;
    
}

void DoubleNode::setNext(DoubleNode* new_node){
    this->_next=new_node;
    
}

void DoubleNode::setPrevious(DoubleNode* new_node){
    this->_prev=new_node;
}


