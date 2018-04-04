#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<list>

#include "superhero.h"
#include "superhero.cpp"
#include "my_hash.h"
#include "my_hashTwo.h"
#include "my_hashThree.h"
#include "csv.h"

/*
* This class provides the main method
* for the hashing project
*
* @author Alec Allain
* @version 3/18/18
*/
class Main {
		
	public:

		/*
 		* Main method
 		*/ 
		int main (int argc, std::string** argv) {
			
			io::CSVReader<5, io::trim_std::strings<' '>, io::double_quote_escape<',','\"'> > in("superhero.csv");
			in.read_header(io::ignore_extra_column, "page_id", "name", "urlslug", "ALIGN", "EYE", "HAIR", "SEX", "GSM", "ALIVE", "APPEARANCES", "FIRST APPEARANCES", "Year");

			while(in.read_row(page_id, name, urlslug, id, align, eye, hair, sex, gsm, alive, appearances, first_appear, year)) {
				
				std::cout << name << std::endl;
				Superhero temp (page_id, name, urlslug, id, align, eye, hair, sex, gsm, alive, appearances, first_appear, year);
				heroesOne.push_back(temp);
				heroesTwo.push_back(temp);
				heroesThree.push_back(temp);
			}
			
			std::cout << "Entered" << heroes.size() << " heroes into the vectors" <<  std::endl;
			
			std::ofstream outfile
			outfile.open("RESULTS.md", std::ios_base::app);
			outfile << "Here's the number of collisions: " + collisions;
			
		}

	private:
		
		// instance variables
		int collisions;

		std::vector<Superhero> heroesOne;
		std::vector<Superhero> heroesTwo;
		std::vector<Superhero> heroesThree;
		
		int page_id;
		std::string name;
		std::string urlslug;
		std::string id;
		std::string align;
		std::string eye;
		std::string hair;
		std::string sex;
		std::string gsm;
		boolean alive;
		int appearances;
		std::string first_appear;
		int year;

}
