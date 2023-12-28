#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *prev;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->prev = NULL;
        this->next = NULL;
    }
};
void addNodes(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int nodeSZ(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void cpmrNodes(Node *LIST_1, Node *LIST_2)
{
    Node *tmp = LIST_1, *tmp1 = LIST_2;
    bool flag = false;
    while (tmp != NULL && tmp1 != NULL)
    {
        if (tmp->value == tmp1->value)
        {
            flag = true;
        }
        tmp = tmp->next;
        tmp1 = tmp1->next;
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    Node *head = NULL, *tail = NULL;
    Node *head1 = NULL, *tail1 = NULL;
    int value;
    int value1;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        addNodes(head, tail, value);
    }
    while (true)
    {
        cin >> value1;
        if (value1 == -1)
            break;
        addNodes(head1, tail1, value1);
    }
    if (nodeSZ(head) == nodeSZ(head1))
    {
        cpmrNodes(head, head1);
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}