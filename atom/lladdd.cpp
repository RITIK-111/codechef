#include<bits/stdc++.h>
using namespace std;
class Node {
public:
  int data;
  Node* next;
};
void printList(Node* n ){
  while(n != NULL){
    cout << n->data<<"\n";
    n = n->next ;
  }
}
int main()
{
  Node* head1 =NULL ;
  Node* first1= NULL ;
  Node* second1 = NULL;

  head1 = new Node();
  first1 =new Node();
  second1 = new Node();

  head1->data = 2;
  head1->next = first1;
  first1->data = 4;
  first1->next = second1;
  second1->data = 3 ;
  second1->next = NULL;

  Node* head2 =NULL ;
  Node* first2= NULL ;
  Node* second2 = NULL;

  head2 = new Node();
  first2 =new Node();
  second2 = new Node();

  head2->data = 4;
  head2->next = first1;
  first2->data = 6;
  first2->next = second1;
  second2->data = 4 ;
  first2->next = NULL;
  Node* ptr;

  ptr = head1;
  printList(head1);


  return 0;
}
