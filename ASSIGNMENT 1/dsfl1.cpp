#include<iostream>
using namespace std;
struct nodestack
{
int data;
nodestack *next;
};
class stack
{
	public:
	
	nodestack *top;
	void createstack();
	void push(int);
	int pop();
	bool isempty();
	int stacktop();
	
};
	void stack::createstack()
	{
		top=NULL;
	}
	bool stack::isempty()
	{
		return(top==NULL);
	}
	void stack::push(int newitem)
	{
		nodestack *newnode;
		newnode=new(nodestack);
		if(newnode==NULL)
		cout<<"cannot allocate memory";
		newnode->data=newitem;
		newnode->next=top;
		top=newnode;
	}
	int stack::pop()
	{ 
		int flag1=0;
		nodestack *delnode;
		if(isempty())
		{
		//cout<<"stack is empty";
		flag1=flag1+1;
		
      //return 1;
		}
		else
		{
		delnode=top;
		top=delnode->next;
		delete(delnode);
		//return 0;
		}
		//return 0;
	}
int main()
{
	char input[20],ch;
	int i;
	int flag=0;
	int flag1=0;
	cout<<"enter the input";
	cin>>input;
stack s;
s.createstack();
	for(i=0;input[i]!='\0';i++)
	{
		ch=input[i];
		if(ch=='(')
		{
			s.push(ch);
		}
		else
		{
			if(ch==')')
			{
			flag=s.pop();
			}
		}
	}
if(s.isempty()&&flag==0)
{
	if(flag1<1)
		{
			cout<<"welformness of stack";
		}
	else
		{
			cout<<"not welformness of stack";
		}
}
else
cout<<"not welformness of stack";
return 0;
}


		
