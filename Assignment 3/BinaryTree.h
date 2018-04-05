
//
//  BinaryTree.hpp
//  Assignment 3
//
//  Created by Shan Qamruddin on 4/3/18.
//  Copyright © 2018 Shan Qamruddin. All rights reserved.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp

#include "ItemType.h"
#include <stdio.h>

#endif /* BinaryTree_hpp */

struct Node{
    ItemType key;
    Node *left;
    Node *right;
};

class BinaryTree{
    
private:
    int length;
public:
    Node *root;
    BinaryTree();
    ~BinaryTree();
    void insert(Node*& Tree, ItemType &key);
    void deleteItem(Node*& tree, ItemType &key);
    void deleteNode(Node*& tree);
    void getPredecessor(Node* tree, ItemType& data);
    void retrieve(Node* tree, ItemType &item, bool &found) const;
    void preOrder(Node* tree) const;
    void inOrder(Node* tree) const;
    void postOrder(Node* tree) const;
    int getLength() const;
};
