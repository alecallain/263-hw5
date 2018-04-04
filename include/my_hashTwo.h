#include<iostream>
#include<string>
#include<fstream>

#include "superhero.h"
#include "my_hash.h"

/**
* This class is an extension of 
* the Hashing (Hashtable) class
*
* @author Alec Allain
* @date 3/19/18
*/
class HashingTwo {
	
	 bool insertTwo(const Superhero & s){
                bool result;
                if (heroesTwo[hashTwo(s)] == NULL) {
                	heroesTwo[hashTwo(s)] = s;
                        result = false;
                }
                else {
                	heroesTwo[hashTwo(s)] = s;
                        collisions++;
                	result = true;
                }
         	return result;
         }
	
}
