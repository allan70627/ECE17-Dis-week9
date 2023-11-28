//
// Created by User on 11/27/2023.
//
#include "BinarySearchTree.h"



void BinaryTree::insert(BinaryTree::Node *&aNodePtr, BinaryTree::Node *&aNewNodePtr) {

    if(aNodePtr == nullptr){
        aNodePtr = aNewNodePtr;
    }
    else if(aNewNodePtr->val, aNodePtr->val){
        insert(aNodePtr->left, aNewNodePtr);
    }
    else{
        insert(aNodePtr->right, aNewNodePtr);
    }

}

void BinaryTree::deleteNode(int aVal, BinaryTree::Node *&aNodePtr) {
    if(aVal < aNodePtr->val){
        deleteNode(aVal, aNodePtr->left);
    }
    else if(aVal > aNodePtr->val){
        deleteNode(aVal, aNodePtr-> right);
    }
    else{
        makeDeletion(aNodePtr);
    }
}

void BinaryTree::makeDeletion(BinaryTree::Node *&aNodePtr) {
    Node* tempNodePtr = nullptr;
    if(aNodePtr == nullptr){
        std::cout << "Cannot remove empty Node" << std::endl;
    }
    else if(aNodePtr->right == nullptr){
        tempNodePtr = aNodePtr;
        aNodePtr = aNodePtr->left;
        delete tempNodePtr;
    }
    else if(aNodePtr->left == nullptr){
        tempNodePtr = aNodePtr;
        aNodePtr = aNodePtr->right;
        delete tempNodePtr;
    }
    else{
        tempNodePtr = aNodePtr->right;

        while(tempNodePtr->left){
            tempNodePtr = tempNodePtr->left;
        }

        tempNodePtr->left = aNodePtr->left;

        tempNodePtr = aNodePtr;
        aNodePtr = tempNodePtr->right;

        delete tempNodePtr;
    }

}

void BinaryTree::insertNode(int aVal) {

}

bool BinaryTree::searchNode(int aVal) {
    Node* currentNode = root;
    while(currentNode){
        if(currentNode->val == aVal{
            return true;
        }
        else if(aVla<currentNode->val){
            currentNode = current->left;
        }
        else{
            currentNode = currentNode->right;
        }
    }
    return false;
}

void BinaryTree::remove(int aVal) {
    deleteNode(aVal, root);
}

BinaryTree::Node::Node(int aval, BinaryTree::Node *left, BinaryTree::Node *right) {
    val = aVal;
    left = aLeft;
    right = aRight;
}