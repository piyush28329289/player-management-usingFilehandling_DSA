#include "Node.h"
Node::Node(Players &d)
{
    this->data = d;
    this->next = NULL;
}
Players &Node::getdata()
{
    return data;
}
Node *Node::getnext()
{
    return next;
}
void Node::setdata(Players &d)
{
    data = d;
}
void Node::setnext(Node *nt)
{
    next = nt;
}