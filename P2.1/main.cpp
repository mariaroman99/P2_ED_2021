/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: maria
 *
 * Created on 16 de marzo de 2021, 17:19
 */

#include <cstdlib>
#include "ArrayDeque.h"
#include <vector>
#include <cstdlib>
#include <iostream>
#include <stdexcept>



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
    
}
int main(int argc, char** argv) {
    vector<string> arr_options = {"Inserir element al davant de la cua", 
    "Inserir element al darrera de la cua","Treure element pel davant de la cua",
    "Treure element pel darrera de la cua", "Consultar el primer element", "Consultar el darrer element", 
    "Imprimir tot el contingut de l’ArrayDeque", "Sortir"};
    int mida;
    int element;
    cout<<"Hola, de quina mida vols la teva cua"<<endl;
    cin>>mida;
    ArrayDeque *cua = new ArrayDeque(mida);
    int option;
    do{
        option = opcio(arr_options);
        switch(option){
            case 1: cout<<"Escriu l'element que vols afegir (ha de ser un nombre enter) "<< endl;
                    cin>>element;
                    try{
                        cua->enququeFront(element);
                        cout<<"Element "<<element<<" agregat"<<endl;
                    }catch( const std::invalid_argument& e ) {
                                cout<<"EXCEPTION: L’estructura està plena"<<endl;
                                
                    }break;
            case 2: cout<<"Escriu l'element que vols afegir (ha de ser un nombre enter) "<< endl ;
                    cin>>element;
                    try{
                        cua->enququeFront(element);
                        cout<<"Element "<<element<<" agregat"<<endl;
                    }catch( const std::invalid_argument& e ) {
                                cout<<"EXCEPTION: L’estructura està plena"<<endl;
                                
                    }break;
            case 3: try{
                        cua->dequeueFront();
                        cout<<"Element "<<cua->getFront()<<" eliminat"<<endl;
                    }catch( const std::invalid_argument& e ) {
                                cout<<"EXCEPTION: L’estructura està buida"<<endl;
                                
                    }break;
            
            case 4: try{
                        cua->dequeueBack();
                        cout<<"Element "<<cua->getBack()<<" eliminat"<<endl;
                    }catch( const std::invalid_argument& e ) {
                                cout<<"EXCEPTION: L’estructura està buida"<<endl;
                                
                    }break;
            case 5: cout<<"El primer element és "<<cua->getFront()<<endl;break;
            case 6: cout<<"L'últim element és "<<cua->getBack()<<endl;break;
            case 7: cua->print();break;
            case 8: cout<<"Fins a la propera "<< endl ;break ;   
            
            }
        }while(option!=8);

    return 0;
}

