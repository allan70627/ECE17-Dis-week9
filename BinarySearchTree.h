//
// Created by User on 11/27/2023.
//

#ifndef UNTITLED6_BINARYSEARCHTREE_H
#define UNTITLED6_BINARYSEARCHTREE_H


class BinaryTree{
private:
    struct Node{
        int val;
        Node* left;
        Node* right;

        Node(int aval, Node* left = nullptr, Node* right = nullptr);

    };
    Node* root;
private:

    void insert(Node* &aNodePtr, Node* &aNewNodePtr);
    void deleteNode(int aVal, Node* &aNodePtr);
    void makeDeletion(Node* &aNodePtr);
public:
    void insertNode(int aVal);
    bool searchNode(int aVal);
    void remove(int aVal)
};
#endif //UNTITLED6_BINARYSEARCHTREE_H
