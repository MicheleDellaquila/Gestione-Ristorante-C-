#include <stdio.h>
#include <iostream>  
#include <string>
#include <vector>
#include "./Ingrediente.h"
#pragma once

using namespace std;

class Ricetta{
    
    // attributi
    public: 
        int preparazione, numPers , valutazione;
        string descrizione , nomeRicetta, nomeChef;
        float prezzo;
    
    public:
    	vector<Ingrediente> lista_ingredienti;
        
    // Constructor
    public:    
        Ricetta(){
		}
     
    
    // set and get
    public:
    	void setNomeRicetta(string nomeRicetta){
          this -> nomeRicetta = nomeRicetta;  
        }
        
        
        void setPreparazione(int preparazione){
          this -> preparazione = preparazione;  
        }
        
        void setNumPers(int numPers){
          this -> numPers = numPers;  
    	}
    
        void setDescrizione(string descrizione){
          this -> descrizione = descrizione;  
       }
       
       void setValutazione(int valutazione){
          this -> valutazione = valutazione;  
       }
       
       void setChef(string chef){
          nomeChef = chef;  
       }
       
       void setPrezzo(float prezzo){
          this -> prezzo = prezzo;  
       }
       
		
		void toStringCliente(){
			
			cout << " " << endl;
			cout << "Nome della ricetta " << nomeRicetta  << "                 " << " Valutazione: " << valutazione << "        ";
			cout << " Prezzo: " << prezzo << endl;

		}
		
		void toStringPiatto(){
			
			cout << "           " << " Valutazione: " << valutazione << "        ";
			cout << " Prezzo: " << prezzo << endl;

		}
    
};

