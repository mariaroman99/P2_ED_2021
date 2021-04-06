/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArrayDeque.h
 * Author: maria
 *
 * Created on 16 de marzo de 2021, 17:20
 */

#ifndef ARRAYDEQUE_H
#define ARRAYDEQUE_H

#include <vector>

class ArrayDeque {
public:
    ArrayDeque(const int);
    void enqueueBack(const int key);
    void dequeueFront();
    int size();
    bool isFull();
    bool isEmpty();
    void print();
    const int getFront();
    void enququeFront(const int);
    void dequeueBack();
    const int getBack();
private:
    int _max_size;
    int _size;
    std::vector<int> _data;

};

#endif /* ARRAYDEQUE_H */

