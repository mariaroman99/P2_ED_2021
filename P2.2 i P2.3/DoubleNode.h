/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DoubleNode.h
 * Author: maria
 *
 * Created on 17 de marzo de 2021, 13:28
 */

#ifndef DOUBLENODE_H
#define DOUBLENODE_H

#include "Patient.h"


class DoubleNode {
public:
    DoubleNode(Patient& p);
    Patient& getElement();
    DoubleNode* getNext();
    DoubleNode* getPrevious();
    void setNext(DoubleNode*);
    void setPrevious(DoubleNode*);
  
    
private:
    Patient _element;
    DoubleNode* _next;
    DoubleNode* _prev;

};

#endif /* DOUBLENODE_H */

