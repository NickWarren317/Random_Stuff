#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int val;
    int key;
    struct node *right;
    struct node *left;
};

struct node *head;

void addNum(int x){
    struct node *current;
    current = head;
    while(current != NULL){
        if(x > current->key){
            current = current->right;
        }
    }
    current = malloc(sizeof(current));
    current->val = x;
}

void printTree(struct node *node){
    if(node == NULL) return;
    printf("%d ", node->val);
    printTree(node->right);
    printTree(node->left);
}
int main(){
    addNum(1);
    addNum(4);
    addNum(2);
    addNum(5);
    addNum(3);
    printTree(head);
}