//*****************************************************************************
//  This header file contains the Quene class declarations.
//  
//
//  Author: Hanqing Zhang, WPI, MA.
//  
//*****************************************************************************

#ifndef Quene_h
#define Quene_h

#include <iostream>
#include <string>

const int MAX_SIZE = 200;

struct Node
{
    int data;
    Node* link;
};

class Quene_array
{

private:
    int Quene[MAX_SIZE];
    int front;
    int rear;

public:
    Quene_array();
    bool Enquene(int data);
    bool Dequene();
    int Front();
    bool isEmpty();
    bool displayQuene();
    ~Quene_array();
};

//*******************//
class Quene_linkedlist
{

private:
    Node* Quenefront;
    Node* Quenerear;

public:
    Quene_linkedlist();
    int countQuene();
    bool Enquene(int data);
    bool Dequene();
    int Front();
    bool isEmpty();
    bool displayQuene();
    ~Quene_linkedlist();
};


#endif