#include <stdio.h>
#include <iostream>  
#include <string>
#include "Ricetta.h"
#include <vector>

using namespace std;

class Cuoco{
    
    // attributi
    private: string uuid, nome , cognome , dataNascita , abitazione , email;
    public:
    	Ricetta lista_ricette[10]; 
     

        
    // Constructor
    public:    
        Cuoco(){

        }
        
      
    // set and get
    public:
    	void setCodiceCuoco(string nome){
          this -> nome = nome;  
        }

        void setNome(string nome){
          this -> nome = nome;  
        }

        void setCognome(string cognome){
          this -> cognome = cognome;  
    	}
    
        void setDataNascita(string data){
          dataNascita = data;  
    	}  
    
        void setAbitazione(string abitazione){
          this -> abitazione = abitazione;  
    	} 

        void setEmail(string email){
          this -> email = email;  
    	} 
    	
    	void toStringCuoco(){
    		cout << "Codice " << uuid << " Nome " << nome << " Cognome " << cognome << " Data nascita" << dataNascita  << " Abitazione " << abitazione << " Email " << email;
		}
};
