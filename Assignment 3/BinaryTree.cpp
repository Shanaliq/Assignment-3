//
//  BinaryTree.cpp
//  Assignment 3
//
//  Created by Shan Qamruddin on 4/3/18.
//  Copyright © 2018 Shan Qamruddin. All rights reserved.
//

#include "BinaryTree.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


BinaryTree::BinaryTree(){
    root = nullptr;
    length = 0;
}

BinaryTree::~BinaryTree(){
    
}

void BinaryTree::insert(Node*& Tree, ItemType &key){
    bool duplicate = false;
    retrieve(Tree, key, duplicate);
    if(duplicate == false){
        if(Tree == nullptr){
            Tree = new Node;
            Tree->right = nullptr;
            Tree->left = nullptr;
            Tree->key = key;
        }
        else if(key.getValue() < Tree->key.getValue()){
            insert(Tree->left, key);
        }
        else{
            insert(Tree->right,key);
        }
    }
}

void BinaryTree::deleteItem(Node* tree, ItemType &key){
    
}

void BinaryTree::retrieve(Node* tree, ItemType &item, bool &found) const{
    if(tree == NULL){
        found = false;
    }
    else if(item.getValue() < tree->key.getValue()){
        retrieve(tree->left, item, found);
    }
    else if(item.getValue()>tree->key.getValue()){
        retrieve(tree->right, item, found);
    }
    else{
        item = tree->key;
        found = true;
    }
}

void BinaryTree::preOrder(Node* tree) const{
    if (tree != nullptr)
    {
        std::cout << tree->key.getValue() << " ";
        preOrder(tree->left);
        preOrder(tree->right);
    }
}

void BinaryTree::inOrder(Node* tree) const{
    if (tree != nullptr)
    {
        inOrder(tree->left);
        std::cout << tree->key.getValue() << " ";
        inOrder(tree->right);
    }
}

void BinaryTree::postOrder(Node* tree) const{
    if (tree != nullptr)
    {
        postOrder(tree->left);
        postOrder(tree->right);
        std::cout << tree->key.getValue() << " ";
    }
}



int BinaryTree::getLength() const{
    return 0;
}

