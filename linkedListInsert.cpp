#include <iostream>


struct Node{
  int data;
  Node *next;
};

Node *head;

void insert(int data, int n);
void print();

int main(){
  head = NULL;
  insert(5,1);
  insert(7,2);
  insert(9,3);
  insert(90,4);
  insert(4,2);
  print();
  return 0;
}


void insert(int data, int n){
  Node* temp1 = new Node();
  temp1 -> data = data;
  temp1 -> next = NULL;
  if(n==1){
    temp1 -> next = head;
    head = temp1;
    return;
  }
  Node* temp2 = head;
  for(int i = 0; i<n-2;i++){
    temp2 = temp2 -> next;
  }
  temp1 -> next = temp2 -> next;
  temp2 -> next = temp1;
}

void print(){
  Node* temp = head;
  while(temp != NULL){
    cout << temp -> data << " ";
    temp = temp -> next;
  }
}
