
#include <iostream>
using namespace std;
#pragma once
#ifndef H_addressType
#define H_addressType

class addressType
{
public:
	void setAddress(string a)
	{
		address = a;
	}

	void setCity(string c)
	{
		city = c;
	}

	void setState(string s)
	{
		if (s.length() != 2)
		{
			state = "XX";
		}
		else
		{
			state = s;
		}
	}

	void setZipcode(int z)
	{
		if (z <= 99999 && z >= 11111) 
		{
			zipcode = z;
		}
		else 
		{
			zipcode = 10000;
		}
	}


	string getAddress() 
	{
		return address;
	}

	string getCity()
	{
		return city;
	}

	string getState()
	{
		return state;
	}

	int getZipcode()
	{
		return zipcode;
	}


	void print()
	{
		cout << this->address << endl << this->city << " " << this->state << ", " << this->zipcode << endl;
	}

	// Default Constructor
	addressType()
	{
		setAddress("");
		setCity("");
		setState("XX");
		setZipcode(10000);
	}

	// Constructor
	addressType(string a, string c, string s, int z)
	{
		setAddress(a);
		setCity(c);
		setState(s);
		setZipcode(z);
	}

private:
	string address;
	string city;
	string state;
	int zipcode;
};

#endif