#include <stdio.h>
#include <iostream>  
#include <string>
#include "Ricetta.h"
#pragma once

using namespace std;

class Piatto : public Ricetta {
	
    public:
      string nome, descrizionePiatto, tipo;
	 
	public:
		void setNome(string nome){
		  this -> nome = nome;
		}
		
		void setDescrizionePiatto(string descrizionePiatto){
		  this -> descrizionePiatto = descrizionePiatto;
		}
		
		void setTipo(string tipo){
		  this -> tipo 	= tipo;
		}
		
		void toStringPiatto(){
			
			cout << "Nome piatto " << nome << " Tipo di piatto " << tipo << "                 ";
		}
		
};

