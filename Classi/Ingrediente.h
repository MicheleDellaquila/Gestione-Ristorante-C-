#include <stdio.h>
#include <iostream>  
#include <string>
#pragma once

using namespace std;

class Ingrediente{
	
	private: 
		string nome;
		float calorie;
		int dose;
		
	
    
    public: 
		Ingrediente(){
		}
		
	public:
		void setNome(string nome){
          this -> nome = nome;  
        }

        void setCalorie(float calorie){
          this -> calorie = calorie;  
    	}
    
        void setDose(int dose){
          this -> dose = dose;  
    	}  
    
		void toStringIngAmmini(){
	        cout << "Ingredienti:   " << nome << " Calorie " << calorie << " Dosi " << dose << endl;
		}
		
		void toStringCli(){
			cout << "Ingredienti:   " << nome << " Calorie " << calorie << endl;
		}
	
};

