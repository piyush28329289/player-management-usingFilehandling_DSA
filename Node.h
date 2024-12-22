#include "Player.h"
#pragma once
#include <iostream>
using namespace std;
class Node
{
    Players data;
    Node *next;

public:
    Node(Players &);
    Players &getdata();
    Node *getnext();
    void setdata(Players &);
    void setnext(Node *);
};