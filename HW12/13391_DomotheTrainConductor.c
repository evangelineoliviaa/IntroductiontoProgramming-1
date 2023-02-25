#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct node {
    int idx;
    struct node* next;
} Node;

void AddFront(Node** head, Node** back, int num){
    Node* new_node;
    new_node = malloc(sizeof(Node));
    new_node->idx  = num;
    new_node->next = NULL;
    if ((*head)==NULL)
    {
        (*head) =  new_node;
        (*back) =  new_node;
    }else{
        new_node->next = (*head);
        (*head) = new_node;
    }
}
void AddBack(Node** head, Node** back, int num){
    Node* new_node;
    new_node = malloc(sizeof(Node));
    new_node->idx  = num;
    new_node->next = NULL;
    if ((*back)==NULL)
    {
        (*head) =  new_node;
        (*back) =  new_node;
    }else{
        (*back)->next = new_node;
        (*back) = new_node;
    }
}
void DeleteFront(Node** head, Node** back){
    struct node *temp;
    if((*head)!=NULL){
        if (*head==*back){
            temp = (*head);
            free(temp);
            *head=NULL;
            *back=NULL;
        }else
        {
            temp = (*head);
            (*head) = (*head)-> next;
            free(temp);
        }
    }
}
void Delete(Node** head, Node** back, int num){
    struct node *temp = (*head),*prev;
    if (temp != NULL && temp->idx == num) {
        (*head) = temp->next; // Changed head
        free(temp); // free old head
        return;
    }while (temp != NULL && temp->idx!= num) {
        prev = temp;
        temp = temp->next;
    }if (temp == NULL)
        return;
 
    // Unlink the node from linked list
    prev->next = temp->next;
 
    free(temp);
}
void Swap(Node** head, Node** back){
    Node *asalHead = *head;

    (*head)=NULL;
    (*back)=NULL;

    while(asalHead!=NULL)
    {
        AddFront(&(*head),&(*back),asalHead->idx);
        Node *temp = asalHead;
        asalHead = asalHead->next;
        free(temp);
    }
}

int main()
{
    char str[50];
    
    Node* head = (Node*) malloc(sizeof(Node));
    Node* back = head;
    // initialize the dummy head
    
    // we'll append the element after this dummy head to avoid runtime error.
    head->idx = -1;
    head->next = NULL;
    
    while (scanf("%s", str) != EOF) {
        
        int num;
        
        if (!strcmp(str, "AddFront")) {
            scanf("%d", &num);
            AddFront(&head, &back, num);
        }
        else if (!strcmp(str, "AddBack")) {
            scanf("%d", &num);
            AddBack(&head, &back, num);
        }
        else if (!strcmp(str, "DeleteFront")) {
            DeleteFront(&head, &back);
        }
        else if (!strcmp(str, "Delete")) {
            scanf("%d", &num);
            Delete(&head, &back, num);
        }
        else if (!strcmp(str, "Swap")) {
            Swap(&head, &back);
        }
    }
    
    // print all the element except the dummy head and free them.
    Node* print = head;
         
    if (head->next == NULL) printf("empty\n");
    
    while (print != NULL) {
        if (print->idx != -1)
            printf("%d%c", print->idx, (print->next == NULL ? '\n' : ' '));
        
        Node* del = print;
        print = print->next;
        free(del);
    }
}
