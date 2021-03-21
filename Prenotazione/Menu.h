#include <string>
#include <vector>
#include "../Classi/Ricetta.h"
#include "../Classi/Bevanda.h"

class Menu{
	
	public:
		string nomeMenu;
		
	public:
		vector<Ricetta> menu_ricette;
		vector<Bevanda> lista__bevande;
		
	public:
		void setNomeMenu(string menu){
			nomeMenu = menu;
		}
		
		void toStringMenu(){
			
			cout << "Nome del menu " << nomeMenu << endl;
		}
};
