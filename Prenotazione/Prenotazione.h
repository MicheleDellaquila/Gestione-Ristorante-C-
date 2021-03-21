#include <string>
#include <vector>
#include "../Classi/Ricetta.h"
#include "../Classi/Bevanda.h"

class Prenotazione{
	
	public:
		int ora, numTavolo , data ;
		string sceltaMenu;
		
	public:
		vector<Ricetta> lista__ricettePrenotata;
		vector<Bevanda> lista__BevandePrenotata;
		
	
	public:
		
		void setData(int data){
			this -> data = data;
		}
	
		void setOra(int ora){
			this -> ora = ora;
		}
		
		void setNumTavolo(int numTavolo){
			this -> numTavolo = numTavolo;
		}
		
		void setSceltaMenu(string  sceltaMenu ){
		    this -> sceltaMenu = sceltaMenu;
		}

		void toStringPrenotazione(){
			cout << "" << endl;
			cout << "Ora " << ora << " Tavolo " << numTavolo << " Data: " << data << " Menu: " << sceltaMenu;
		    cout << "" << endl;
		}
		
		void toStringPrenotazioneRicetta(){
			cout << "" << endl;
			cout << "Ora " << ora << " Tavolo " << numTavolo << " Data: " << data;
		}
};
