/****************************************************************/
/* Output:-                                                     */
/*   Pre Order Traversal   : 0 1 3 7 8 9 4 2 5 6                */
/*   In Order Traversal    : 7 3 8 9 1 4 0 5 2 6                */
/*   Post Order Traversal  : 7 9 8 3 4 1 5 6 2 0                */
/*   Level Order Traversal : 0 1 2 3 4 5 6 7 8 9                */
/****************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node
{
    public:
        int data;
        Node* left;
        Node* right;
        
        Node(int value)
        {
            data  = value;
            left  = nullptr;
            right = nullptr;
        }
};


class BinaryTree
{
    public:
        Node* root;
        
        BinaryTree()
        {
            root = nullptr;
        }
        
        void Insert(int value)
        {
            if (root == nullptr)
            {
                root = new Node(value);
            }
            else
            {
                InsertHelper(root, value);
            }
        }
        
        void InsertHelper(Node* node, int value)
        {
            if (value < node->data)
            {
                if (node->left == nullptr)
                {
                    node->left = new Node(value);
                }
                else
                {
                    InsertHelper(node->left, value);
                }
            }
            else
            {
                if (node->right == nullptr)
                {
                    node->right = new Node(value);
                }
                else
                {
                    InsertHelper(node->right, value);
                }
            }
        }
        
        void PreOrder(Node* node)
        {
            if(node == nullptr)
                return;
                
            cout << node->data << " ";
            PreOrder(node->left);
            PreOrder(node->right);
        }

        void InOrder(Node* node)
        {
            if(node == nullptr)
                return;
                
            InOrder(node->left);
            cout << node->data << " ";
            InOrder(node->right);
        }

        void PostOrder(Node* node)
        {
            if(node == nullptr)
                return;
                
            PostOrder(node->left);
            PostOrder(node->right);
            cout << node->data << " ";
        }
        
        void LevelOrder(Node* node)
        {
            //LevelOrderRecursion(node);
            LevelOrderQueue(node);
        }
        
        void LevelOrderRecursion(Node* node)
        {
            int height = HeightOfTree(node);
            
            for(int level = 0; level < height; level++)
            {
                PrintCurrentLevel(node, level);
            }
        }
        
        int HeightOfTree(Node* node)
        {
            if (node == nullptr)
                return 0;
                
            else
            {
                int lHeight = HeightOfTree(node->left);
                int rHeight = HeightOfTree(node->right);
                
                return (lHeight > rHeight ? (lHeight + 1) : (rHeight + 1));
            }
        }
        
        void PrintCurrentLevel(Node* node, int level)
        {
            if (node == nullptr)
                return;
                
            if (level == 0)
            {
                cout << node->data << " ";
            }
            else if (level > 0)
            {
                PrintCurrentLevel(node->left, level-1);
                PrintCurrentLevel(node->right, level-1);
            }
        }
        
        void LevelOrderQueue(Node* node)
        {
            if(node == nullptr)
                return;
            
            queue<Node*> q;
            
            q.push(node);
            
            while (!q.empty())
            {
                Node* qNode = q.front();
                cout << qNode->data << " ";
                q.pop();
                
                if (qNode->left != nullptr)
                {
                    q.push(qNode->left);
                }
                
                if (qNode->right != nullptr)
                {
                    q.push(qNode->right);
                }
            }
        }
};
            
    
int main(void)
{
    BinaryTree tree;
    
    for(int i = 0; i < 10; i++)
    {
        //tree.Insert(i);
    }
    
    tree.root = new Node(0);
    tree.root->left = new Node(1);
    tree.root->right = new Node(2);
    tree.root->left->left = new Node(3);
    tree.root->left->right = new Node(4);
    tree.root->right->left = new Node(5);
    tree.root->right->right = new Node(6);
    tree.root->left->left->left = new Node(7);
    tree.root->left->left->right = new Node(8);
    tree.root->left->left->right->right = new Node(9);


    cout << "Pre Order Traversal   : ";
    tree.PreOrder(tree.root);
    cout << endl;
    
    cout << "In Order Traversal    : ";
    tree.InOrder(tree.root);
    cout << endl;
    
    cout << "Post Order Traversal  : ";
    tree.PostOrder(tree.root);
    cout << endl;
    
    cout << "Level Order Traversal : ";
    tree.LevelOrder(tree.root);
    cout << endl;
    
    return 0;
}
