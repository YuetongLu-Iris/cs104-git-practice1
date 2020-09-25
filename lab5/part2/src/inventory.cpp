#include "inventory.h"
#include <iostream>

Inventory::Inventory()
{
	// nothing to do here
}

/* Add an item to the inventory with the given name and amount. */
void Inventory::addItem(std::string name, int amount)
{
	//check exists
	for(unsigned int i=0; i<this->size(); ++i){
		if(this->at(i).name==name){
			this->at(i).amount+= amount;
			return;
		}
	}
	Item i(name,amount);
	this->push_back(i);
}

/* Remove all items with this name from the inventory. */
void Inventory::removeItem(std::string name)
{
	for(unsigned int i= 0; i<this->size() ; ++i){
		if(this->at(i).name == name){
			this->erase(this->begin()+i); //create iterator
		}
	}
}

/* Return the number of items with this name from the inventory. */
int Inventory::getNumItems(std::string name)
{
	for(unsigned int i= 0; i<this->size() ; ++i){
		if(this->at(i).name == name){
			return this->at(i).amount;
		}
	}
	return 0;
}

/* Print all the items in this format:
	key value
	key value
	key value
*/
void Inventory::printAllItems()
{
	for(unsigned int i= 0; i<this->size() ; ++i){
		std::cout<<this->at(i).name<<" "<< this->at(i).amount<<std::endl; 
	}
}