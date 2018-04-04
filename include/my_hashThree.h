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
class HashingThree {
        
         bool insertThree (const Superhero & s){
                bool result;
                if (heroesThree[hashThree(s)] == NULL) {
                        heroesThree[hashThree(s)] = s;
                        result = false;
                }
                else {
                        heroesThree[hashThree(s)] = s;
                        collisions++;
                        result = true;
                }
                return result;
         }

}

