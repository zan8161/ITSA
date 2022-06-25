#include <iostream>
#include <string>
#include <vector>

using namespace std;

class person
{
public:
    person() {}
    person(string _name)
    {
        name = _name;
        alive = true;
    }
    string name;
    bool alive;
};

void GameStart(vector<person> &Name_List, unsigned int step);

int main()
{
    unsigned int gametimes = 0, Numpeople = 0, step = 0;
    cin >> gametimes;
    for (unsigned int i = 0; i < gametimes; i++)
    {
        cin >> Numpeople >> step;

        string name;
        vector<person> Name_List;

        for (unsigned int j = 0; j < Numpeople; j++)
        {
            cin >> name;
            person Newplayer(name);
            Name_List.push_back(Newplayer);
        }

        GameStart(Name_List, step);
    }
}

void GameStart(vector<person> &Name_List, unsigned int step)
{
    vector<person>::iterator rm_target = Name_List.begin();
    for (unsigned int i = 0; i < step - 1; i++)
    {
        rm_target++;
        if (rm_target == Name_List.end())
            rm_target = Name_List.begin();
    }

    rm_target->alive = false;

    unsigned int alivepeople = Name_List.size();
    while (alivepeople > 1)
    {
        for (unsigned int i = 0; i < step; i++)
        {
            rm_target++;

            while (rm_target->alive == false)
            {
                rm_target++;
                if (rm_target == Name_List.end())
                    rm_target = Name_List.begin();
            }
        }

        rm_target->alive = false;
        alivepeople--;
    }

    cout << endl;
    Name_List.clear();
}