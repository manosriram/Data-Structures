#include <iostream>
#include <list>
using namespace std;

class Hash
{
  public:
    int Buckets;
    list<int> *Table;
    list<int>::iterator i;
    Hash(int key)
    {
        this->Buckets = key;
        Table = new list<int>[Buckets];
    }

    int getHash(int key)
    {
        return key % Buckets;
    }

    void insertHash(int key)
    {
        int index = getHash(key);
        cout << index << " ";
        Table[index].push_back(key);
    }
    void displayBuckets()
    {
        for (int t = 0; t < Buckets; t++)
        {
            for (auto x : Table[t])
            {
                cout << " --> " << x << " ";
            }
            cout << '\n';
        }
    }
    void deleteHash(int key)
    {
        int index = getHash(key);
        for (i = Table[index].begin(); i != Table[index].end(); i++)
        {
            if (*i == key)
            {
                Table[index].erase(i);
                break;
            }
        }
    }
};

int main()
{
    Hash h(5);
    h.insertHash(123);
    h.insertHash(312);
    h.insertHash(312);
    h.insertHash(321);
    h.insertHash(321);
    h.insertHash(321);
    h.insertHash(321);
    h.deleteHash(321);
    h.deleteHash(321);
    h.displayBuckets();
}