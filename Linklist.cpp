#include "Linklist.h"
 
using namespace std;


Linklist::Linklist()
{
    start = NULL;
}
void Linklist::insertatpos(Players &data, int pos)
{
    Node *temp = new Node(data);
    if (start == NULL)
    {
        start = temp;
        return;
    }
    if (pos == 1)
    {
        temp->setnext(start);
        start = temp;
        return;
    }
    Node *p = start;
    int i = 1;
    while (i < pos - 1 && p->getnext() != NULL)
    {
        i++;
        p = p->getnext();
    }
    temp->setnext(p->getnext());
    p->setnext(temp);
    return;
}
void Linklist::deleteatpos(int pos)
{
    if (start == NULL)
    {
       std:: cout << "no nodes to delete" << endl;
        return;
    }
    Node *p = start;
    if (pos == 1)
    {
        start = start->getnext();
        p->getdata().Display();
        cout << "is deleted" << endl;
        delete p;
        return;
    }
    int i = 1;
    while (i < pos - 1 && p->getnext() != NULL)
    {
        p = p->getnext();
        i++;
    }
    Node *q = p->getnext();
    p->setnext(q->getnext());
    q->getdata().Display();
    cout << "is deleted " << endl;
    delete q;
}

void Linklist::display()
{
    if (start == NULL)
    {
        cout << "no data to display" << endl;
        return;
    }
    else
    {
        Node *temp = start;
        while (temp->getnext() != NULL)
        {
            temp->getdata().Display();
            cout << "------------------------" << endl;
            temp = temp->getnext();
        }
        temp->getdata().Display();
        cout << endl;
    }
}
void Linklist::readfromfile()
{
    std::ifstream in("players.bin", ios_base::binary);
    if (!in)
    {
        cout << "Failed to open file for reading" << std::endl;
        return;
    }

    Players player;
    while (in.read((char *)(&player), sizeof(player)))
    {
        insertatpos(player, 1); 
    }

    in.close();
}
Linklist::~Linklist()
{
         cout << "i am distructor " << endl;
    ofstream out("players.bin", ios_base::binary);
    if (!out)
    {
        cout << "Failed to open file for writing" << std::endl;
        return;
    }

    Node *temp = start;
    while (temp->getnext() != NULL)
    {
        out.write((char *)(&temp->getdata()), sizeof(temp->getdata()));
        temp = temp->getnext();
    }
    out.write((char *)(&temp->getdata()), sizeof(temp->getdata()));

    out.close();

    Node *current = start;
    while (current != nullptr)
    {
       
        Node *next = current->getnext();
        delete current;
        current = next;
    }
}
