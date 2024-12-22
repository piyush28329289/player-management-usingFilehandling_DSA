#include "Linklist.cpp"
#include "player.cpp"
#include "Node.cpp"

int main()
{
    Linklist l1;
    l1.readfromfile();
    int choice = 0;
    while (choice != 4)
    {

        cout << "ch 1. Insert player information at position" << endl;
        cout << "ch 2. Delete player at any position" << endl;
        cout << "ch 3. TO Display Data" << endl;
        cout << "ch 4. To EXIT" << endl;
        cout << "Enter your choice :=>" << endl;
        cin >> choice;
        switch (choice)
        {

        case 1:
        {
            int pos;
            int j_no;
            char p_name[20];
            char p_tpye[20];
            int runs;
            int wickets;
            int no_ofmatches;
            cout << "\nEnter positio => ";
            cin >> pos;
            cout<<"\nJoursey_no=> ";
            cin >> j_no;
            cout<<"\nplayer_name=>";
            cin >> p_name;
            cout<<"\ntype=> ";
            cin >> p_tpye;
            cout<<"\nRuns=> ";
            cin >> runs;
            cout<<"\nwickets =>";
            cin >> wickets;
            cout<<"\nno_of_matches:=>";
            cin >> no_ofmatches;
            Players p1(j_no, p_name, p_tpye, runs, wickets, no_ofmatches);
            l1.insertatpos(p1, pos);
        }
        break;

        case 2:
        {
            int pos;
            cout << "enter position to delete" << endl;
            cin >> pos;
            l1.deleteatpos(pos);
        }
        break;
        case 3:
        {
            l1.display();
        }
        break;
        case 4:
        {
            cout << "End of program" << endl;
        }
        break;
        default:
            break;
        }
    }
    return 0;
}