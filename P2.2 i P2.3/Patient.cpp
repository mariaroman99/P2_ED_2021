/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Patient.cpp
 * Author: maria
 * 
 * Created on 17 de marzo de 2021, 13:35
 */

#include "Patient.h"
#include <iostream>
#include <string>
using namespace std;

Patient::Patient(string id, string nom, string cognom, string estat) {
    _id=id;
    _nom=nom;
    _cognom=cognom;
    _estat=estat;
    
}

Patient::Patient(){
    
}

void Patient::print(){
    cout<<_id<<" , "<<_nom<<" , "<<_cognom<<" , "<<_estat<<endl;
}


