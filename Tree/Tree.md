# TREE

## Traversal of Binary Tree

                    1
            /               \
           2                 3
         /   \             /   \
       4       5        6         7
      / \     / \      / \       / \
     8   9   10 11    12 13     14 15
1. In-Order Traversal (Left, Root, Right): <br/>
   Sequence: 8, 4, 9, 2, 10, 5, 11, 1, 12, 6, 13, 3, 14, 7, 15

3. Pre-Order Traversal (Root, Left, Right): <br/>
Sequence: 1, 2, 4, 8, 9, 5, 10, 11, 3, 6, 12, 13, 7, 14, 15

4. Post-Order Traversal (Left, Right, Root): <br/>
Sequence: 8, 9, 4, 10, 11, 5, 2, 12, 13, 6, 14, 15, 7, 3, 1

5. Level-Order Traversal (Breadth-First): <br/>
Sequence: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15





### PreOrder Traversal
>  - The root node of the subtree is visited first. <br/>
>  - Then the left subtree  is traversed. <br/>
>  - At last, the right subtree is traversed. <br/> <br/>
>  <img alt="GIF" src="https://github.com/shivam01july/Data-Store/blob/main/PreOrderBinaryTree.gif" width="275" height="200"/> <br/>
> Output: 1 -> 2 -> 4 -> 5 -> 3 -> 6

### InOrder Traversal
>  - The left subtree is traversed first. <br/>
>  - Then the root node for that subtree is traversed. <br/>
>  - Finally, the right subtree is traversed. <br/> <br/>
>  <img alt="GIF" src="https://github.com/shivam01july/Data-Store/blob/main/InOrderBinaryTree.gif" width="275" height="200"/> <br/>
> Output: 4 -> 2 -> 5 -> 1 -> 3 -> 6

### PostOrder Traversal
>  - The left subtree is traversed first. <br/>
>  - Then the right subtree is traversed. <br/>
>  - Finally, the root node of the subtree is traversed. <br/> <br/>
>  <img alt="GIF" src="https://github.com/shivam01july/Data-Store/blob/main/PostOrderBinaryTree.gif" width="275" height="200"/> <br/>
> Output: 4 -> 5 -> 2 -> 6 -> 3 -> 1

### LevelOrder Traversal
>  - Level Order Traversal technique is defined as a method to traverse a Tree such that all nodes present in the same level are traversed completely before traversing the next level. <br/> <br/>
>  <img alt="GIF" src="https://github.com/shivam01july/Data-Store/blob/main/LevelOrderBinaryTree.png" width="275" height="200"/> <br/>
> Output: 1 -> 2 -> 3 -> 4 -> 5
