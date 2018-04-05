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
    root = NULL;
    length = 0;
}

BinaryTree::~BinaryTree(){
}

//void BinaryTree::destroy(Node*& tree){
//    if(tree != NULL){
//        destroy(tree->left);
//        destroy(tree->right);
//        delete tree;
//    }
//}

void BinaryTree::insert(Node*& Tree, ItemType &key){
    bool duplicate = false;
    retrieve(Tree, key, duplicate);
    if(duplicate == false){
        if(Tree == NULL){
            Tree = new Node;
            Tree->right = NULL;
            Tree->left = NULL;
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

void BinaryTree::deleteItem(Node*& tree, ItemType &key){
    if(key.getValue() < tree->key.getValue()){
        deleteItem(tree->left, key);
    }
    else if(key.getValue() > tree->key.getValue()){
        deleteItem(tree->right, key);
    }
    else
        deleteNode(tree);
}

void BinaryTree::deleteNode(Node*& tree){
    ItemType data;
    Node* tempPtr;
    tempPtr = tree;
    if(tree->left == NULL){
        tree=tree->right;
        delete tempPtr;
    }
    else if(tree->right == NULL){
        tree = tree->left;
        delete tempPtr;
    }
    else{
        getPredecessor(tree->left, data);
        tree->key = data;
        deleteItem(tree->left, data);
    }
}

void BinaryTree::getPredecessor(Node* tree, ItemType& data){
    while(tree->right != NULL){
        tree = tree->right;
    }
    data = tree->key;
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
    if (tree != NULL)
    {
        std::cout << tree->key.getValue() << " ";
        preOrder(tree->left);
        preOrder(tree->right);
    }
}

void BinaryTree::inOrder(Node* tree) const{
    if (tree != NULL)
    {
        inOrder(tree->left);
        std::cout << tree->key.getValue() << " ";
        inOrder(tree->right);
    }
}

void BinaryTree::postOrder(Node* tree) const{
    if (tree != NULL)
    {
        postOrder(tree->left);
        postOrder(tree->right);
        std::cout << tree->key.getValue() << " ";
    }
}



int BinaryTree::getLength() const{
    return 0;
}

