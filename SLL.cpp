//ZhafirahNurShadrinaPutri
//G1A021028
//SLL
#include <iostream>
#include <iomanip>
using namespace std;

struct node
{
      int data;
      node* next; 
};

node* head;
node* tail;
node* curr;
node* entry;
node* del;

void inisialisasi()
{
      head = NULL;
      tail = NULL;
}

void input(int dt)
{
      entry = (node* )malloc(sizeof(node)); 
      entry->data = dt;
      entry->next = NULL;
      if(head==NULL)
      {
            head = entry;
            tail = head;
      }
      else
      {
            tail->next = entry;
            tail = entry;
      }
}

void hapus()
{
      int simpan;
      if(head==NULL)
      {
            cout<<"\nlinked list is empty, deletion cannot be done"<<endl;
      }
      else
      {
            simpan  = head ->data;
            del = head;
            head = head->next;
            delete del;
           
            cout<<"\nthe deleted data is "<<simpan<<endl;
      }

}

void cetak()
{
      curr = head;
      if(head == NULL)
            cout<<"\nno data in linked list"<<endl;
      else
      {
            cout<<"\nthe data in the linked list is"<<endl;
            cout<<setw(6);
            while(curr!=NULL)
            {
                  cout<<curr->data<<"->";
                  curr = curr->next;
            }
cout<<"NULL";
            cout<<endl;
      }
}

void menu()
{
      char pilih, ulang;
      int data;

      do
      {
      system("cls");
      cout<<"SINGLE LINKED LIST NON CIRCULAR"<<endl;
      cout<<"-------------------------------"<<endl;
      cout<<"Menu : "<<endl;
      cout<<"1. Insert data"<<endl;
      cout<<"2. Clear data"<<endl;
      cout<<"3. Print Data"<<endl;
      cout<<"4. Exit"<<endl;
      cout<<"Enter your choice : ";
      cin>>pilih;

      switch(pilih)
      {
      case '1' :
            cout<<"\nInsert data : ";
            cin>>data;
            input(data);
            break;
      case '2' :
            hapus();
            break;
      case '3' :
            cetak();
            break;
      case '4' :
            exit(0);
            break;
      default :
            cout<<"\nRe-select"<<endl;
      }
      cout<<"\nback to menu?(y/n)";
      cin>>ulang;
      }while(ulang=='y' || ulang=='Y');
}


int main()
{

      inisialisasi();
      menu();

      return EXIT_SUCCESS;
}