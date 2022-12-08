#include <iostream>
#include <CLI/CLI.hpp>


int main(int argc, char** argv){
	
	
	bool flag_bool{false};
	int option_int{0};
	
	
	CLI::App Kommandozeilenauslesemaschine{"Lange Beschreibung","Kurzname"};

	// Diese Zeile fügt eine Flag hinzu
	// Eine Flag kann nur Ja oder Nein sein, aber keinen komplexeren Wert ausdrücken
	Kommandozeilenauslesemaschine.add_flag("-b", flag_bool, "bool"); 		
	
	// Diese Zeile fügt eine Option hinzu
	// Eine Option kann einen komplexeren Inhalt entgegennehmen
	Kommandozeilenauslesemaschine.add_option("-i", option_int, "int");


	try{
        Kommandozeilenauslesemaschine.parse(argc, argv);
    } catch(const CLI::ParseError& e){
        std::cout << "Konnte die CMD-Parameter nicht parsen - Das Programm könnte in einem ungültigen Zustand sein";
    }


	std::cout << option_int << std::endl;

}
