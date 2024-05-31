
#include <stdio.h>
#include<stdlib.h>

 struct node
{
    int data;
    int ch;
    struct node*ptr;
};
int main() 
{
    
   struct node obj1, obj2,obj3;
   
   
   obj1.data=65;
   obj1.ch='A';
   obj1.ptr=NULL;
   
    
   obj2.data=66;
   obj2.ch='b';
   obj2.ptr=NULL;
   
    
   obj3.data=67;
   obj3.ch='C';
   obj3.ptr=NULL;
   
   obj1.ptr=&obj2;
   obj2.ptr=&obj3;
   
   
   printf("%d\t%c\n",obj1.ptr->data,obj1.ptr->ch);
   printf("%d\t%c",obj2.ptr->data,obj2.ptr->ch);
   
   
    return 0;
    
}