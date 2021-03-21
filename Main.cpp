#include <stdio.h>
#include <iostream>  
#include <string>
#include <cstdlib> 
#include <ctime> 
#include <vector>

// Class
#include "Classi/Cuoco.h"
#include "Classi/Ingrediente.h"
#include "Classi/Piatto.h"
#include "Classi/Portata.h"
#include "Prenotazione/Tavolo.h"
#include "Prenotazione/Prenotazione.h"
#include "Prenotazione/Cliente.h"
#include "Prenotazione/Menu.h"
#include "Classi/Bevanda.h"


using namespace std;

int main(){
	
	// bool
	bool check = false;
	bool checkMenu = false;
	
	// scelta
	int scelta, sceltaAmministratore , sceltaCliente, sceltaPreno;
	
    // contatori
 	int numeroCuochi , numRicette , numeroIngredienti , numeroTavoli , numeroPrenotazione , numeroMenu;
	
	// var cuoco 
 	string uuidCuoco , nome, cognome , dataNascita , abitazione , email;
 	
 	// var ricette
 	string nomeRicetta, descrizione;
 	int preparazione , numPers  , valutazione;
 	float prezzo;
 	
 	// var ingredienti;
	string Nome;
	float calorie;
	int dose;
	
 	// var piatto
 	string  nomePiatto , tipo , DescrizionePiatto;
 	
 	// var portata
 	string nomePortata, DescrizionePortata;
 	
 	// var tavolo
 	string  tipologia , descizioneTavolo;
 	int numeroPosti, uuidTavolo;
 	
 	// var prenotazione
 	int Ora , numTavolo, data , sceltaRicetta , sceltaBevanda;
 	string sceltaMenuPreno;
 	
 	// var cliente
 	string Email , nomeCli, CognomeCli , citta , piano;
 	int Numerotel;
 	
 	// var menu
 	string NomeMenu;
 	
 	// var bevande
 	string nomeBevanda;
 	int numBevande, prezzoBevanda , volume;
 	
 	
 	// list object
 	vector<Ricetta> ricette;
 	vector<Cuoco> lista_cuochi;
 	vector<Piatto> lista_piatti;
 	Portata lista_portata[10];
 	vector<Tavolo> lista_tavoli;
 	Prenotazione lista_prenotazione[10];
 	
 	// menu list
 	vector<Menu> lista__menu;
 	vector<Bevanda> lista__bevanda;
 	
 	
 	//) 2 ) controllare scelta menu
 	
    // do while 
	do{
		
		cout << " " << endl;                                                
	    cout << "Inserire scelta: \n 1) Amministrazione  \n 2) Prenotazione" << endl;
	    cout << "" << endl;
	    cout << "scelta: ";
		cin >> scelta;
		cout << "" << endl;	
		
		switch(scelta){
		  	
		  	case 1:
		  			{
					  
		  			
			  			cout << "Inserire scelta: \n 1) Inserire menu' \n 2) Inserire ricette singole" << endl;
			  			cout << "" << endl;
					    cout << "scelta: ";
			  			cin >> sceltaAmministratore;
			  		
			  			switch(sceltaAmministratore){
			  				
			  				case 1:	
			  					
			  					{
			  							
			  							cout << "Inserire cuochi presenti nel ristorante ";
		  								cin >> numeroCuochi;
		  								
		  								
		  								// list cuochi
					  					for( int i = 0 ; i < numeroCuochi ; i++ ){

			  								// object cuoco
						  					Cuoco coc;
						  					
						  					cout << "" << endl;
						  					
						  					// codice 
						  					cout << "Inserire codice cuoco ";
						  					cin >> uuidCuoco;
						  					coc.setCodiceCuoco(uuidCuoco);
						  					
						  					cout << "" << endl;
						  					
						  					// nome
						  					cout << "Inserire nome cuoco ";
						  					cin >> nome;
						  					coc.setNome(nome);
						  					
						  					cout << "" << endl;
						  					
						  					// cognome
						  					cout << "Inserire cognome cuoco ";
						  					cin >> cognome;
						  					coc.setCognome(cognome);
						  					
						  					cout << "" << endl;
						  					
						  					// Data nascita
						  					cout << "Inserire data di nascita ";
						  					cin >> dataNascita;
						  					coc.setDataNascita(dataNascita);
						  					
						  					cout << "" << endl;
						  					
						  					// Abitazione
						  					cout << "Inserire Abitazione ";
						  					cin >> abitazione;
						  					coc.setAbitazione(abitazione);
						  					
						  					cout << "" << endl;
											  
											// email control format
											do{
												
											   cout << "Inserire email con un formato valido ";
											   cin >> email;
											   coc.setEmail(email);
												
											}while( email.find("@") == std::string::npos );	  
											cout << "Registrazione avvenuta con successo" << endl;
											
											cout << "" << endl;
											
											// save cuoco in a list
											lista_cuochi.push_back(coc); 
			  							
			  							}

										cout << "---------------------------------------------------" << endl;
										// insert number menu
			  							cout << "Inserire menu presenti nel ristorante " << endl;
			  							cin >> numeroMenu;
			  						
										for(int conta = 0 ; conta < numeroMenu; conta++){
											
											// call Menu
											Menu menu;
											
											cout << "" << endl;
											
											// nome Menu
											cout << "Inserire nome menu' " << endl;
											cin >> NomeMenu;
											menu.setNomeMenu(NomeMenu);
											
											// list ricette
											cout << "" << endl;
											cout << "Inserire numero ricette menu: ";
											cin >> numRicette;
										
											
											for( int j = 0 ; j < numRicette ; j++  ){
											
												// call object
												Ricetta ric;
												
												cout << "" << endl;
												
												// codice 
												cout << "Inserire nome ricetta " << endl;
												cin >> nomeRicetta;
												ric.setNomeRicetta(nomeRicetta);
												
												cout << "" << endl;
												
												// preparazione 
												cout << "Inserire tempo di preparazione " << endl;
												cin >> preparazione;
												ric.setPreparazione(preparazione);
												
												cout << "" << endl;
												
												// numero di persone 
												cout << "Inserire numero di persone " << endl;
												cin >> numPers;
												ric.setNumPers(numPers);
												
												cout << "" << endl;
												
												// description
												cout << "Inserire descrizione " << endl;
												cin >> descrizione;
												ric.setDescrizione(descrizione);
												
												cout << "" << endl;
												
												// prezzo
												cout << "Inserire prezzo " << endl;
												cin >> prezzo;
												ric.setPrezzo(prezzo);
												
												cout << "" << endl;
												
												// valutazione
												cout << "Inserire valutazione " << endl;
												cin >> valutazione;
												ric.setValutazione(valutazione);
												
												cout << "" << endl;
												cout << "---------------------------------------------------------------" << endl;
												cout << "Ingredienti ricetta: ";
												cin >> numeroIngredienti;
								
												// list ingredienti
												for( int y = 0 ; y < numeroIngredienti ; y++ ){
													
													// call object
													Ingrediente ing;
													
													cout << "" << endl;
													
													// name ingrediente
													cout << "Inserire nome ingrediente " << endl;
													cin >> Nome;
													ing.setNome(Nome);
													
													cout << "" << endl;
													
													// calorie ingrediente
													cout << "Inserire calorie ingrediente " << endl;
													cin >> calorie;
													ing.setCalorie(calorie);
													
													cout << "" << endl;
													
													// dose ingrediente
													cout << "Inserire dose ingrediente " << endl;
													cin >> dose;
													ing.setDose(dose);	
													
													// save ingrediente in a list
													ric.lista_ingredienti.push_back(ing);
							
												}
												// save ricetta in a list 
												menu.menu_ricette.push_back(ric);
												
												
												// list ricette
												cout << "" << endl;
												cout << "Inserire numero bevande menu: ";
												cin >> numBevande;
												
												
												for( int bev = 0 ; bev < numBevande ; bev++ ){
												
													cout << "" << endl;
												
													// call object
													Bevanda be;
													
													cout << "" << endl;
													
													// Inserire nome
													cout << "Inserire nome bevanda " << endl;
													cin >> nomeBevanda;
													be.setNome(nomeBevanda);
													
													
													cout << "" << endl;
													
													// Inserire prezzo
													cout << "Inserire prezzo bevanda " << endl;
													cin >> prezzoBevanda;
													be.setPrezzo(prezzoBevanda);
													
													cout << "" << endl;
													
													// inserire  volume
													cout << "Inserire volume bevanda "<< endl;
													cin >> volume;
													be.setVolume(volume);
													
													menu.lista__bevande.push_back(be);
															
												}	
											}	
											lista__menu.push_back(menu);
										}	
										
										
										cout << "" << endl;
										cout << "-------------------------------------------------" << endl;
										cout << "Inserire numero tavoli presenti nel ristorante" << endl;
										cin >> numeroTavoli;
										
										// list tavoli
										for( int y = 0 ; y < numeroTavoli ; y++ ){
											
											// Call object
											Tavolo tavo;
											
											cout << "" << endl;
											
											// insert codice tavolo
											cout << "Inserire numero tavolo " << endl;
											cin >> uuidTavolo;
											tavo.setUuidTavolo(uuidTavolo);
											
											cout << "" << endl;
											
											// insert tipologia tavolo
											cout << "Inserire tipologia tavolo " << endl;
											cin >> tipologia;
											tavo.setTipologia(tipologia);
											
											cout << "" << endl;
											
											// insert descrizione tavolo
											cout << "Inserire numero posti tavolo " << endl;
											cin >> numeroPosti;
											tavo.setNumeroPosti(numeroPosti);
											
											// insert tavolo in a list
											lista_tavoli.push_back(tavo);
										}	
										break;		
									};
									
								case 2: 
										{
											
				  							cout << "Inserire cuochi presenti nel ristorante ";
			  								cin >> numeroCuochi;	
											
											// list cuochi
						  					for( int i = 0 ; i < numeroCuochi ; i++ ){
	
				  								// object cuoco
							  					Cuoco coc;
							  					
							  					cout << "" << endl;
							  					
							  					// codice 
							  					cout << "Inserire codice cuoco ";
							  					cin >> uuidCuoco;
							  					coc.setCodiceCuoco(uuidCuoco);
							  					
							  					cout << "" << endl;
							  					
							  					// nome
							  					cout << "Inserire nome cuoco ";
							  					cin >> nome;
							  					coc.setNome(nome);
							  					
							  					cout << "" << endl;
							  					
							  					// cognome
							  					cout << "Inserire cognome cuoco ";
							  					cin >> cognome;
							  					coc.setCognome(cognome);
							  					
							  					cout << "" << endl;
							  					
							  					// Data nascita
							  					cout << "Inserire data di nascita ";
							  					cin >> dataNascita;
							  					coc.setDataNascita(dataNascita);
							  					
							  					cout << "" << endl;
							  					
							  					// Abitazione
							  					cout << "Inserire Abitazione ";
							  					cin >> abitazione;
							  					coc.setAbitazione(abitazione);
							  					
							  					cout << "" << endl;
												  
												// email control format
												do{
													
												   cout << "Inserire email con un formato valido ";
												   cin >> email;
												   coc.setEmail(email);
													
												}while( email.find("@") == std::string::npos );	  
												cout << "Registrazione avvenuta con successo" << endl;
												
												cout << "" << endl;
												
												// save cuoco in a list
												lista_cuochi.push_back(coc); 
												
												// list ricette
												cout << "" << endl;
												cout << "----------------------------------------------------" << endl;
												cout << "Inserire numero ricette chef: ";
												cin >> numRicette;	
										

												for( int ricet = 0 ; ricet < numRicette; ricet++ ){
													
													// call object
													Ricetta ric;
												
													cout << "" << endl;
												
													// codice 
													cout << "Inserire nome ricetta " << endl;
													cin >> nomeRicetta;
													ric.setNomeRicetta(nomeRicetta);
													
													cout << "" << endl;
													
													// preparazione 
													cout << "Inserire tempo di preparazione " << endl;
													cin >> preparazione;
													ric.setPreparazione(preparazione);
													
													cout << "" << endl;
													
													// numero di persone 
													cout << "Inserire numero di persone " << endl;
													cin >> numPers;
													ric.setNumPers(numPers);
												
													cout << "" << endl;
													
													// description
													cout << "Inserire descrizione " << endl;
													cin >> descrizione;
													ric.setDescrizione(descrizione);
													
													cout << "" << endl;
													
													// prezzo
													cout << "Inserire prezzo " << endl;
													cin >> prezzo;
													ric.setPrezzo(prezzo);
													
													cout << "" << endl;
													
													// valutazione
													cout << "Inserire valutazione " << endl;
													cin >> valutazione;
													ric.setValutazione(valutazione);
													
													cout << "" << endl;
													cout << "---------------------------------------------------------------" << endl;
													cout << "Ingredienti ricetta: ";
													cin >> numeroIngredienti;
								
													// list ingredienti
													for( int ingre = 0 ; ingre < numeroIngredienti ; ingre++ ){
														
														// call object
														Ingrediente ing;
														
														cout << "" << endl;
														
														// name ingrediente
														cout << "Inserire nome ingrediente " << endl;
														cin >> Nome;
														ing.setNome(Nome);
														
														cout << "" << endl;
														
														// calorie ingrediente
														cout << "Inserire calorie ingrediente " << endl;
														cin >> calorie;
														ing.setCalorie(calorie);
														
														cout << "" << endl;
														
														// dose ingrediente
														cout << "Inserire dose ingrediente " << endl;
														cin >> dose;
														ing.setDose(dose);	
														
														// save ingrediente in a list
														ric.lista_ingredienti.push_back(ing);
													}
													
													cout << "" << endl;
													cout << "---------------------------------------------" << endl;
					                  				cout << "Piatto";
					                  				cout << "" << endl;
				                  		
													// lis piatto
													for( int k = 0 ; k < 1 ; k++ ){
													
														// Call object
														Piatto pia;
														
														cout << " " << endl;
														
													    // insert codice piatto 
														cout << "Inserire nome piatto" << endl;
					                					cin >> nomePiatto;	
					                					pia.setNome(nomePiatto);
					                					
					                					cout << " " << endl;
					                					
					                					// name piatto & description
					                					cout << "Inserire tipo del piatto" << endl;
										                cin >> tipo;
										                pia.setTipo(tipo);
										                
										                cout << " " << endl;
										                
										                cout << "Inserire descrizione piatto: " << endl;
										                cin >> DescrizionePiatto;
										                pia.setDescrizionePiatto(DescrizionePiatto); 
										                
										                
										                // save piatto in a list
										                lista_piatti.push_back(pia);	 
													}
													// fine for piatto
													ricette.push_back(ric);
													coc.lista_ricette[ricet] = ric;
												}
				  							}
				  							
				  							
				  							// lista portate
						  					for( int r = 0 ; r < numRicette ; r++ ) {
						  					
							  					// call object 
							  					Portata por;
							  					
							  					cout << " " << endl;
							  					
							  					// set name portata
							  					cout << "Inserire nome portata" << endl;
										        cin >> nomePortata;
										        por.setNomePortata(nomePortata);
										        
										        cout << " " << endl;
										        
										        // set descriptio
										        cout << "Inserire descrizione portata" << endl;
										        cin >> DescrizionePortata;
										        por.setDescrizionePortata(DescrizionePortata);
										        
										        lista_portata[r] = por;
						  					
											}
											
											// list ricette
											cout << "" << endl;
											cout << "Inserire numero bevande: ";
											cin >> numBevande;
													
											for( int bev = 0 ; bev < numBevande ; bev++ ){
												
												cout << "" << endl;
												
												// call object
												Bevanda be;
													
												// Inserire nome
											    cout << "Inserire nome bevanda " << endl;
												cin >> nomeBevanda;
												be.setNome(nomeBevanda);
												
												cout << "" << endl;
													
												// Inserire prezzo
												cout << "Inserire prezzo bevanda " << endl;
												cin >> prezzoBevanda;
												be.setPrezzo(prezzoBevanda);
													
												cout << "" << endl;
													
												// inserire  volume
												cout << "Inserire volume bevanda "<< endl;
												cin >> volume;
												be.setVolume(volume);
												
												lista__bevanda.push_back(be);			
											}
											
											cout << "" << endl;
											cout << "-------------------------------------------------" << endl;
											cout << "Inserire numero tavoli presenti nel ristorante" << endl;
											cin >> numeroTavoli;
											
											// list tavoli
											for( int y = 0 ; y < numeroTavoli ; y++ ){
												
												// Call object
												Tavolo tavo;
												
												cout << "" << endl;
												
												// insert codice tavolo
												cout << "Inserire numero tavolo " << endl;
												cin >> uuidTavolo;
												tavo.setUuidTavolo(uuidTavolo);
												
												cout << "" << endl;
												
												// insert tipologia tavolo
												cout << "Inserire tipologia tavolo " << endl;
												cin >> tipologia;
												tavo.setTipologia(tipologia);
												
												cout << "" << endl;
												
												// insert descrizione tavolo
												cout << "Inserire numero posti tavolo " << endl;
												cin >> numeroPosti;
												tavo.setNumeroPosti(numeroPosti);
												
												// insert tavolo in a list
												lista_tavoli.push_back(tavo);
											}	
										}
								}

								

				case 2:
						{
							cout << "";
							cout << "-----------------------------------------" << endl;
							cout << "" << endl;
							cout << "Benvunuto/a " << endl;
							cout << "" << endl; 
							cout << "Inserire scelta: \n 1) Scelta menu'  \n 2) Scelta ricette" << endl;
	    					cout << "" << endl;
					    	cout << "scelta: ";
	    					cin >> sceltaCliente;
							
							switch(sceltaCliente){
								
								case 1: 
								
									{
										if( lista__menu.size() == 0 ){
											cout << "Nessun menu' presente " << endl;
											cout << "" << endl;
										} else {
											
											cout << "" << endl;
											
									  		cout << "Creazione Account" << endl;

											// insert dati clienti
											Cliente cli;
									
											cout << "" << endl;
			
											// nome
						  					cout << "Inserire nome:  ";
						  					cin >> nomeCli;
						  					cli.setNome(nome);
						  					
						  					cout << "" << endl;
						  					
						  					// cognome
						  					cout << "Inserire cognome: ";
						  					cin >> CognomeCli;
						  					cli.setCognome(cognome);
						  					
						  					cout << "" << endl;
						  					
						  					// email control format
											do{
												
											   cout << "Inserire email con un formato valido ";
											   cin >> Email;
											   cli.setEmail(email);
												
											}while( Email.find("@") == std::string::npos );	
											
											cout << "" << endl;
						  					
						  					// città
						  				    cout << "Inserire citta' ";
						  					cin >> citta;
						  					cli.setCitta(citta);
						  					
						  					cout << "" << endl;
						  					
						  					// numero tel
						  					cout << "Inserire numero telefonico ";
						  					cin >> Numerotel;
						  					cli.setNumeroTel(Numerotel);
						  					
						  					
						  					cout << "" << endl;
						  					
						  					cout << "Scelta piano: \n Standard \n Vip " << endl;
						  					cout << "" << endl;
						  					cout << "scelta:  ";
	    									cin >> piano;
	    									cli.setTipo(piano);
	    									
	    									if(cli.tipo == "Vip"){
	    										cout << "" << endl;
	    										cout << "Punti accumulati  ";
	    										cout << cli.puntiAccumulati << endl;
	    										cout << "" << endl;
											}
						  					
						  					cout << "Registrazione avvenuta con successo" << endl;
										

											cout << "" << endl;
											cout << "---------------------------------------------------" << endl;
								
											cout << "Inserire numero di prenotazione " << endl;
											cin >> numeroPrenotazione;
											
											for( int p = 0 ; p < numeroPrenotazione ; p++ ){
												
												// call object
												Prenotazione pre;
												
												cout << "" << endl; 
														
												// insert data
												cout << "Inserire data " << endl;
												cin >> data;
												pre.setData(data);
												
												cout << "" << endl; 	
														
												if( p == 0 ){
																
													// insert ora
													cout << "Inserire ora ";
													cin >> Ora;
													pre.setOra(Ora);
													
													cout << "" << endl;
													

													if( lista_tavoli.size() > 0 ) {
														
														// call object
														Tavolo tav;
													
													    cout << "Tavoli disponibili" << endl;
														// for tavoli
														for( int tavo = 0 ; tavo < lista_tavoli.size() ; tavo++ ){
																tav = lista_tavoli.at(tavo);
																tav.toStringTav();
														}	
														cout << "" << endl;	
														
														Tavolo t;
														do{															
															cout << "" << endl;
															// insert numTavolo
															cout << "Inserire numero tavolo " << endl;
															cin >> numTavolo;			
															for(int tavol = 0; tavol < lista_tavoli.size() ; tavol++  ){
																t = lista_tavoli.at(tavol);
																			
																if( t.uuidTavolo == numTavolo ){
																			
																	pre.setNumTavolo(numTavolo);
																	check = true;
																	break;
																			
																}
															}	
														}while(check != true);
													
														
													} else {
														cout << "Nessun tavolo prenotabile" << endl;
														break;
													}
														
													// call object
													Menu m;
													Ricetta r;
													Ingrediente ing;
													Bevanda be;
													for( int l = 0 ; l < numeroMenu ; l++ ){
														cout << " " << endl;
														cout << l + 1 << ") ";
														lista__menu[l].toStringMenu();
												
														for( int rice = 0 ; rice < lista__menu[l].menu_ricette.size() ; rice++){
															r = lista__menu[l].menu_ricette.at(rice);
															r.toStringCliente();
															
															
															for( int ingr = 0 ; ingr < lista__menu[l].menu_ricette[rice].lista_ingredienti.size() ; ingr++ ){
																ing = lista__menu[l].menu_ricette[rice].lista_ingredienti.at(ingr);
																ing.toStringCli();
														    }
														}
														
														for( int v = 0 ; v < lista__menu[l].lista__bevande.size(); v++ ){
															
															be = lista__menu[v].lista__bevande.at(v);
															be.toStringBevanda();
															
														}
													}
													
													
													cout << "------------------------------------------" << endl;
													do{					
																							
														cout << "" << endl;
														cout << "Scelta menu da prenotare " << endl;
														cin >> sceltaMenuPreno;			
														for(int ricetta = 0; ricetta < lista__menu.size() ; ricetta++  ){
															m = lista__menu.at(ricetta);
																				
															if( m.nomeMenu == sceltaMenuPreno ){
																				
																pre.setSceltaMenu(sceltaMenuPreno);
																checkMenu = true;
																break;
																				
															}
														}	
														
												}while(checkMenu != true);

												// prenotazione in a list
												lista_prenotazione[p] = pre;
												pre.toStringPrenotazione();	
												cli.puntiAccumulati =  cli.puntiAccumulati + 10;	
																							
												} else {
					
													int Data = lista_prenotazione[p].data;	
													if(lista_prenotazione[p].data == Data){
															
														cout << "Data gia' prenotato" << "  ";
														cout << "Inserire una data differente" << endl;
														
														cout << "" << endl;
																
														// insert data
														cout << "Inserire data " << endl;
														cin >> data;
														pre.setData(data);
														
														cout << " " << endl;
														
														// insert ora
														cout << "Inserire ora " << endl;
														cin >> Ora;
														pre.setOra(Ora);
														
														cout << " " << endl;
																	
														if( lista_tavoli.size() > 0 ) {
															
															// call object
															Tavolo tav;
															
														    cout << "Tavoli disponibili" << endl;
															// for tavoli
															for( int tavo = 0 ; tavo < lista_tavoli.size() ; tavo++ ){
																	tav = lista_tavoli.at(tavo);
																	tav.toStringTav();
															}	
															cout << "" << endl;	
														
															Tavolo t;
															do{															
																cout << "" << endl;
																// insert numTavolo
																cout << "Inserire numero tavolo " << endl;
																cin >> numTavolo;			
																for(int tavol = 0; tavol < lista_tavoli.size() ; tavol++  ){
																	t = lista_tavoli.at(tavol);
																			
																	if( t.uuidTavolo == numTavolo ){
																			
																		pre.setNumTavolo(numTavolo);
																		check = true;
																		break;
																			
																	}
																}	
															}while(check != true);
														} else {
															cout << "Nessun tavolo prenotabile" << endl;
															break;
														}
														
														
														// call object
														Menu m;
														Ricetta r;
														Ingrediente ing;
														Bevanda be;
														for( int l = 0 ; l < numeroMenu ; l++ ){
															cout << " " << endl;
															cout << l + 1 << ") ";
															lista__menu[l].toStringMenu();
													
															for( int rice = 0 ; rice < lista__menu[l].menu_ricette.size() ; rice++){
																r = lista__menu[l].menu_ricette.at(rice);
																r.toStringCliente();
																
																
																for( int ingr = 0 ; ingr < lista__menu[l].menu_ricette[rice].lista_ingredienti.size() ; ingr++ ){
																	ing = lista__menu[l].menu_ricette[rice].lista_ingredienti.at(ingr);
																	ing.toStringCli();
															    }
															}
															
															for( int v = 0 ; v < lista__menu[l].lista__bevande.size(); v++ ){
																cout << v + 1 << ") ";
																be = lista__menu[v].lista__bevande.at(v);
																be.toStringBevanda();
																
															}
														}	
														
														cout << "------------------------------------------" << endl;
														do{					
																								
															cout << "" << endl;
															cout << "Scelta menu da prenotare " << endl;
															cin >> sceltaMenuPreno;			
															for(int ricetta = 0; ricetta < lista__menu.size() ; ricetta++  ){
																m = lista__menu.at(ricetta);
																
																
																if( m.nomeMenu == sceltaMenuPreno ){				
																	pre.setSceltaMenu(sceltaMenuPreno);
																	checkMenu = true;
																	break;
																					
																}
															}	
															
														}while(checkMenu != true);
															
														// prenotazione in a list
														lista_prenotazione[p] = pre;
														pre.toStringPrenotazione();	
														cout << "---------------------------------------------------" << endl;
														cout << "" << endl;	
															
												} else {
													
													cout << "" << endl;	
															
													// insert ora
													cout << "Inserire ora " << endl;
													cin >> Ora;
													pre.setOra(Ora);
													
													cout << "" << endl;	
																	
													if( lista_tavoli.size() > 0 ) {
														
														// call object
														Tavolo tav;
														
													    cout << "Tavoli disponibili" << endl;
														// for tavoli
														for( int tavo = 0 ; tavo < lista_tavoli.size() ; tavo++ ){
																tav = lista_tavoli.at(tavo);
																tav.toStringTav();
														}	
														cout << "" << endl;	
														

														// insert numTavolo
														cout << "Inserire numero tavolo " << endl;
														cin >> numTavolo;
														cout << "" << endl;	
														
														Tavolo t;
														do{															
															cout << "" << endl;
															// insert numTavolo
															cout << "Inserire numero tavolo " << endl;
															cin >> numTavolo;			
															for(int tavol = 0; tavol < lista_tavoli.size() ; tavol++  ){
																t = lista_tavoli.at(tavol);
																			
																if( t.uuidTavolo == numTavolo ){
																			
																	pre.setNumTavolo(numTavolo);
																	check = true;
																	break;
																			
																}
															}	
														}while(check != true);
													} else {
														cout << "Nessun tavolo prenotabile" << endl;
														break;
													}
													
													
													// call object
													Menu m;
													Ricetta r;
													Ingrediente ing;
													Bevanda be;
													for( int l = 0 ; l < numeroMenu ; l++ ){
														cout << " " << endl;
														cout << l + 1 << ") ";
														lista__menu[l].toStringMenu();
												
														for( int rice = 0 ; rice < lista__menu[l].menu_ricette.size() ; rice++){
															r = lista__menu[l].menu_ricette.at(rice);
															r.toStringCliente();
															
															
															for( int ingr = 0 ; ingr < lista__menu[l].menu_ricette[rice].lista_ingredienti.size() ; ingr++ ){
																ing = lista__menu[l].menu_ricette[rice].lista_ingredienti.at(ingr);
																ing.toStringCli();
														    }
														}
														
														for( int v = 0 ; v < lista__menu[l].lista__bevande.size(); v++ ){
															cout << v + 1 << ") ";
															be = lista__menu[v].lista__bevande.at(v);
															be.toStringBevanda();
															
														}
													}	
													
													
													cout << "------------------------------------------" << endl;
													do{					
																								
														cout << "" << endl;
														cout << "Scelta menu da prenotare " << endl;
														cin >> sceltaMenuPreno;			
														for(int ricetta = 0; ricetta < lista__menu.size() ; ricetta++  ){
															m = lista__menu.at(ricetta);
																						
															if( m.nomeMenu == sceltaMenuPreno ){				
																pre.setSceltaMenu(sceltaMenuPreno);
																checkMenu = true;
																break;
																					
															}
														}	
															
													}while(checkMenu != true);

													// prenotazione in a list
													lista_prenotazione[p] = pre;
													pre.toStringPrenotazione();	
													cout << "---------------------------------------------------" << endl;
													cout << "" << endl;	
												}
											}	
										}		
									}
								}
								break;
								
								case 2:
								  	
									  {
									  	
									  	if( ricette.size() == 0 ){
									  	  cout << "Nessuna ricetta presente " << endl;	
									  	} else {
									  		
									  		
									  		cout << "" << endl;
									  		cout << "Creazione Account" << endl;
									  		
									  	    // insert dati clienti
											Cliente cli;
									
											cout << "" << endl;
									
											// nome
						  					cout << "Inserire nome:  ";
						  					cin >> nomeCli;
						  					cli.setNome(nome);
						  					
						  					cout << "" << endl;
						  					
						  					// cognome
						  					cout << "Inserire cognome: ";
						  					cin >> CognomeCli;
						  					cli.setCognome(cognome);
						  					
						  					cout << "" << endl;
						  					
						  					// email control format
											do{
												
											   cout << "Inserire email con un formato valido ";
											   cin >> Email;
											   cli.setEmail(email);
												
											}while( Email.find("@") == std::string::npos );	
											
											cout << "" << endl;
						  					
						  					// città
						  				    cout << "Inserire citta' ";
						  					cin >> citta;
						  					cli.setCitta(citta);
						  					
						  					cout << "" << endl;
						  					
						  					// numero tel
						  					cout << "Inserire numero telefonico ";
						  					cin >> Numerotel;
						  					cli.setNumeroTel(Numerotel);
						  					
						  					cout << "" << endl;

						  					cout << "" << endl;
						  					
						  					cout << "Scelta piano: \n Standard \n Vip " << endl;
						  					cout << "" << endl;
						  					cout << "scelta:  ";
	    									cin >> piano;
	    									cli.setTipo(piano);
	    									
	    									if(cli.tipo == "Vip"){
	    										cout << "" << endl;
	    										cout << "Punti accumulati  ";
	    										cout << cli.puntiAccumulati << endl;
	    										cout << "" << endl;
											}
						  					
						  					cout << "Registrazione avvenuta con successo" << endl;
										

											cout << "" << endl;
											cout << "---------------------------------------------------" << endl;
								
											cout << "Inserire numero di prenotazione " << endl;
											cin >> numeroPrenotazione;
									  		
									  		for( int p = 0 ; p < numeroPrenotazione ; p++ ){
												
												// call object
												Prenotazione pre;
												
												cout << "" << endl; 
														
												// insert data
												cout << "Inserire data " << endl;
												cin >> data;
												pre.setData(data);
												
												cout << "" << endl; 	
														
												if( p == 0 ){
																
													// insert ora
													cout << "Inserire ora ";
													cin >> Ora;
													pre.setOra(Ora);
													
													cout << "" << endl;
													

													if( lista_tavoli.size() > 0 ) {
														
														// call object
														Tavolo tav;
													
													    cout << "Tavoli disponibili" << endl;
														// for tavoli
														for( int tavo = 0 ; tavo < lista_tavoli.size() ; tavo++ ){
																tav = lista_tavoli.at(tavo);
																tav.toStringTav();
														}	
														cout << "" << endl;	
														
														Tavolo t;
														do{															
															cout << "" << endl;
															// insert numTavolo
															cout << "Inserire numero tavolo " << endl;
															cin >> numTavolo;
																		
															for(int tavol = 0; tavol < lista_tavoli.size() ; tavol++  ){
																t = lista_tavoli.at(tavol);
																	
																if( t.uuidTavolo == numTavolo ){
																	
																pre.setNumTavolo(numTavolo);
																check = true;
																break;
																	
																}
															}	
														}while(check != true);
													} else {
														cout << "Nessun tavolo prenotabile" << endl;
														break;
													}
														
													// call object
													Piatto pia;
													Ricetta ric;
													Ingrediente ing;
													for( int l = 0 ; l < lista_piatti.size() ; l++ ){
														
														cout << " " << endl;
														cout << l + 1 << ") ";
														pia = lista_piatti.at(l);
														pia.toStringPiatto();
														ric = ricette.at(l);
														ric.toStringPiatto();
														
														
														for( int ingr = 0 ; ingr < ric.lista_ingredienti.size() ; ingr++ ){
															ing = ric.lista_ingredienti.at(ingr);
															ing.toStringCli();
														}
													}
													
													Bevanda be;
													for( int z = 0 ; z < lista__bevanda.size() ; z++ ){
														
														be = lista__bevanda.at(z);
														be.toStringBevanda();	
														
													}	
													
													cout << "" << endl;
													cout << "Scelta: \n 1) Aggiungi il numero del piatto da aggiungere alla prenotazione \n 2) Inserire numero bevanda 3) Inserire 0 per terminare l'aggiunta dei piatti" << endl;
													do{
														
														cout << "" << endl;
														cout << "scelta: ";
														cin >> sceltaPreno;
														switch(sceltaPreno){
															
															case 1:
																
																{
																	cout << "" << endl;
																	cout << "scelta numero ricetta: ";
																	cin >> sceltaRicetta;
																	cout << "" << endl;		
																	for( int b = 0 ; b < ricette.size() ; b++ ){
																		if(b == ( sceltaRicetta - 1 )){
																		  pre.lista__ricettePrenotata.push_back(ricette.at(b));	
																		}
																	}
																break;	
																};
															
															case 2:
																{
																	cout << "Scelta numero bevanda: ";
																	cin >> sceltaBevanda;
																	cout << "" << endl;		
																	for( int b = 0 ; b < lista__bevanda.size() ; b++ ){
																		if(b == ( sceltaBevanda - 1 ) ){
																		  pre.lista__BevandePrenotata.push_back(lista__bevanda.at(b));
																		}
																	}
																
																break;		
																}
														}
													}while(sceltaPreno != 0);
														
													// prenotazione in a list
													lista_prenotazione[p] = pre;
													pre.toStringPrenotazioneRicetta();
													
													if( pre.lista__ricettePrenotata.size() > 0 ){
														for( int prR = 0 ; prR < pre.lista__ricettePrenotata.size(); prR++ ){
														
															ric = pre.lista__ricettePrenotata.at(prR);
															ric.toStringCliente();
														
														}
													}
													
													if( pre.lista__BevandePrenotata.size() > 0 ){
														
														for( int prB = 0 ; prB < pre.lista__BevandePrenotata.size(); prB++ ){
														
															be = pre.lista__BevandePrenotata.at(prB);
														    be.toStringBevanda();
														
														}
														
													}									
												} else {
					
													int Data = lista_prenotazione[p].data;	
													if(lista_prenotazione[p].data == Data){
															
														cout << "Data gia' prenotato" << endl;
														cout << "Inserire una data differente" << endl;
																
														// insert data
														cout << "Inserire data " << endl;
														cin >> data;
														pre.setData(data);
														
														cout << "" << endl;	
														
														cout << " " << endl;
															
														// insert ora
														cout << "Inserire ora " << endl;
														cin >> Ora;
														pre.setOra(Ora);
																		
														cout << " " << endl;
														if( lista_tavoli.size() > 0 ) {
															
															// call object
															Tavolo tav;
															
														    cout << "Tavoli disponibili" << endl;
															// for tavoli
															for( int tavo = 0 ; tavo < lista_tavoli.size() ; tavo++ ){
																	tav = lista_tavoli.at(tavo);
																	tav.toStringTav();
															}	
															cout << "" << endl;	
															
															Tavolo t;
															do{															
																cout << "" << endl;
																// insert numTavolo
																cout << "Inserire numero tavolo " << endl;
																cin >> numTavolo;
																			
																for(int tavol = 0; tavol < lista_tavoli.size() ; tavol++  ){
																	t = lista_tavoli.at(tavol);
																		
																	if( t.uuidTavolo == numTavolo ){
																		
																		pre.setNumTavolo(numTavolo);
																		check = true;
																		break;
																		
																	}
																}	
														}while(check != true);
														
														// call object
														Piatto pia;
														Ricetta ric;
														Ingrediente ing;
														for( int l = 0 ; l < lista_piatti.size() ; l++ ){
															
															cout << " " << endl;
															cout << l + 1 << ") ";
															pia = lista_piatti.at(l);
															pia.toStringPiatto();
															ric = ricette.at(l);
															ric.toStringPiatto();
															
															
															for( int ingr = 0 ; ingr < ric.lista_ingredienti.size() ; ingr++ ){
																ing = ric.lista_ingredienti.at(ingr);
																ing.toStringCli();
															}
														}
														
														Bevanda be;
														for( int z = 0 ; z < lista__bevanda.size() ; z++ ){
															
															be = lista__bevanda.at(z);
															be.toStringBevanda();	
															
														}	
														
														cout << "" << endl;
														cout << "Scelta: \n 1) Aggiungi il numero del piatto da aggiungere alla prenotazione \n 2) Inserire numero bevanda 3) Inserire 0 per terminare l'aggiunta dei piatti" << endl;
														do{
															
															cout << "" << endl;
															cout << "scelta: ";
															cin >> sceltaPreno;
															switch(sceltaPreno){
																
																case 1:
																	
																	{
																	    cout << "" << endl;
																		cout << "scelta numero ricetta: ";
																		cin >> sceltaRicetta;
																		cout << "" << endl;		
																		for( int b = 0 ; b < ricette.size() ; b++ ){
																			if(b == ( sceltaRicetta - 1 )){
																			  pre.lista__ricettePrenotata.push_back(ricette.at(b));	
																			}
																		}
																	break;	
																	};
																
																case 2:
																	{
																		cout << "" << endl;
																		cout << "scelta numero bevanda: ";
																		cin >> sceltaBevanda;
																		cout << "" << endl;		
																		for( int b = 0 ; b < lista__bevanda.size() ; b++ ){
																			if(b == ( sceltaBevanda - 1 ) ){
																			  pre.lista__BevandePrenotata.push_back(lista__bevanda.at(b));
																			}
																		}
																	
																	break;		
																	}
															}
														}while(sceltaPreno != 0);
														
														
														cout << "" << endl;
															
														// prenotazione in a list
														lista_prenotazione[p] = pre;
														pre.toStringPrenotazioneRicetta();
														
														if( pre.lista__ricettePrenotata.size() > 0 ){
															for( int prR = 0 ; prR < pre.lista__ricettePrenotata.size(); prR++ ){
															
																ric = pre.lista__ricettePrenotata.at(prR);
																ric.toStringCliente();
															
															}
													}
													
													if( pre.lista__BevandePrenotata.size() > 0 ){
														
														for( int prB = 0 ; prB < pre.lista__BevandePrenotata.size(); prB++ ){
														
															be = pre.lista__BevandePrenotata.at(prB);
														    be.toStringBevanda();
														
														}
														
													}
											
														
														
													}  else {
														cout << "Nessun tavolo prenotabile" << endl;
														break;
													}	
			
												} else {
													
													cout << " " << endl;
															
													// insert ora
													cout << "Inserire ora " << endl;
													cin >> Ora;
													pre.setOra(Ora);
																	
													cout << " " << endl;
													if( lista_tavoli.size() > 0 ) {
														
														// call object
														Tavolo tav;
														
													    cout << "Tavoli disponibili" << endl;
														// for tavoli
														for( int tavo = 0 ; tavo < lista_tavoli.size() ; tavo++ ){
																tav = lista_tavoli.at(tavo);
																tav.toStringTav();
														}	
														cout << "" << endl;	
														
														Tavolo t;
														do{															
															cout << "" << endl;
															// insert numTavolo
															cout << "Inserire numero tavolo " << endl;
															cin >> numTavolo;
																		
															for(int tavol = 0; tavol < lista_tavoli.size() ; tavol++  ){
																t = lista_tavoli.at(tavol);
																	
																if( t.uuidTavolo == numTavolo ){
																	
																	pre.setNumTavolo(numTavolo);
																	check = true;
																	break;
																	
																}
															}	
														}while(check != true);
														
														// call object
														Piatto pia;
														Ricetta ric;
														Ingrediente ing;
														for( int l = 0 ; l < lista_piatti.size() ; l++ ){
															
															cout << " " << endl;
															cout << l + 1 << ") ";
															pia = lista_piatti.at(l);
															pia.toStringPiatto();
															ric = ricette.at(l);
															ric.toStringPiatto();
															
															
															for( int ingr = 0 ; ingr < ric.lista_ingredienti.size() ; ingr++ ){
																ing = ric.lista_ingredienti.at(ingr);
																ing.toStringCli();
															}
														}
														
														Bevanda be;
														for( int z = 0 ; z < lista__bevanda.size() ; z++ ){
															
															be = lista__bevanda.at(z);
															be.toStringBevanda();	
															
														}	
														
													
														cout << "" << endl;
														cout << "Scelta: \n 1) Aggiungi il numero del piatto da aggiungere alla prenotazione \n 2) Inserire numero bevanda 3) Inserire 0 per terminare l'aggiunta dei piatti" << endl;
														do{
															
															cout << "" << endl;
															cout << "scelta: ";
															cin >> sceltaPreno;
															switch(sceltaPreno){
																
																case 1:
																	
																	{
																	    cout << "" << endl;
																		cout << "scelta numero ricetta: ";
																		cin >> sceltaRicetta;
																		cout << "" << endl;		
																		for( int b = 0 ; b < ricette.size() ; b++ ){
																			if(b == ( sceltaRicetta - 1 )){
																			  pre.lista__ricettePrenotata.push_back(ricette.at(b));	
																			}
																		}
																	break;	
																	};
																
																case 2:
																	{
																		cout << "" << endl;
																		cout << "scelta numero bevanda: ";
																		cin >> sceltaBevanda;
																		cout << "" << endl;		
																		for( int b = 0 ; b < lista__bevanda.size() ; b++ ){
																			if(b == ( sceltaBevanda - 1 ) ){
																			  pre.lista__BevandePrenotata.push_back(lista__bevanda.at(b));
																			}
																		}
																	
																	break;		
																	}
															}
														}while(sceltaPreno != 0);
														
														cout << "" << endl;
															
														// prenotazione in a list
														lista_prenotazione[p] = pre;
														pre.toStringPrenotazioneRicetta();
														
														if( pre.lista__ricettePrenotata.size() > 0 ){
															for( int prR = 0 ; prR < pre.lista__ricettePrenotata.size(); prR++ ){
															
																ric = pre.lista__ricettePrenotata.at(prR);
																ric.toStringCliente();
															
															}
													}
													
													if( pre.lista__BevandePrenotata.size() > 0 ){
														
														for( int prB = 0 ; prB < pre.lista__BevandePrenotata.size(); prB++ ){
														
															be = pre.lista__BevandePrenotata.at(prB);
														    be.toStringBevanda();
														
														}
														
													}
													cout << "---------------------------------------------------" << endl;
													cout << "" << endl;	
												
													
													} else {
														cout << "Nessun tavolo prenotabile" << endl;
														break;
													}
													
													// call object
													Piatto pia;
													Ricetta ric;
													Ingrediente ing;
													for( int l = 0 ; l < lista_piatti.size() ; l++ ){
														
														cout << " " << endl;
														cout << l + 1 << ") ";
														pia = lista_piatti.at(l);
														pia.toStringPiatto();
														ric = ricette.at(l);
														ric.toStringPiatto();
														
														
														for( int ingr = 0 ; ingr < ric.lista_ingredienti.size() ; ingr++ ){
															ing = ric.lista_ingredienti.at(ingr);
															ing.toStringCli();
														}
													}
													
													Bevanda be;
													for( int z = 0 ; z < lista__bevanda.size() ; z++ ){
														
														be = lista__bevanda.at(z);
														be.toStringBevanda();	
														
													}	
													
												
													cout << "" << endl;
													cout << "Scelta: \n 1) Aggiungi il numero del piatto da aggiungere alla prenotazione \n 2) Inserire numero bevanda 3) Inserire 0 per terminare l'aggiunta dei piatti" << endl;
													do{
														
														cout << "" << endl;
														cout << "scelta: ";
														cin >> sceltaPreno;
														switch(sceltaPreno){
															
															case 1:
																
																{
																    cout << "" << endl;
																	cout << "scelta numero ricetta: ";
																	cin >> sceltaRicetta;
																	cout << "" << endl;		
																	for( int b = 0 ; b < ricette.size() ; b++ ){
																		if(b == ( sceltaRicetta - 1 )){
																		  pre.lista__ricettePrenotata.push_back(ricette.at(b));	
																		}
																	}
																break;	
																};
															
															case 2:
																{
																	cout << "" << endl;
																	cout << "scelta numero bevanda: ";
																	cin >> sceltaBevanda;
																	cout << "" << endl;		
																	for( int b = 0 ; b < lista__bevanda.size() ; b++ ){
																		if(b == ( sceltaBevanda - 1 ) ){
																		  pre.lista__BevandePrenotata.push_back(lista__bevanda.at(b));
																		}
																	}
																
																break;		
																}
														}
													}while(sceltaPreno != 0);
													
													cout << "" << endl;
														
													// prenotazione in a list
													lista_prenotazione[p] = pre;
													pre.toStringPrenotazioneRicetta();
													
													if( pre.lista__ricettePrenotata.size() > 0 ){
														for( int prR = 0 ; prR < pre.lista__ricettePrenotata.size(); prR++ ){
														
															ric = pre.lista__ricettePrenotata.at(prR);
															ric.toStringCliente();
														
														}
													}
													
													if( pre.lista__BevandePrenotata.size() > 0 ){
														
														for( int prB = 0 ; prB < pre.lista__BevandePrenotata.size(); prB++ ){
														
															be = pre.lista__BevandePrenotata.at(prB);
														    be.toStringBevanda();
														
														}
														
													}
													cout << "---------------------------------------------------" << endl;
													cout << "" << endl;	
												}
											}	
										}
									}
									break;
								}	
							}
						}
					}		
		}
	}while(scelta != 0);
   return 0;
}

