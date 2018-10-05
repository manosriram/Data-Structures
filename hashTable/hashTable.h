#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>
using namespace std;

const int TABLE_SIZE = 128;

class HashEntry
{
  public:
    int key, value;

    HashEntry(int key, int value)
    {
        this->key = key;
        this->value = value;
    }
};

class HashMap
{

  private:
    HashEntry **table;

  public:
    HashMap()
    {
        table = new HashEntry *[TABLE_SIZE];
        for (int i = 0; i < TABLE_SIZE; i++)
        {
            table[i] = NULL;
        }
    }

    int HashFunc(int key)
    {
        return key % TABLE_SIZE;
    }

    //While using this file as an Header file...
    void removeDuplicates()
    {
        for (int i = 0; i < TABLE_SIZE; i++)
        {
            if (table[i] != NULL)
                cout << table[i]->key << " ";
        }
    }

    // void symmet()
    // {
    //     int hash = HashFunc(key);

    //     while (table[hash] != NULL)
    //     {
    //         if (table[hash]->key == key && table[hash]->value == value)
    //             cout << table[hash]->key << " , " << table[hash]->value << '\n';
    //     }
    // }

    void disc()
    {
        int hash = HashFunc(key);

        for (int t = 0; t < TABLE_SIZE; t++)
        {
            if (table[t] != NULL)
            {
                if (table[t]->value != 0)
                    cout << table[t]->key << " ";
            }
        }
    }

    void check(int key, int value)
    {
        int hash = HashFunc(key);
        int flag = 0;

        while (flag)
        {
            if (table[hash] != NULL)
            {
                if (table[hash]->key != key && table[hash]->value != value)
                {
                    cout << key << " " << value;
                    flag = 1;
                }
                else
                    hash = HashFunc(hash + 1);
            }
            else
                hash = HashFunc(hash + 1);
        }
    }

    int counted[128];

    void Insert(int key, int value)
    {
        int hash = HashFunc(key);

        for (int t = 0; t < 128; t++)
            counted[t] = 0;

        while (table[hash] != NULL && table[hash]->key != key)
        {
            hash = HashFunc(hash + 1);
        }

        // While using this file as an Header file...

        if (table[hash] != NULL)
        {
            table[hash]->value++;
        }

        table[hash] = new HashEntry(key, value);

        // delete table[hash];
    }

    void Search(int key)
    {
        int hash = HashFunc(key);

        while (table[hash] != NULL && table[hash]->key != key)
        {
            hash = HashFunc(hash + 1);
        }

        if (table[hash] == NULL)
        {
            cout << "No element found at this key.." << endl;
            return;
        }

        else
        {
            cout << "Element at this key : " << table[hash]->value << '\n';
            return;
        }
    }

    void Remove(int key)
    {
        int hash = HashFunc(key);

        while (table[hash] != NULL)
        {
            if (table[hash]->key == key)
                break;

            hash = HashFunc(hash + 1);
        }

        if (table[hash] == NULL)
        {
            cout << "No Element Already!!" << endl;
            return;
        }

        else
        {
            delete table[hash];
            return;
        }
        cout << "Element at Key " << table[hash]->key << " Deleted!!" << '\n';
    }

    void Display()
    {
        for (int i = 0; i < TABLE_SIZE; i++)
        {
            if (table[i] != NULL)
                cout << "Key :  " << table[i]->key << "  "
                     << "Value :   " << table[i]->value << '\n';
        }
    }
};

/*

While Not Using this file as an Header file...

int main()
{
    HashMap hash;

    // cin >> n;
    hash.Insert(1, 3);
    hash.Insert(4, 3);
    hash.Insert(2, 3);
    hash.Insert(2, 3);
    // hash.Insert(3, 3);
    // hash.Insert(4, 3);
    // hash.Insert(5, 3);
    // hash.Insert(1, 3);
    hash.Display();
    hash.check(2, 3);
}

    int key, value;
    int choice;

    HashMap hash;

    while (1)
    {
        cout << "\n";
        cout << "Select any One Option : " << '\n';
        cout << "1. Insert Element into the Table : " << '\n';
        cout << "2. Search for an Element in the Table : " << '\n';
        cout << "3. Remove an Element in the Table : " << '\n';
        cout << "4. Display All Elements. " << '\n';
        cout << "5. Exit " << '\n';
        cout << "Your Choice :  ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Key :  ";
            cin >> key;
            cout << "Enter Value :  ";
            cin >> value;
            hash.Insert(key, value);
            break;

        case 2:
            cout << "Enter Key of the Element :  ";
            cin >> key;
            hash.Search(key);
            break;

        case 3:
            cout << "Enter Key of the Element to be Removed From the Table : ";
            cin >> key;
            hash.Remove(key);
            break;

        case 4:
            hash.Display();
            break;

        case 5:
            exit(0);

        default:
            cout << "Wrong Option Selected...Please Try Again!!" << '\n';
        }
    }
}
*/
