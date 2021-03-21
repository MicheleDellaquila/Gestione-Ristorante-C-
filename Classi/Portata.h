#include <stdio.h>
#include <iostream>  
#include <string>
#include <vector>
#include "Piatto.h"

using namespace std;

class Portata : public Piatto {
	
    private:
      string nomePortata, DescrizionePortata;
      
 
	public:
		void setNomePortata(string nomePortata){
		  this -> nomePortata = nomePortata;
		}
		
		void setDescrizionePortata(string DescrizionePortata){
		  this -> DescrizionePortata = DescrizionePortata;
		}
		
	    void toStringPortata(){
	    	cout << "" << endl;
	    	cout << "----------------------------------------------- " << endl ;
	    	cout  << " Nome Portata " << nomePortata << " Descrizione Portata " << DescrizionePortata << endl;
	    	cout << "" << endl;
	    		
		}
};

