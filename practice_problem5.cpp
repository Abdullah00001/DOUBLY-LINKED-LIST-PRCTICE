#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> List1;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        List1.push_back(value);
    }
    List1.sort();
    for(int X:List1)
    {
        cout<<X<<" ";
    }
    cout<<endl;
    return 0;
}