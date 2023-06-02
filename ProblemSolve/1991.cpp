#include <iostream>
#include <vector>
using namespace std;
struct Node
{
    char c;
    Node *left = NULL;
    Node *right = NULL;
};
void preorder(Node *node)
{
    cout << node->c;
    if (node->left != NULL)
        preorder(node->left);
    if (node->right != NULL)

        preorder(node->right);
}
void inorder(Node *node)
{

    if (node->left != NULL)
        inorder(node->left);
    cout << node->c;
    if (node->right != NULL)
        inorder(node->right);
}
void postorder(Node *node)
{
    if (node->left != NULL)
        postorder(node->left);
    if (node->right != NULL)
        postorder(node->right);
    cout << node->c;
}
int N;
int main()
{
    cin >> N;
    vector<Node> tree(26);
    for (int i = 0; i < N; i++)
    {
        char p, l, r;
        cin >> p >> l >> r;
        tree[p - 'A'].c = p;
        if (l != '.')
            tree[p - 'A'].left = &tree[l - 'A'];
        if (r != '.')
            tree[p - 'A'].right = &tree[r - 'A'];
    }
    preorder(&tree[0]);
    cout << "\n";
    inorder(&tree[0]);
    cout << "\n";
    postorder(&tree[0]);
    return 0;
}