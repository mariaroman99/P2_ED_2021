/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: maria
 *
 * Created on 17 de marzo de 2021, 13:28
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include "DoubleNode.h"
#include "LinkedDeque.h"
#include "Patient.h"

using namespace std;

/*
 * 
 */

int opcio(vector<string> &arr_options){
    int option;
    cout<<"Hola, que vols fer?\n";
    for(int i=0;i<arr_options.size();i++){
            cout<<i+1<<"."<< arr_options[i]<<"\n";
        }
    cin>>option;
    if(option<arr_options.size()+1){
        return option;
    }else{
        cout<<"No existeix la opció introduida\n ";
    }
    
    return option;
    
}

int main(int argc, char** argv) {
    int entrada=1;
    int option;
    string fitxer;
    string id,nom,cognom,estat;
    vector<string> arr_options = {"Llegir un fitxer amb les entrades de pacients", "Imprimir la cua de pacients",
    "Eliminar el primer pacient de la cua","Eliminar el darrer pacient de la cua", 
    "Inserir n entrades de pacients des de teclat (0 per finalizar)","Consultar el primer pacient de la cua",
    "Consultar el darrer pacient de la cua","Sortir"};
    LinkedDeque* cua = new LinkedDeque();
    do{
        option = opcio(arr_options);
        switch(option){
            case 1:{ cout<<"Ruta del fitxer: "<<endl;
                    cin>>fitxer;
                    cout<<"Reading file "<<fitxer<<" ..."<<endl;
                    ifstream meu_fitxer(fitxer);
                    while(!meu_fitxer.eof()){
                        meu_fitxer>>id; meu_fitxer>>nom; meu_fitxer>>cognom; meu_fitxer>>estat;
                        Patient *p=new Patient(id,nom,cognom,estat);
                        if(estat=="OK"){
                            cua->enqueueBack(*p);
                        }if(estat=="NOT_OK"){
                            cua->enqueueFront(*p);
                        }
                        cout<<"El pacient ";
                        p->print();
                        cout<<" ha estat afegit"<<endl;
                    }meu_fitxer.close();
                    break;}
                    
            case 2: cua->print();
            case 3:cua->dequeueFront();
                   cout<<"El pacient ";
                   cua->getFront();
                   cout<<" ha estat eliminat"<<endl; break;
            
            case 4: cua->dequeueBack();
                   cout<<"El pacient ";
                   cua->getBack();
                   cout<<" ha estat eliminat"<<endl; break;
                    
            case 5: while(entrada!=0){
                        cout<<"Id del pacient: "<<endl;
                        cin>>id;
                        cout<<"Nom del pacient: "<<endl;
                        cin>>nom;
                        cout<<"Cognom del pacient: "<<endl;
                        cin>>cognom;
                        cout<<"Estat del pacient (OK/NOT_OK): "<<endl;
                        cin>>estat;
                        Patient *p = new Patient(id,nom,cognom,estat);
                        if(estat=="OK"){
                            cua->enqueueBack(*p);
                        }if(estat=="NOT_OK"){
                            cua->enqueueFront(*p);
                        }
                        cout<<"El pacient ";
                        p->print();
                        cout<<" ha estat afegit"<<endl;
                        cout<<"Per finalizar clicar 0. Sino clicar un altre nombre";
                        cin>>entrada;
                
                
                    }break;
            case 6: cout<<"El primer pacient és \n ";
                    cua->getFront();break;
            case 7: cout<<"L'últim pacient és \n";
                    cua->getBack(); break;
            
                    
        
        }
     }while(option!=8);
     cua->~LinkedDeque();
    return 0;
}

