#include<iostream>
#include<fstream>
using namespace std;

struct student
  {
            int rollno;
            char name[50];
            float per;
  }s;
 int main()
{
       int c,ch,rno,flag;
       ofstream outf,outf1;
       outf.open("stud.txt");
       ifstream inf;
       do
        {
         cout<<"\n1.ADD RECOERD\n2.DISPLAY RECORD\n3.DELETE RECORD\n4.MODIFY RECORD\n";
         cout<<"\nENTER YOUR CHOICE\N";
         cin>>ch;
         switch(ch)
          {
                case 1:
                              do
                               {
                                 cout<<"\n";
                                 cout<<"\nenter the roll no ,name and persentage";
                                 cin>>s.rollno>>s.name>>s.per;
                                 outf<<"\t"<<s.rollno<<endl;
                                 outf<<"\t"<<s.name<<endl;
                                 outf<<"\t"<<s.per<<endl;
                                 cout<<"\nDo you want to continue then press 1:";
                                 cin>>c;
                                 }while(c==1);
                                 cout<<"\nRecord added sucessfullY:";
                                 outf.close();
                                 break;
              case 2 : 

                          inf.open("stud.txt");
                         while(!inf.eof());
                        {
                              inf>>s.rollno;
                              inf>>s.name;
                              inf>>s.per;
                              cout<<"\nROLL NO is;"<<s.rollno;
                              cout<<"\nName is:"<<s.name;
                              cout<<"\npersentage is:"<<s.per;
                       }
                       inf.close();
                       break;
              case 3:
                      
                   outf1.open("student.txt");
                   inf.open("stud.txt");
                   cout<<"\nEntr the roll no . u want to delete:";
                   cin>>rno;
                   flag=0;               
                   while(!inf.eof())
                    {
                              inf>>s.rollno;
                              inf>>s.name;
                              inf>>s.per;
                             if(rno==s.rollno)
                             {
                                     flag=1;
                                     cout<<"\nRecord deleted:";
                             }
                             else if(rno!=s.rollno)
                             {
                               outf1<<"\t"<<s.rollno;
                               outf1<<"\t"<<s.name;
                               outf1<<"\t"<<s.per;
                              }
                    }
                   if(flag==0)
                   {
                        cout<<"record is not present";
                   }

                   remove("stud.txt");
                  rename("student.txt","stud.txt");
                  inf.close();
                  outf1.close();
                  break;
          case 4 :
                 outf1.open("student.txt");
                 inf.open("stud.txt");
                 cout<<"\nEnter theroll no. which want to modify:";
                 cin>>rno;
                 flag=0;
                 while(! inf.eof())
                 {
                  inf>>s.rollno;
                  inf>>s.name;
                  inf>>s.per;
                  if(rno==s.rollno)
                  {
                    cout<<"\nEnter the roll no,name and persentage:";
                    cin>>s.rollno>>s.name>>s.per;
                   outf1<<"\t"<<s.rollno;
                   outf1<<"\t"<<s.name;
                   outf1<<"\t"<<s.per;
                   flag=1;
                  }
                 else if(rno!=s.rollno)
                {
                    outf1<<"\t"<<s.rollno;
                    outf1<<"\t"<<s.name;
                    outf1<<"\t"<<s.per;
                }
            }
        inf.close();
        outf1.close();
        if(flag==0)
         {
              cout<<"\nrecord is not present";
         }
        remove("stud.txt");
        rename("student.txt","stud.txt");
        break;
      }
      cout<<"\n wnant to continue:";
      cin>>c;
      }while(c==1);
      return 0;
}


