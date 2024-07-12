#include<iostream>
using namespace std;
int H[10];
int size=-1;
 int parent(int i)
{
 return (i-1)/2;
}
 int leftchild(int i)
{
 return((2*i)+1);
}
 int rightchild(int i)
{
 return((2*i)+2);
}

 void shiftup(int i)
{
 while(i>0 && H[parent(i)]<H[i])
{
 swap (H[parent(i)],H[i]);
 i=parent(i);
}
 {
  int maxindex=1;
 }
}
  void shiftdown(int i)
{
 int maxindex=1;
 int l=leftchild(i);
 if(l<=size && H[l]>H[maxindex])
{
  maxindex=l;
}
 int r=rightchild(i);
 if(r<=size && H[r]>H[maxindex])
{
  maxindex=r;
}
 if (i!=maxindex)
{
 swap(H[i],H[maxindex]);
}
}
 void insert(int p)
{
 size=size+1;
 H[size]=p;
shiftup(size);
}
 int extract_max()
{
   int result=H[0];
   H[0]=H[size];
   size=size-1;
   shiftdown(0);
   return result;
}

 void change_priority(int i, int p)
{
 int oldp=H[i];
 H[i]=p;
 if(p>oldp)
 {
  shiftup(i);
 }
 else
 {
  shiftdown(i);
 }
}
 int getmax()
 {
  return H[0];
	
 }
  void remove(int i)
{
  H[i]=getmax()+1;
  shiftup(i);
  extract_max();
}
 int main()
{
 int data,pos,pos1,element,c,c1,ch;
int i=0,j=0,k=0,l=0;
do
     {
	cout<<"\nadd the element in the queue\n2.priority queue \n 3.node with maximum priority \n priority queue after extracting maximum\n 		 change the priority \n remove the element\n";
   cout<<"enter your choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			do
			{
				cout<<"\nenter the data:";
				cin>>data;
				insert(data);
				cout<<"\n add more data? if yes then press 1:";
				cin>>c;
			}while(c==1);
			break;
		case 2:
			cout<<"priority queue:";
			while(i<= size) {
				cout<<H[i]<< " ";
				i++;
			}
			break;
		case 3:
        cout<<"\n";
			cout<<"node with maximum priority:"
			<< extracMax()<< "\n";
			break;
		case 4:
			cout<<"priority queue after:"
			<<"extracting maximum:";
			while(j<=size)
			{
				cout(j<=size){
				cout<<H[j]<<" ";
				j++;
			}
			break;
		case 5:
        cout<<"\n";
			cout<<"enter the position and elements to change the priority\n";
			cin>>pos>>element;
			changePriority(pos,element);
			cout<<"priority queue after "
			<<"priority change :";
			while(k<=size) {
				cout<<H[k]<<" ";
				k++;
			}
			break;
		case 6:
			cout<<"\n";
			cout<<"enter the position to delete the element from priority queue";
			cin>>pos1;
			remove(pos1);
			cout<<"priority queue after removing the element:";
			while(l<=size){
				cout<<H[l]<<" ";
				l++;
			}
			break;
}
cout<<"\n do you want to continue the press 1:";
cin>>c1;
}
while(c1==1)
return 0;
}
