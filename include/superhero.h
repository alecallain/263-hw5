#ifndef SUPERHERO_H
#define SUPERHERO_H

#include<iostream>
#include<string>

/*
* This class provides the interface for
* the superhero.cpp file
*
* @author Alec Allain
* @version 3/18/18
*/
class Superhero {

	public:
		/*
 		* Constructor for class
 		*/
		Superhero (int page_id, std::string name, std::string urlslug, std::string id, std::string alignment, std::string eye_color, std::string hair_color, std::string sex, std::string gsm, bool alive, int appearances, std::string first_appearance, int year);		

	private:

		// instance variables
		int page_id;
		std::string name;
		std::string urlslug;
		std::string id;
		std::string alignment;
		std::string eye_color;
		std::string hair_color;
		std::string sex;
		std::string gsm;
		bool alive;
		int appearances;
		std::string first_appearance;
		int year;

};

#endif
