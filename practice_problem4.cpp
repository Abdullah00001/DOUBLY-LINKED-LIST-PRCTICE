#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;
    int Q;
    cin >> Q;
    while (Q--)
    {
        int X, V;
        cin >> X >> V;
        if (X > myList.size())
        {
            cout << "Invalid" << endl;
        }
        else
        {
            myList.insert(next(myList.begin(), X), V);
            for (int x : myList)
            {
                cout << x << " ";
            }
            cout << endl;
            for (auto it = myList.rbegin(); it != myList.rend(); it++)
            {
                cout<<*it<<" ";
            }
            
            cout << endl;
        }
    }

    return 0;
}