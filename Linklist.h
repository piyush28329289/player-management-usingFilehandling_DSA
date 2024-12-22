#include "Node.h"
#include "player.h"
#pragma once
#include<fstream>
class Linklist
{
    Node *start;

public:
    Linklist();
    void insertatpos(Players&, int);
    void deleteatpos(int);
    void readfromfile();
    void display();
    ~Linklist();
    
};