//*****************************************************************************
//  This source file contains the Quene class test.
//  
//
//  Author: Hanqing Zhang, WPI, MA.
//  
//*****************************************************************************

#include <iostream>
#include "Quene.h"

int main()
{

	Quene_array newquene;
	newquene.Enquene(2);
	newquene.displayQuene();
	newquene.Enquene(3);
	newquene.displayQuene();
	newquene.Enquene(4);
	newquene.displayQuene();
	int d = newquene.Front();
	std::cout << "The front of quene is: " << d << std::endl;
	newquene.Enquene(5);
	newquene.displayQuene();
	newquene.Dequene();
	newquene.displayQuene();
	newquene.Dequene();
	newquene.displayQuene();
	newquene.Dequene();
	newquene.displayQuene();
	newquene.Dequene();
	newquene.displayQuene();
	std::cout << newquene.isEmpty() << std::endl;
	

	Quene_linkedlist anotherquene;
	anotherquene.Enquene(2);
	anotherquene.displayQuene();
	anotherquene.Enquene(3);
	anotherquene.displayQuene();
	anotherquene.Enquene(4);
	anotherquene.displayQuene();
	int a = anotherquene.Front();
	std::cout << "The front of quene is: " << a << std::endl;
	anotherquene.Dequene();
	anotherquene.displayQuene();
	anotherquene.Dequene();
	anotherquene.displayQuene();
	bool b = anotherquene.isEmpty();
	std::cout << b << std::endl;
	anotherquene.Dequene();
	anotherquene.displayQuene();
	bool c = anotherquene.isEmpty();
	std::cout << c << std::endl;



}