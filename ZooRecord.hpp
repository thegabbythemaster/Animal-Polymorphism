#ifndef _ZOO_RECORD_
#define _ZOO_RECORD_
#include <iostream>
#include <string>
//#include "ArrayBag.hpp"
#include "Animal.hpp"
#include "List.hpp"
    
class ZooRecord: public List<Animal*>
{
public:
    ZooRecord() = default;
    /**parameterized constructor
       @pre the input file is expected to be in CSV
       (comma seperated value) format as:
       "animal_name,hair,feathers,eggs,milk,airborne,aquatic,predator,toothed,
        backbone,breathes,venomous,fins,legs,tail,domestic,catsize,class_type\n"
       @param input_file_name the name of the input file
       @post adds Animal pointers to Animal-derived dynamic objects to record
        as per the data in the input file
    **/
  
   ZooRecord(std::string input_file_name);
  
   /**@post displays all animals in record, one per line by calling animal's
      display method"
      @void will display ZooRecord
   **/
   void display();
};
   
#endif // _ZOO_RECORD_
