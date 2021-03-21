#include <string>

class Cliente{
	
	public:
		string email , nome , cognome , citta , tipo;
		int numeroTelefonico;
		
	public:
		int puntiAccumulati = 0;
		
		
	public:
		void setEmail(string email){
			this -> email = email;
		}
		
		void setNome(string nome){
			this -> nome = nome;
		}
	
		void setCognome(string cognome){
			this -> cognome = cognome;
		}
		
		void setCitta(string citta){
			this -> citta = citta;
		}
		
		void setNumeroTel(int numero){
			numeroTelefonico = numero;
		}
		
		void setTipo(string tipo){
			this -> tipo = tipo;
		}
		
		void setPunti(int puntiAccumulati){
			this -> puntiAccumulati = puntiAccumulati;
		}
	
};
