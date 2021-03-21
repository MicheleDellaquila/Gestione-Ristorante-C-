#include <string>


class Tavolo{
	
	public:
		string tipologia , descizioneTavolo;
		int numeroPosti, uuidTavolo;
		
		
	public:
		
	  void setUuidTavolo(int uuid){
	  	uuidTavolo = uuid;
	  }
	  
	  void setTipologia(string tipologia){
	  	this -> tipologia = tipologia;
	  }
	  
	  void setDescizioneTavolo(string descrizione){
	  	descizioneTavolo = descrizione;
	  }
	  
	  void setNumeroPosti(int numero){
	  	numeroPosti = numero;
	  }
	
	  void toStringTav(){
	  	cout << "Numero tavolo: " << uuidTavolo << endl;
	  	cout << tipologia << endl;
	  	cout << "";
	  }
	
};
