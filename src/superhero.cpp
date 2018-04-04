#include<iostream>
#include<string>

#include "superhero.h"

/*
* This class provides the implementation
* from the superhero.h file
*
* @author Alec Allain
* @version 3/18/18
*/


/*
* Constructor for class
*/
Superhero::Superhero (int page_id, std::string name, std::string urlslug, std::string id, std::string alignment, std::string eye_color, std::string hair_color, std::string sex, std::string gsm, bool alive, int appearances, std::string first_appearance, int year) {
		this->page_id = page_id;
		this->name = name;
		this->urlslug = urlslug;
		this->id = id;
		this->alignment = alignment;
		this->eye_color = eye_color;
		this->hair_color = hair_color;
		this->sex = sex;
		this->gsm = gsm;
		this->alive = alive;
		this->appearances = appearances;
		this->first_appearance = first_appearance;
		this->year = year;
}
