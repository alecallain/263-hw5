#include<iostream>
#include<string>
#include<fstream>

#include "superhero.h"

/*
* This class contains and performs 
* three distinct hashing methods
*
* @author Alec Allain
* @version 3/18/18 
*/
class Hashing {

	public:

		/*
 		* This method determines if a collision happened
 		*
 		* @param s is the superhero name
		*/
		bool insert(const Superhero & s){
			bool result;
			if (heroes[hashOne(s)] == NULL) {
                                heroes[hashOne(s)] = s;
                                result = false;
                        }
                        else {
                                heroes[hashOne(s)] = s;
                                collisions++;
                                result = true;
                        }
			return result;
		}

		/*
 		* This method returns a superhero
 		*
 		* @param name is the name of the superhero
 		*/  
		Superhero & get(const std::string name){
			for (int i = 0; i < hero.length(); i++) {
				if (hero[i] == name) {
					return hero.pop(name);
				}
				else {
					std::cout << "Hero is not in the vector" << std::endl;
				}
			}
		}

	private:
		
		// instance variables
		int hashVal;
		int tableSize = 17011;

		/*
 		* This method is one of the hashing implementations
 		*/
		int hashOne (const std::string & key) {
			// we did something similar to this in class
			int hashVal = 0;
			for (char ch : key) {
				hashVal += ch;
			}
			return hashVal % tableSize;
		}

		/*
 		* This method is another of the hashing implementations
 		*/
		int hashTwo(const std::string & key) {
			// we did an hashing example like this in class
			int hashVal = 0;
			hashVal = key[0] + 27 * key[1] + 729 * key[2];
			return hashVal % tableSize;

		}
		
		/*
 		* This method is the last of the hashing implementations
 		*/
		int hashThree(const std::string & key) {
			// one other example from class
			int hashVal = 0;
			for (char ch : key) {
				hashVal = 37 * hashVal + ch;
			}
			return hashVal % tableSize;
		}

}
