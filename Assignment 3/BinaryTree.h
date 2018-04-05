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
    Node *root;
    int length;
public:
    BinaryTree();
    ~BinaryTree();
    void insert(ItemType &key);
    void deleteItem(ItemType &key);
    void retrieve(ItemType &item, bool &found) const;
    void preOrder() const;
    void inOrder() const;
    void postOrder() const;
    int getLength() const;
};
