#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val) //----->O(1)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    int mx = INT_MIN;
    int mn = INT_MAX;
    Node *temp = head;

    while (temp != NULL)
    {
        if (mx < temp->val)
        {
            mx = temp->val;
        }

        if (mn > temp->val)
        {
            mn = temp->val;
        }

        temp = temp->next;
    }

    cout << mx - mn << endl;
    return 0;
}