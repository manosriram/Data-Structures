#include <iostream>
#include "BaseTemplate.h"
#include <string.h>
using namespace std;

int main()
{
    struct TrieNode *root = createNode();
    string dictionary[100];
    int ch;
    string word;

    while (true)
    {
        cout << "\n";
        cout << "1. Add Word to Dictionary.\n2.Check if a Word is present in the Dictionary.\n3.Get all the words with the given Prefix.\n4.Exit" << '\n';
        cout << "\n";
        cin >> ch;

        switch (ch)
        {
        case 1: {
            cout << "Enter Word: ";
            cin >> word;
            insert(word,root);
            cout << "\n";
            cout << "Word Inserted !" << '\n';
            break;
        }
        case 2: {
            cout << "Enter Word: ";
            cin >> word;
            cout << "\n";
            (search(word, root)) ? cout << "Word Found in the Dictionary!" << '\n' : cout << "Word not found in the Dictionary." << '\n';
            cout << "\n";
            break;
        }
        case 3: {
            cout << "Enter Prefix: ";
            cin >> word;
            cout << "\n";
            int res = autoSuggest(root, word);
            if (res == -1) {
                cout << "No word other than the Prefix found in the Dictionary." << '\n';
            } else if (!res) {
                cout << "No words found with this in the Dictionary." << '\n';
            }
            break;
        }
        case 4:
            exit(0);
        
        default:
            cout << "Choice not available." << '\n';
        }
    }
}