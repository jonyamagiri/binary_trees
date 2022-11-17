## 0x1D. C - Binary trees

> This repository contains the tasks for `C - Binary trees` project and a description of what each program or function does:

### Tasks

#### Task: 0-binary_tree_node.c
Write a function that creates a binary tree node

#### Task: 1-binary_tree_insert_left.c
Write a function that inserts a node as the left-child of another node

#### Task: 2-binary_tree_insert_right.c
Write a function that inserts a node as the right-child of another node

#### Task: 3-binary_tree_delete.c
Write a function that deletes an entire binary tree

#### Task: 4-binary_tree_is_leaf.c
Write a function that checks if a node is a leaf

#### Task: 5-binary_tree_is_root.c
Write a function that checks if a given node is a root

#### Task: 6-binary_tree_preorder.c
Write a function that goes through a binary tree using pre-order traversal

#### Task: 7-binary_tree_inorder.c
Write a function that goes through a binary tree using in-order traversal

#### Task: 8-binary_tree_postorder.c
Write a function that goes through a binary tree using post-order traversal

#### Task: 9-binary_tree_height.c
Write a function that measures the height of a binary tree

#### Task: 10-binary_tree_depth.c
Write a function that measures the depth of a node in a binary tree

#### Task: 11-binary_tree_size.c
Write a function that measures the size of a binary tree

#### Task: 12-binary_tree_leaves.c
Write a function that counts the leaves in a binary tree

#### Task: 13-binary_tree_nodes.c
Write a function that counts the nodes with at least 1 child in a binary tree

#### Task: 14-binary_tree_balance.c
Write a function that measures the balance factor of a binary tree

#### Task: 15-binary_tree_is_full.c
Write a function that checks if a binary tree is full

#### Task: 16-binary_tree_is_perfect.c
Write a function that checks if a binary tree is perfect

#### Task: 17-binary_tree_sibling.c
Write a function that finds the sibling of a node

#### Task: 18-binary_tree_uncle.c
Write a function that finds the uncle of a node

#### Task: 100-binary_trees_ancestor.c
Write a function that finds the lowest common ancestor of two nodes

#### Data structure and functions for this project:

#### Basic binary tree
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

#### Binary search tree
```
typedef struct binary_tree_s bst_t;
```

#### AVL tree
```
typedef struct binary_tree_s avl_t;
```

#### Max Binary Heap
```typedef struct binary_tree_s heap_t;
```

___

#### Files:

* [test_files](https://github.com/jonyamagiri/binary_trees/tree/master/test_files)


