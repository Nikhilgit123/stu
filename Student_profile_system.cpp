# include <iostream>
# include <deque>
//# include <iomanip>
# define size 10
# define password 12345||123||9090||1234321||123456789
using namespace std;
class base
{
  private:
  struct que
  {
    int arr[size];
    int rear,front;

  }q;
  public:
int fun();
void namee();
int full();
int empty();
int insert(int);
int del();
void clas();
void display();
base();

};
base::base()
{
    q.front=-1;
    q.rear=-1;
}
int base::fun()
{
    int a;
    int pass;
    char x;
    string mail;
   
    cout<<"you have already registered ";
    cin>>x;
    if(x=='n'||x=='N')
    {
    cout<<"ok! please fill following form \n";
    cout<<"file:///F:/go.html";
    }
    else
    {
     cout<<"******WELLCOME TO LOGIN ******";
     cout<<"Enter your password \n";
     cin>>pass; 
     if(pass!=password)
     return 1;
     else
      cout<<"Enter your email id \n ";
      cin>>mail;
    }

     
    }

    int base::insert(int da)
    {
        if(q.front=-1)
        q.front++;
      q.arr[++q.rear] = da;
      return q.rear;
    }
    int base::empty()
    {
        if((q.front==-1 && q.rear==-1)||(q.front>q.rear))
        return 1;
        else 
        return 0;

    }
    int base::del()
    {
      int da;
      da = q.arr[q.front];
      q.front++;
      cout<<"This roll number student is   "<<da;

    }
    int  base::full()
    {
      if(q.rear==size-1)
      return 1;
      else
      return 0;

    }
    void base::clas()
    {
      int roll;
      cout<<"Enter roll no \n";
      cin>>roll;
      
    }
    void base::display()
    {
      int i;
      for(i=q.front;i<=q.rear;i++)
      cout<<q.arr[i];

    }
class en:public base
{
  public:
  
     string cl;
     char aa;
     int paid;
     string name;

     int pa;
     int total;
  void fees()
  {
     cout<<"Enter your name \n";
     cin>>name;
     cout<<"Enter your stream \n";
     cin>>cl;
     if(cl=="comp")
     {
      cout<<"Your total fees 50000 per year \n";
      cout<<"How many fees you pay now \n";
      cin>>paid;
      pa=50000-paid;
      //cout<<"Reamining fees == "<<pa<<endl;
       cout<<"Do you want your recipt \n";
      cin>>aa;
      if(aa=='y'||'Y')
      {
               cout<<"Name "<<name<<endl;
         cout<<"Total fees = 50,000 \n";
      cout<<"Paid fees == "<<paid<<endl;
      cout<<"Reamaining fees == "<<pa<<endl;
      }

     }
     else if(cl=="E&TC||e&tc")
     {
      cout<<"Your total fees 40000 per year \n";
      cout<<"How many fees you pay now \n";
      cin>>paid;
      pa=40000-paid;
      //cout<<"Reamining fees == "<<pa<<endl;
       cout<<"Do you want your recipt \n";
      cin>>aa;
      if(aa=='y'||'Y')
      {
               cout<<"Name "<<name<<endl;
         cout<<"Total fees = 40,000 \n";
      cout<<"Paid fees == "<<paid<<endl;
      cout<<"Reamaining fees == "<<pa<<endl;
      }

     }
     else if(cl=="Electrical")
     {
      cout<<"Your total fees 35000 per year \n";
      cout<<"How many fees you pay now \n";
      cin>>paid;
      pa=35000-paid;
    //  cout<<"Remaining fees == "<<pa<<endl;
     cout<<"Do you want your receipt \n";
      cin>>aa;
      if(aa=='y'||'Y')
      {
               cout<<"Name "<<name<<endl;
         cout<<"Total fees = 35,000 \n";
      cout<<"Paid fees == "<<paid<<endl;
      cout<<"Remaining fees == "<<pa<<endl;
      }

     }
     else if(cl=="it||IT")
     {
      cout<<"Your total fees 45000 per year \n";
      cout<<"How many fees you pay now \n";
      cin>>paid;
      pa=45000-paid;
     // cout<<"Reamining fees == "<<pa<<endl;
      cout<<"Do you want your recipt \n";
      cin>>aa;
      if(aa=='y'||'Y')
      {
               cout<<"Name "<<name<<endl;
         cout<<"Total fees = 45,000 \n";
      cout<<"Paid fees == "<<paid<<endl;
      cout<<"Reamaining fees == "<<pa<<endl;
      }

     }
     else if(cl=="civil")
     {
      cout<<"Your total fees 25000 per year \n";
      cout<<"How many fees you pay now \n";
      cin>>paid;
      pa=25000-paid;
      //cout<<"Remaining fees == "<<pa<<endl;
      cout<<"Do you want your receipt \n";
      cin>>aa;
      if(aa=='y'||'Y')
      {
        cout<<"Name "<<name<<endl;
         cout<<"Total fees = 25,000 \n";
      cout<<"Paid fees == "<<paid<<endl;
      cout<<"Remaining fees == "<<pa<<endl;
      }

     }
     else
     cout<<"Sorry please try again \n";

  }
 
};

int main()
{
   base obj;
  en oo;


  int pass;
  char uu;
  int ch;
  char ans;
  int  anis;
  int da;
do 
{
  cout<<"1.attendance(at) \n";
  cout<<"2.fees \n";

  cout<<"Enter your choice \n";
  cin>>anis;
  switch(anis)
  {
    case 1:
   cout<<"*********WELCOME IN MY STUDENT ATTENDANCE PAGE ************ \n";
  cout<<"Generate random pass";
  cin>>pass;
  do 
  {
 
  if(pass==password)
{
   // cout<<"pass is match \n";
  cout<<"1.password maker \n";
  cout<<"2.Insert student (Roll wise) \n";
  cout<<"3.Display student list \n";
  cout<<"4.Display student whose first come in classroom \n";
  cout<<"Enter your choice \n";
  cin>>ch;
  switch(ch)
  {
    case 1:
    obj.fun();
    break;
    case 2:
    if(obj.full())
    cout<<"Sorry our student profile system is full \n";
    else
    {
      cout<<"Enter roll of student \n";
      cin>>da;
    obj.insert(da);
    }
    break;
    case 3:
    if(obj.empty())
    cout<<"No data found sorry \n";
    else 
    obj.display();
    break;
    case 4:
    if(obj.empty())
    cout<<"data no found \n";
    else 
    {
    cout<<"This roll no student is first come in class  \n ";
    obj.del();
    }
    break;
    
    default:
    cout<<"please enter valid data \n";
    break;

  }
  
  cout<<"do you want to continue \n";
  cin>>ans;
}
  }
while(ans=='Y'||ans=='y');
case 2:
oo.fees();
break;
default:
cout<<"try again \n";
break;
  }
  cout<<"Do you want continue \n ";
  cin>>uu;
}
  while(uu=='Y'||uu=='y');

    return 0;
}