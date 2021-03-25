/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedDeque.cpp
 * Author: maria
 * 
 * Created on 17 de marzo de 2021, 13:29
 */

#include "LinkedDeque.h"
#include <iostream>

using namespace std;

LinkedDeque::LinkedDeque() {
    _head=_rear=NULL;
    _size=0;
}

LinkedDeque::LinkedDeque(const LinkedDeque& orig) {
}

LinkedDeque::~LinkedDeque() {
    if(!isEmpty())
      {
         DoubleNode *tmp = _head;

	 while(tmp != nullptr)
	 {
	    DoubleNode *deleteNode = tmp;
	    tmp = tmp->getNext();
	    delete deleteNode;
	 }
      }
}

void LinkedDeque:: enqueueFront(Patient& f){
    DoubleNode* tmp=new DoubleNode(f);
    if(isEmpty()){
        _head=_rear=tmp;
        return;
    }
    tmp->setNext(_head);
    _head->setPrevious(tmp);
    _head=tmp;
    _size++;
    
}
void LinkedDeque:: enqueueBack(Patient& f){
    DoubleNode* tmp=new DoubleNode(f);
    if(isEmpty()){
        _head=_rear=tmp;
        return;
    }
    tmp->setPrevious(_rear);
    _rear->setNext(tmp);
    _rear=tmp;
    _size++;
    
}
void LinkedDeque:: dequeueFront(){
    if(isEmpty()){
        return;
    }
    DoubleNode* tmp=_head;
    _head=_head->getNext();
    
    if(isEmpty()){
        _rear=NULL;
    }
    delete(tmp);
    _size--;
    
}
void LinkedDeque:: dequeueBack(){
    if(isEmpty()){
        return;
    }
    
    DoubleNode* tmp=_rear;
    _rear=_rear->getPrevious();
    
    if(isEmpty()){
        _head=NULL;
    }
    delete(tmp);
    _size--;
    
}

bool LinkedDeque:: isEmpty(){
    if(_rear==NULL){
        return true;
    }return false;
    
}
void LinkedDeque::print(){
    DoubleNode* tmp=_head;
    for(int i=0; i<(_size+1);i++){
        tmp->getElement();
        tmp=tmp->getNext();
       
        
    }
    
}
const Patient& LinkedDeque:: getFront(){
    return _head->getElement();
    
}
const Patient& LinkedDeque:: getBack(){
    return _rear->getElement();
    
}
int LinkedDeque:: size(){
    return _size;
    
}

