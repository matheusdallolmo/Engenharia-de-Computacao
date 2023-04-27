#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Node{
    int item;
    struct Node *left;
    struct Node *right;
}Node;

Node* criar(int item){
    Node * tree = (Node *) malloc(sizeof(Node));
    
    tree->item = item;
    tree->left = NULL;
    tree->right = NULL;
        
    return tree;
}

Node* inserir(int item, Node* tree){
    if (tree == NULL)
        tree = criar(item);
    else if (item < tree->item)
        tree->left = inserir(item, tree->left);
    else if (item > tree->item)
        tree->right = inserir(item, tree->right);
        
    return tree;
}

Node* minValueNode(Node* node){
    Node* current = node;
 
    while (current && current->left != NULL)
        current = current->left;
 
    return current;
}

Node* remover(Node* root, int key){
    if (root == NULL)
        return root;
 
    if (key < root->item)
        root->left = remover(root->left, key);
    else if (key > root->item)
        root->right = remover(root->right, key);
    else {
        if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }
 
        Node* temp = minValueNode(root->right);
 
        root->item = temp->item;

        root->right = remover(root->right, temp->item);
    }
    return root;
}

void imprimirPrefix(Node* tree){
    if (tree != NULL){
        printf("%i ", tree->item);
        imprimirPrefix(tree->left);
        imprimirPrefix(tree->right);
    }
}

void liberar_arvore(Node* tree){
    if (tree != NULL){
        liberar_arvore(tree->left);
        liberar_arvore(tree->right);
        free(tree);
    }
}

Node* remover_impares(Node *aux){
   
    if(aux != NULL){
        aux->left = remover_impares(aux->left);
        aux ->right = remover_impares(aux->right);
        
        if(aux->item % 2 != 0)
            aux = remover(aux, aux->item);   
    }   
    return aux;        
}

int main() {
    Node *tree = NULL;
    int n, aux;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &aux);
        tree = inserir(aux, tree);
    }
    
    tree = remover_impares(tree);
    
    imprimirPrefix(tree);
    
    return 0;
}
