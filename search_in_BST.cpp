#include <iostream>
using namespace std;
class nodeBST
{
public:
int key;
nodeBST *lft, *rgt;
nodeBST();
nodeBST(int);
nodeBST* insertFunc(nodeBST*, int);
nodeBST* searchFunc(nodeBST*, int);
void traverseInOrder(nodeBST*);
};
nodeBST ::nodeBST()
: key(0)
, lft(NULL)
, rgt(NULL)
{
}
nodeBST ::nodeBST(int value)
{
key = value;
lft = rgt = NULL;
}
nodeBST* nodeBST ::insertFunc(nodeBST* root, int value)
{
if (!root)
{
return new nodeBST(value);
}
if (value > root->key)
{
root->rgt = insertFunc(root->rgt, value);
}
else
{
root->lft = insertFunc(root->lft, value);
}
return root;
}
nodeBST* nodeBST ::searchFunc(nodeBST* root, int key)
{
if (root == NULL || root->key == key)
return root;
if (root->key < key)
return searchFunc(root->rgt, key);
return searchFunc(root->lft, key);
}
void nodeBST ::traverseInOrder(nodeBST* root)
{
if (!root) {
return;
}
traverseInOrder(root->lft);
cout << root->key << endl;
traverseInOrder(root->rgt);
}
int main()
{
nodeBST node, *root = NULL, *searchRoot = NULL;
root = node.insertFunc(root, 0);
node.insertFunc(root, 27);
node.insertFunc(root, 9);
node.insertFunc(root, 19);
node.insertFunc(root, 91);
node.insertFunc(root, 2);
node.insertFunc(root, 7);
cout<<"\nThe sorted binary search tree is  "<< endl;
node.traverseInOrder(root);
cout<<"\nSearch for 7 in the BST  "<< endl;
searchRoot = node.searchFunc(root, 7);
if(searchRoot == NULL)
{
cout<<"Value Not Found\n";
}
else
{
cout << "Value Found! "<<searchRoot->key<<"\n";
}
cout<<"\nSearch for 2709 in the BST  "<< endl;
*searchRoot = NULL;
searchRoot = node.searchFunc(root, 2709);
if(searchRoot == NULL)
{
cout<<"Value Not Found\n";
}
else
{
cout << "Value Found! "<<searchRoot->key<<"\n";
}
return 0;
}
