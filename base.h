#ifndef base_H
#define base_H

class Base
{
public:
	Base(int = 400);
	~Base(void);

	//set methods
	void setpalladium(int);
	void setiridium(int);
	void setplatinum(int);
	void setcapacity(int);

	//get methods
	int getcapacity(void);

private:
	int palladium, iridium, platinum;
	bool palladiumfull, iridiumfull, platinumfull;
	int capacity;
};

#endif