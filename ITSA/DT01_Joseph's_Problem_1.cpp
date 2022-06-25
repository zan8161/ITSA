#include <iostream>
#include <string>

using namespace std;

#define MaxInputLen 4096
#define MaxNameLen 64
#define killed 0
#define survived 1

typedef struct Node *pointer;
typedef struct Node
{
    string name;
    int life;
    pointer next;
} Node;

Node *NewNode(string name)
{
    Node *New = (Node *)malloc(sizeof(Node));
    New->name = name;
    New->next = NULL;
    New->life = survived;
    return New;
}

void GameStart(Node *top, int personsNum, int step)
{
    Node *current = top;
    Node *mark[personsNum];
    int j = 0;
    for (int i = 0; i < personsNum; i++)
        mark[i] = NULL;
    //  game start
    while (j < personsNum)
    {
        for (int i = 0; i < step; i++)
        {
            //  if the next person is dead, pass it.
            if (current->next->life == killed)
            {
                current = current->next;
                while (current->life != survived)
                    current = current->next;
            }
            //  if next person is survived, go.
            else
                current = current->next;
        }
        mark[j++] = current;
        current->life = killed;
    }
    //  survivor is the last mark
    cout << mark[j - 1]->name << endl;
    //  free all Nodes
    for (int i = 0; i < personsNum; i++)
        free(mark[i]);
}

int main()
{
    int gametimes = 0, personsNum = 0, step = 0;
    cin >> gametimes;
    for (int i = 0; i < gametimes; i++)
    {
        cin >> personsNum >> step;

        //  build circular linked list.
        Node *current = NULL, *top = NULL;
        string name;
        cin >> name;
        top = NewNode(name);
        current = top;

        for (int i = 1; i < personsNum; i++)
        {
            cin >> name;
            current->next = NewNode(name);
            current = current->next;
        }
        current->next = top;
        top = current;
        //  start
        GameStart(top, personsNum, step);
    }
}