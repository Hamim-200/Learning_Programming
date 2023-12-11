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

void insert_tail(Node *&head, Node *&tail, int val)
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

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void same_or_not(Node *head1, Node *head2)
{
    while (head1 && head2)
    {
        if (head1->val != head2->val)
        {
            cout << "NO\n";
            return;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    if (!head1 && !head2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head1, tail1, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head2, tail2, val);
    }

    same_or_not(head1, head2);

    return 0;
}