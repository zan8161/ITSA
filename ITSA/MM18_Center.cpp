#include <iostream>
#include <map>

using namespace std;

class node;

class node
{
public:
    node() { X_cor = 0, Y_cor = 0; }
    node(int _X_cor, int _Y_cor) { X_cor = _X_cor, Y_cor = _Y_cor; }

    int getX_cor() { return X_cor; }
    int getY_cor() { return Y_cor; }

private:
    int X_cor;
    int Y_cor;
};

int min(unsigned int *arr, int NumNode)
{
    int m = arr[0];
    for (int i = 0; i < NumNode; i++)
    {
        if (arr[i] < m)
            m = arr[i];
    }
    return m;
}

int dis(int X1, int Y1, int X2, int Y2)
{
    return (X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2);
}

int main()
{
    unsigned int NumNode = 0;
    cin >> NumNode;
    map<unsigned int, node> node_table;

    unsigned int X_cor, Y_cor;
    for (unsigned int id = 0; id < NumNode; id++)
    {
        cin >> X_cor >> Y_cor;
        node newnode(X_cor, Y_cor);
        node_table[id] = newnode;
    }

    unsigned int distance[NumNode];
    for (unsigned int i = 0; i < NumNode; i++)
    {
        int maxdis = 0;
        for (int j = 0; j < NumNode; j++)
        {
            int dist = dis(node_table.find(i)->second.getX_cor(), node_table.find(i)->second.getY_cor(), node_table.find(j)->second.getX_cor(), node_table.find(j)->second.getY_cor());
            if (dist > maxdis)
                maxdis = dist;
        }
        distance[i] = maxdis;
    }

    int center[NumNode];
    int mindis = min(distance, NumNode);
    int j = 0;
    for (int i = 0; i < NumNode; i++)
    {
        if (distance[i] == mindis)
            center[j++] = i;
    }

    int Xmin = node_table.find(center[0])->second.getX_cor();
    int Ymin = node_table.find(center[0])->second.getY_cor();
    if (j == 1)
        cout << Xmin << " " << Ymin << endl;
    else
    {
        int newcenterX = center[0];
        int newcenterY = center[0];
        for (int i = 0; i < j; i++)
        {
            if (node_table.find(newcenterX)->second.getX_cor() > node_table.find(center[i])->second.getX_cor())
            {
                newcenterX = center[i];
                newcenterY = center[i];
            }
            else if (node_table.find(newcenterX)->second.getX_cor() == node_table.find(center[i])->second.getX_cor())
            {
                if (node_table.find(newcenterY)->second.getY_cor() > node_table.find(center[i])->second.getY_cor())
                    newcenterY = center[i];
            }
        }
        cout << node_table.find(newcenterX)->second.getX_cor() << " " << node_table.find(newcenterY)->second.getY_cor() << endl;
    }
}