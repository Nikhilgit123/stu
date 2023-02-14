# include <iostream>
#define size 10
using namespace std;
class nik
{
    private:
   
    public:
    int *floor;
    int room_no;
    string name;
    int *mo;
    int bill;
    int advance_pay;
    nik()
    {
        floor = new int;
        room_no = 0;
        mo;
        bill = 0;
        advance_pay=0;

    }
  

    
};
class hotel:public nik
{
    private:
 struct stack
    {
        int st[size];
        int top;

    }s;
    public:
        void  push_order(char data)
    {
        s.st[s.top]==data;
        s.top++;

    }
    void empty()
    {
        if(s.top==-1)
        cout<<"Sorry No any order in our record \n";

    }
    void display()
    {
        char i;
        for(i=0;i<s.top;i++)
        cout<<"Your order menu are "<<s.st[i];

    }
    void deliver()
    {
        char data;
        data=s.st[s.top];
        s.top--;
        cout<<"Your order are diliverd "<<data;

    }

    void room_rent()
    {
         int ch;
            char an;
            int days;
        cout<<"Wellcome to oak global hotel \n";
        cout<<"Please select your prefered room type \n ";
        do
        {
           
            cout<<"1.first floor Normal persons room range upto 10 to 20k \n";
            cout<<"2.Second floor VIP persons room rent range upto 25 to 40k \n";
            cout<<"3.third floor VMIP persons room rent range upto 35 to 50k \n";
            cout<<"4.fourth floor special for  Party's / any event org  rent range upto 55k to 1L\n";
            cout<<"Enter floor number you want \n";
            cin>>ch;
            switch(ch)
            {
                case 1:
                char cha;
                int cash;
                int total_pr;
               int remaining;
                cout<<"Nice! \n Each day rent price is 1000";
                cout<<" How many days you stay ? \n ";
                cin>>days;
                total_pr=days*1000;
                cout<<"Your total Payble amount is "<<total_pr<<endl;
                cout<<"Any advance payment? y/n\n";
                cin>>cha;
                if(cha=='y')
                {
                    cout<<"How many amount you pay now \n";
                    cin>>cash;
                    remaining = total_pr - cash;
                    cout<<"Total payble amount is "<<remaining<<endl;
                    if(remaining<1000)
                    cout<<"your alloted room no==[1-10] \n";
                    else if(remaining<1500)
                    cout<<"your alloted room no==[1-20] \n ";
                    else if(remaining==total_pr)
                    cout<<"your alloted room no ==[1-100] \n ";
                    else if(remaining<total_pr)
                    cout<<"your alloted room no==[1-46] \n ";
                    else 
                    {
                    cout<<"No alloted any room \n ";
                    cout<<"please pay some amount \n ";
                    }

            
                }
                else
                cout<<"Sorry! You must pay some amount to allocate room \n ";
                break;
                case 2:
                cout<<"Nice! \n Each day rent price is 2000";
                cout<<" How many days you stay ? \n ";
                cin>>days;
                total_pr=days*2000;
                cout<<"Your total Payble amount is "<<total_pr<<endl;
                cout<<"Any advance payment? y/n\n";
                cin>>cha;
                if(cha=='y')
                {
                    cout<<"How many amount you pay now \n";
                    cin>>cash;
                    remaining = total_pr - cash;
                    cout<<"Total payble amount is "<<remaining<<endl;
                    if(remaining<2000)
                    cout<<"your alloted room no==[2-10] \n";
                    else if(remaining<2300)
                    cout<<"your alloted room no==[2-20] \n ";
                    else if(remaining==total_pr)
                    cout<<"your alloted room no ==[2-100] \n ";
                    else if(remaining<total_pr)
                    cout<<"your alloted room no==[2-46] \n ";
                    else 
                    {
                    cout<<"No alloted any room \n ";
                    cout<<"please pay some amount \n ";
                    }

            
                }
                else
                cout<<"Sorry! You must pay some amount to allocate room \n ";
                break;
                case 3:
                cout<<"Nice! \n Each day rent price is 3000";
                cout<<" How many days you stay ? \n ";
                cin>>days;
                total_pr=days*3000;
                cout<<"Your total Payble amount is "<<total_pr<<endl;
                cout<<"Any advance payment? y/n\n";
                cin>>cha;
                if(cha=='y')
                {
                    cout<<"How many amount you pay now \n";
                    cin>>cash;
                    remaining = total_pr - cash;
                    cout<<"Total payble amount is "<<remaining<<endl;
                    if(remaining<3000)
                    cout<<"your alloted room no==[3-10] \n";
                    else if(remaining<3000)
                    cout<<"your alloted room no==[3-20] \n ";
                    else if(remaining==total_pr)
                    cout<<"your alloted room no ==[3-100] \n ";
                    else if(remaining<total_pr)
                    cout<<"your alloted room no==[3-46] \n ";
                    else 
                    {
                    cout<<"No alloted any room \n ";
                    cout<<"please pay some amount \n ";
                    }

            
                }
                else
                cout<<"Sorry! You must pay some amount to allocate room \n ";
                 break;
                 case 4:
                 cout<<"Nice! \n Each day rent price is 10000";
                cout<<" How many days you stay ? \n ";
                cin>>days;
                total_pr=days*10000;
                cout<<"Your total Payble amount is "<<total_pr<<endl;
                cout<<"Any advance payment? y/n\n";
                cin>>cha;
                if(cha=='y')
                {
                    cout<<"How many amount you pay now \n";
                    cin>>cash;
                    remaining = total_pr - cash;
                    cout<<"Total payble amount is "<<remaining<<endl;
                    if(remaining<6000)
                    cout<<"your alloted room no==[4-10] \n";
                    else if(remaining<1500)
                    cout<<"your alloted room no==[4-20] \n ";
                    else if(remaining==total_pr)
                    cout<<"your alloted room no ==[4-100] \n ";
                    else if(remaining<total_pr)
                    cout<<"your alloted room no==[4-46] \n ";
                    else 
                    {
                    cout<<"No alloted any room \n ";
                    cout<<"please pay some amount \n ";
                    }

            
                }
                else
                cout<<"Sorry! You must pay some amount to allocate room \n ";
                 break;



            }
            cout<<"Do you want to rent any other room extra \n ";
            cin>>an;
        }
        while(an=='y'||an=='Y');
    }
//room rent completed
void order()
{
    char ds;
    char data;
    int xx;
      int z;
    do 
{

    
    cout<<"****Menu Bar **** \n";
    cout<<"Breakfast \n ";
    cout<<"1.pizza \n 2.Burger \n 3.Sandwich \n 4.Tea/coffie \n 5.snack \n\n ";
    cout<<"Lunch \n";
    cout<<"1.veg \n 2.non-veg \n ";
    cout<<"Enter your choice \n" ;
    cin>>xx;
    switch (xx)
    {
        case 1:
      
       // do 
      //  {
        cout<<"Please choose order in given menu \n ";
        cin>>data;
        if(data=='p')
        {
        cout<<"pizza \n ";
        push_order(data);
        }
        else if(data=='B'||'b')
        {
        cout<<"Burger \n ";

        cout<<"Order is recived \n";
        push_order(data);
        }
        else if(data == 'v')
        {
        cout<<"veg \n ";
        cout<<"Order is resived \n";
        push_order(data);
        }
        else if(data=='n-v')
        {
            cout<<"non-veg \n ";
        cout<<"order is recievd \n";
        push_order(data);
        }
        else 
        cout<<"No any order recived \n ";

      //  cout<<"Any another order \n ";
      //  cin>>z;
       // }
       // while(z=='Y'||z=='y');
    
    
    
    break;
    case 2:
        cout<<"Your order servicing is on the way\n ";
        cout<<"Your order is "<<data;
        //display();
        cout<<"Order is successfully served \n THANK YOU \n ";


    break;
    case 3:
        char ss;
        cout<<"Your list you want to see ? \n ";
        cin>>ss;
        if(ss=='y')
        display();
        else
        cout<<"No problem \n";
        break;

    }
   cout<<"Do you have next order \n ";
   cin>>ds;
}
while(ds=='Y'||ds=='y');
}


};
class good:public nik,public hotel{
    public:
    int adhar;

};
int main()
{
    int ch;
    char ans;
    nik obj;
    hotel ob;

    do 
    {
    cout<<"Enter your chioce \n";
    cin>>ch;
    switch (ch)
    {
    case 1:
    ob.room_rent();
    break;
    case 2:
    ob.order();
    break;
    }
    cout<<"Do you want to meet again to hotel management \n ";
    cin>>ans;
    }
    while(ans=='Y'||ans=='y');

    return 0;
}