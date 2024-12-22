#include <iostream>
#pragma once
#include <string.h>
using namespace std;
class Players
{

    int jersey_no;
    char player_name[20];
    char type[20];
    int runes;
    int wickets;
    int no_of_matches;

public:
    Players();
    Players(int, char *, char *, int, int, int);
    int getjersey_no();
    char *getplayer_name();
    char *gettype();
    int getruns();
    int getwickets();
    int getno_of_matches();
    void setersey_no(int);
    void setplayer_name(char *);
    void settype(char *);
    void setruns(int);
    void setwickets(int);
    void setno_of_matches(int);
    void Display();
};