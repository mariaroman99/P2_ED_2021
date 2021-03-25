/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedDeque.h
 * Author: maria
 *
 * Created on 17 de marzo de 2021, 13:29
 */

#ifndef LINKEDDEQUE_H
#define LINKEDDEQUE_H
#include "DoubleNode.h"
#include "Patient.h"


class LinkedDeque {
public:
    LinkedDeque();
    LinkedDeque(const LinkedDeque& q);
    virtual ~LinkedDeque();
    void enqueueFront(Patient& f);
    void enqueueBack(Patient& f);
    void dequeueFront();
    void dequeueBack();
    
    bool isEmpty();
    void print();
    const Patient& getFront();
    const Patient& getBack();
    int size();
    
private:
    DoubleNode* _head;
    DoubleNode* _rear;
    int _size;
    

};

#endif /* LINKEDDEQUE_H */

