#include "bits/stdc++.h"
using namespace std;

class Node{
    public:
        int key;
        int data;
        Node* next;

        Node()
        {
            key=0;
            data=0;
            next=NULL;
        }
        Node(int k,int d)
        {
            key=k;
            data=d;
        }
};

class SinglyLinkedList{
    public:
        Node* head;

        SinglyLinkedList()
        {
            head=NULL;
        }
        SinglyLinkedList(Node *n)
        {
            head=n;
        }
// 1.check if node exists using key value
        Node* nodeExists(int k)
        {
            Node* temp=NULL;
            Node* ptr=head;
            while(ptr!=NULL)
            {
                if(ptr->key==k)
                {
                    temp=ptr;
                }
                ptr=ptr->next;
            }
            return temp;
        }
// 2.Append a node to the list
    void appendNode(Node* n)
    {
        if(nodeExists(n->key)!=NULL)
        {
            cout<<"Node already exists with key value : "<<n->key<<".Append another node  with different key value"<<endl;
        }
        else
        {
            if(head==NULL){
                head=n;
                cout<<"Node appended"<<endl;
            }
            else
            {
                Node* ptr=head;
                while(ptr->next!=NULL)
                {
                    ptr=ptr->next;
                }
                ptr->next=n;
                cout<<"Node Appended"<<endl;
            }
            
        }
    }
    // 3.Prepend Node-Attach Node at Start
    void prependNode(Node* n)
    {
        if (nodeExists(n->key)!=NULL)
        {
            cout<<"Node already exists with key value : "<<n->key<<".Append another node  with different key value"<<endl;
        }
        else
        {
            n->next=head;
            head=n;
            cout<<"Node Prepended"<<endl;
        }
        
    }
// 4.Insert a node at any position after any node in the list
    void insertNodeAfter(int k,Node* n)
    {
        Node* ptr=nodeExists(k);
        if(ptr==NULL)
        {
            cout<<"No Node exists with key value : "<<k<<endl; 
        }
        else
        {
            if (nodeExists(n->key)!=NULL)
            {
                cout<<"Node already exists with key value : "<<n->key<<".Append another node  with different key value"<<endl;
            }
            else
            {
                n->next=ptr->next;
                ptr->next=n;
                cout<<"Node inserted "<<endl;
            }
        }
    }
// 5.Delete  Node by using unique key
    void deleteNodeByKey(int k)
    {
        if(head==NULL)
        {
            cout<<"Empty list"<<endl;
        }
        else if(head!=NULL)
        {
            if(head->key==k)
            {
                head=head->next;
                cout<<"Node Unlinked with key value : "<<k<<endl;
            }
            else
            {
               Node* temp=NULL;
               Node* prevptr=head;
               Node* currptr=head->next;
               while (currptr!=NULL)
               {
                   if(currptr->key!=k)
                   {
                       temp=currptr;
                       currptr=NULL;
                   }
                   else
                   {
                       prevptr=prevptr->next;
                       currptr=currptr->next;
                   }
               }
               if(temp!=NULL)
               {
                   prevptr->next=temp->next;
                    cout<<"Node Unlinked with key value : "<<k<<endl;
               }
               else
               {
                   cout<<"Node doesn't exist with key value : "<<k<<endl;
               }  
            }
            
        }
    }
// 6.Update node by  a given key 
   void updateNodeByKey(int k,int d)
   {
       Node* ptr=nodeExists(k);
       if(ptr!=NULL)
       {
           ptr->data=d;
           cout<<"Node Data updated successfully"<<endl;
       }
       else
       {
           cout<<"Node doesn't exist with key value"<<endl;
       }
   }
// 7.printing SLL
    void printList()
    {
        if(head==NULL)
        {
            cout<<"No Nodes in singly linked list  "<<endl;
        }
        else
        {
           cout<<endl<<"Singly linked list values : "<<endl;
           Node* temp=head;
           while(temp!=NULL){
               cout<<"("<<temp->key<<","<<temp->data<<")-->";
               temp=temp->next;
           } 
           cout<<"\n";
        }
        
    }

};

int main()
{
    SinglyLinkedList s;
    int option;
    int key1,k1,data1;
    do{
      cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. appendNode()" << endl;
    cout << "2. prependNode()" << endl;
    cout << "3. insertNodeAfter()" << endl;
    cout << "4. deleteNodeByKey()" << endl;
    cout << "5. updateNodeByKey()" << endl;
    cout << "6. print()" << endl;
    cout << "7. Clear Screen" << endl << endl;

    cin>>option;
    Node* n1=new Node();
    // Node n1;
    switch(option)
    {
        case 0: 
            break;
        case 1 : 
            cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
            cin >> key1;
            cin >> data1;
            n1->key=key1;
            n1->data=data1;
            s.appendNode(n1);
            break;
        case 2 :  
              cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
                cin >> key1;
                cin >> data1;
                n1->key=key1;
                n1->data=data1;
                s.prependNode(n1);
                break;
        case 3 : 
             cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
            cin >> k1;
            cout << "Enter key & data of the New Node first: " << endl;
            cin >> key1;
            cin >> data1;
            n1 -> key = key1;
            n1 -> data = data1;
            s.insertNodeAfter(k1,n1);
            break;
        case 4 : 
            cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
            cin >> k1;
            s.deleteNodeByKey(k1);
            break;
        case 5:  
                cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
                cin >> key1;
                cin >> data1;
                s.updateNodeByKey(key1,data1);
                break;
        case 6 : 
                s.printList();
                break;
        case 7 : 
                system("cls");
                break;
        default:
             cout<<"Enter a correct option"<<endl;
    }
    }while (option!=0);
    return 0;
}