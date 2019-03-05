//*****************************************************************************
//  This source file contains the Quene class definitions.
//  
//
//  Author: Hanqing Zhang, WPI, MA.
//  
//*****************************************************************************

#include "Quene.h"

// Arrat based Quene
Quene_array::Quene_array()
{
	front = -1;
	rear = -1;

}

bool Quene_array::Enquene(int data)
{
	if (rear == MAX_SIZE-1)
	// if (rear+1)%MAX_SIZE ==front //circular array
	{
		std::cout << "Error: Quene overflow!" << std::endl;
		return false;
	}
	else if (isEmpty())
	{
		front = 0;
		rear = 0;
	}
	else
	{
		rear += 1;
		// rear = (rear+1)%MAX_SIZE; //circular array
	}
	Quene[rear] = data;
	return true;
}

bool Quene_array::Dequene()
{
	if (isEmpty())
	{
		std::cout << "Error: The Quene is empty!" << std::endl;
		return false;
	}
	else if (front == rear)
	{
		front = -1;
		rear = -1;
		return true;
	}
	else
	{
		front += 1;
		// front = (front+1)%MAX_SIZE; //circular array
		return true;
	}
}

int Quene_array::Front()
{
	if (isEmpty())
	{
		std::cout << "The Quene is empty!" << std::endl;
	}
	else
	{
		return Quene[front];
	}
}

bool Quene_array::isEmpty()
{
	if (front == -1 && rear == -1)
	{
		std::cout << "The Quene is empty!" << std::endl;
		return true;
	}
	else
	{
		return false;
	}
}

bool Quene_array::displayQuene()
{
	int index;
	if (isEmpty())
	{
		std::cout << "The Quene is empty!" << std::endl;
		return false;
	}
	else
	{
		for (index = front; index <= rear; index++)
		{
			std::cout << Quene[index] << " ";
		}
		std::cout << "" << std::endl;
		return true;
	}
}

Quene_array::~Quene_array()
{

}

// Linkedlist based Quene

Quene_linkedlist::Quene_linkedlist()
{
	Quenefront = NULL;
	Quenerear = NULL;
}

int Quene_linkedlist::countQuene()
{
	int count = 0;
	Node* temp = Quenefront;
	while (temp != NULL)
	{
		temp = temp->link;
		count++;
	}
	return count;
}


bool Quene_linkedlist::Enquene(int data)
{
	Node* temp = new Node();
	temp-> data = data;
	temp-> link = NULL;
	if (Quenefront == NULL && Quenerear == NULL)
	{
		Quenefront = Quenerear = temp;
		return true;
	}
	else
	{
		Quenerear-> link = temp;
		Quenerear = temp;
	}
}

bool Quene_linkedlist::Dequene()
{
	Node* temp = Quenefront;
	if (Quenefront == NULL)
	{
		std::cout << "The Quene is empty!" << std::endl;
		return false;
	}
	if (Quenefront == Quenerear)
	{
		Quenefront = Quenerear = NULL;
	}
	else
	{
		Quenefront = Quenefront-> link;
		delete(temp);
		return true;
	}
}

int Quene_linkedlist::Front()
{
	int count = countQuene();
	if (count == 0)
	{
		std::cout << "The Quene is empty." << std::endl;
	}
	else
	{
		Node* temp = Quenefront;
		return temp->data;
	}
}

bool Quene_linkedlist::isEmpty()
{
	if (Quenefront == NULL && Quenerear == NULL)
	{
		std::cout << "The Quene is empty." << std::endl;
		return false;
	}
	else
	{
		return true;
	}
}

bool Quene_linkedlist::displayQuene()
{
	if (Quenefront == NULL && Quenerear == NULL)
	{
		std::cout << "The Quene is empty." << std::endl;
		return false;
	}
	else
	{
		Node* temp = Quenefront;
		while (temp != NULL)
		{
			std::cout << temp->data << " ";
			temp = temp->link;
		}
		std::cout << "" << std::endl;
		return true;
	}
}

Quene_linkedlist::~Quene_linkedlist()
{

}