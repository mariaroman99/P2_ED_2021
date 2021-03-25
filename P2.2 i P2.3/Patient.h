/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Patient.h
 * Author: maria
 *
 * Created on 17 de marzo de 2021, 13:35
 */

#ifndef PATIENT_H
#define PATIENT_H
#include <iostream>
#include <string>

using namespace std;

class Patient {
public:
    Patient(string,string,string,string);
    Patient();
    void print();
    
private:
    string _id;
    string _nom;
    string _cognom;
    string _estat;

};

#endif /* PATIENT_H */

