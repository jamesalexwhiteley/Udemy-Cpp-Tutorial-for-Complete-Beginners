#pragma once

class Cat {
private:
	bool happy;
	string name;
public:
	Cat(); //constructor 
	string toString();
	void speak();
	void setName(string newName);
	string getName();
	~Cat(); //destructor 
	
};

