#include "Player.h"
Players::Players()
{
    this->jersey_no = 0;
    strcpy(this->player_name, "not assign");
    strcpy(this->type, "notassign");
    this->runes = 0;
    this->wickets = 0;
    this->no_of_matches = 0;
}
Players::Players(int j_no, char *p_name, char *p_type, int rn, int wk, int nom)
{  
    this->jersey_no = j_no;
    strcpy(this->player_name, p_name);
    strcpy(this->type, p_type);
    this->runes = rn;
    this->wickets = wk;
    this->no_of_matches = nom;
}
int Players::getjersey_no()
{
    return this->jersey_no;
}
char *Players::getplayer_name()
{
    return this->player_name;
}
char *Players::gettype()
{
    return this->type;
}
int Players::getruns()
{
    return this->runes;
}
int Players::getwickets()
{
    return this->wickets;
}
int Players::getno_of_matches()
{
    return this->no_of_matches;
}
void Players::setersey_no(int j_no)
{
    this->jersey_no = j_no;
}
void Players::setplayer_name(char *p_name)
{
    strcpy(this->player_name, p_name);
}
void Players::settype(char *p_type)
{
    strcpy(this->type, p_type);
}
void Players::setruns(int rn)
{
    this->runes = rn;
}
void Players::setwickets(int wk)
{
    this->wickets = wk;
}
void Players::setno_of_matches(int nom)
{
    this->no_of_matches = nom;
}
void Players::Display()
{
    cout << "Joursey No => " << jersey_no << endl;
    cout << "Player name => " << player_name << endl;
    cout << "player type => " << type << endl;
    cout << "Total runs score => " << runes << endl;
    cout << "Total wickets taken => " << wickets << endl;
    cout << "No of matches => " << no_of_matches << endl;
}