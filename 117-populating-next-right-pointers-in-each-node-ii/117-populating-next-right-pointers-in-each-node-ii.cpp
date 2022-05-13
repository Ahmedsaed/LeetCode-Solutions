/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        Node *curP = root;
        Node *nextDummyHead = new Node(0);
        Node *p = nextDummyHead;
        while (curP != NULL) {
            if (curP->left != NULL) {
                p->next = curP->left;
                p = p->next;
            }
            if (curP->right != NULL) {
                p->next = curP->right;
                p = p->next;
            }
            if (curP->next != NULL) {
                curP = curP->next;
            }
            else {
                curP = nextDummyHead->next;
                nextDummyHead->next = NULL;
                p = nextDummyHead;
            }
        }
        return root;
    }
};