#include <string>
#pragma once

class Bevanda{
	
	public:
		int prezzo, volume;
		string nome;
		
		
	public:
		
		void setNome(string nome){
			this -> nome = nome;
		}
		
		void setPrezzo(int prezzo){
			this -> prezzo = prezzo;
		}
		
		void setVolume(int volume){
			this -> volume = volume;
		}
		
		void toStringBevanda(){
			cout << "" << endl;
			cout << "Nome " << nome << "              " << " Prezzo " << prezzo << endl;
		}
};
