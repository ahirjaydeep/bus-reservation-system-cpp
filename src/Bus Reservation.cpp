//
//  Project.cpp
//  CPP
//
//  Created by Jaydeep Ahir on 13/07/24.
//

#include<iostream>

using namespace std;
class savebusinfo
{
    public:
    int i;
    string busno[20];
    string arrival[20];
    string type[20];
    string to[20];
    string from[20];
    savebusinfo()
    {
        from[1]="Matana madh";
        from[2]="Bhuj";
        from[3]="Bhuj";
        from[4]="Bhuj";
        from[5]="Narayan sarovar";
        to[1]="Amreli";
        to[2]="Kodinar";
        to[3]="Porbandar";
        to[4]="Gandhinagar";
        type[1]="Sleeper";
        type[2]="Luxary";
        type[3]="Luxary";
        type[4]="AC Sleeper";
        type[5]="Sleeper";
        busno[1]="GJ-18-Z-9951";
        busno[2]="GJ-18-Z-9983";
        busno[3]="GJ-18-Z-8522";
        busno[4]="GJ-18-Z-7626";
        busno[5]="GJ-18-Z-9591";
        arrival[1]="6:30 PM";
        arrival[2]="9:00 PM";
        arrival[3]="9:15 PM";
        arrival[4]="10:00 PM";
        arrival[5]="7:15 PM";
    }
    void disinfo()
    {
    for(i=1;i<=4;i++)
        {
            cout<<i<<endl;
            cout<<from[i]<<" to "<<to[i]<<endl;
            cout<<"Bus No.:"<<busno[i]<<endl;
            cout<<"Type:"<<type[i]<<endl;
            cout<<"Arrival Time:"<<arrival[i]<<endl<<endl;
        }
    }
};
class booking:public savebusinfo
{
    public:
    char confirm;
    int choice;
    string compare[10];
    string avail[5];
    int booked[89];

    void userchoice()
    {
        cout<<"Enter bus info no. to book:";
        cin>>choice;
    }
    void dischoice()
    {
        cout<<"__________________________________"<<endl;
        cout<<from[choice]<<" to "<<to[choice]<<endl;
        cout<<"Bus No.:"<<busno[choice]<<endl;
        cout<<"Type:"<<type[choice]<<endl;
        cout<<"Arrival Time:"<<arrival[choice]<<endl;
        cout<<"__________________________________"<<endl;
    }
    void disroute()
    {
        cout<<"Your's Bus Routes"<<endl;
        if(choice==1)
        {
            cout<<"\nMata No Madh\nRavapar\nNakhatrana      \nBhuj     \nAnjar      \nAdipur      \nGandhidham      \nBhachau \nSamakhyali\nMorbi    \nTankara      \nRajkot      \nAmreli"<<endl;
        }
        else if(choice==2)
        {
            cout<<"\nBhuj      \nAnjar      \nAdipur      \nGandhidham      \nBhachau       \nSamakhyali     \nMorbi      \nTankara\nRajkot       \nVirpur      \nJetpur    \nJunagadh       \nVeraval        \nSomnath,      \nKodinar"<<endl;
        }
        else if(choice==3)
        {
            cout<<"\nBhuj      \nAnjar      \nAdipur      \nGandhidham      \nBhachau       \nSamakhyali      \nMorbi      \nDhrol\nJamnagar      \nLalpur      \nPorbandar"<<endl;
        }
        else if(choice==4)
        {
            cout<<"\nBhuj       \nAnjar      \nAdipur      \nGandhidham      \nBhachau      \nSamakhyali     \nMalia      \nHalvad\nDangadra      \nSanand      \nAhemdabad     \nGandhinagar"<<endl;
        }



    }
    booking()
    {
        avail[1]="Available";
        avail[2]=" Booked  ";
        booked[1]=0;
        booked[2]=0;
        booked[3]=0;
        booked[4]=0;
        booked[5]=0;
    }
    int a,x,n;
    void seatdis()
    {
        i=1;
        for(i=i;i<=1;i)
        {
            cout<<"   0"<<i++<<"         0"<<i++<<"\t"<<"     0"<<i++<<"         0"<<i++<<"         0"<<i++<<endl;
        }
        i=5;
        for(i=i;i>=5;i)
        {
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {
                cout<<avail[2];
                cout<<"  ";
            }
            else
            {
               
                cout<<avail[1];
                cout<<"  ";
            }
            i--;
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {

                cout<<avail[2];
                cout<<"      ";
            }
            else
            {
                cout<<avail[1];
                cout<<"      ";

            }
            i--;
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {
                cout<<avail[2];
                cout<<"  ";
            }
            else
            {
                cout<<avail[1];
                cout<<"  ";
            }
            i-- ;
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {
                cout<<avail[2];
                cout<<"  ";
            }
            else
            {
                cout<<avail[1];
                cout<<"  ";
            }
            i--;
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {
                cout<<avail[2];
                cout<<endl;
            }
            else
            {
                cout<<avail[1];
                cout<<endl;
            }
        }
        //Six to Ten
        i=6;
        for(i=i;i<=6;i)
        {
            cout<<"   "<<i++<<"         0"<<i++<<"\t"<<"     0"<<i++<<"         0"<<i++<<"         0"<<i++<<endl;
        }
        i=10;
        for(i=i;i>=10;i)
        {
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {
                cout<<avail[2];
                cout<<"  ";
            }
            else
            {
                cout<<avail[1];
                cout<<"  ";
            }
            i--;
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {

                cout<<avail[2];
                cout<<"      ";
            }
            else
            {
                cout<<avail[1];
                cout<<"      ";

            }
            i--;
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {
                cout<<avail[2];
                cout<<"  ";
            }
            else
            {
                cout<<avail[1];
                cout<<"  ";
            }
            i-- ;
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {
                cout<<avail[2];
                cout<<"  ";
            }
            else
            {
                cout<<avail[1];
                cout<<"  ";
            }
            i--;
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {
                cout<<avail[2];
                cout<<endl;
            }
            else
            {
                cout<<avail[1];
                cout<<endl;
            }
        }
    a=11;
    x=6;
    for(n=0;n<9;n++)
    {
        x=x+5;
        for(i=x;i<=x;i++)
        {

            cout<<"   "<<a++<<"         "<<a++<<"\t"<<"     "<<a++<<"         "<<a++<<"         "<<a++<<endl;
        }
        x=x+4;
        for(i=x;i<=x;i++)
        {
            if(x==booked[1]||x==booked[2]||x==booked[3]||x==booked[4]||x==booked[5])
            {
                cout<<avail[2];
                cout<<"  ";
            }
            else
            {
                cout<<avail[1];
                cout<<"  ";
            }
            x--;
            if(x==booked[1]||x==booked[2]||x==booked[3]||x==booked[4]||x==booked[5])
            {

                cout<<avail[2];
                cout<<"      ";
            }
            else
            {
                cout<<avail[1];
                cout<<"      ";

            }
            x--;
            if(x==booked[1]||x==booked[2]||x==booked[3]||x==booked[4]||x==booked[5])
            {
                cout<<avail[2];
                cout<<"  ";
            }
            else
            {
                cout<<avail[1];
                cout<<"  ";
            }
            x-- ;
            if(x==booked[1]||x==booked[2]||x==booked[3]||x==booked[4]||x==booked[5])
            {
                cout<<avail[2];
                cout<<"  ";
            }
            else
            {
                cout<<avail[1];
                cout<<"  ";
            }
            x--;
            if(x==booked[1]||x==booked[2]||x==booked[3]||x==booked[4]||x==booked[5])
            {
                cout<<avail[2];
                cout<<endl;
            }
            else
            {
                cout<<avail[1];
                cout<<endl;
            }
          }    }
    }
};
class userinfo:public booking
{
    public:
    int sn;
    int fare;
    int booked[80];
    char name[30];
    char lastname[30];
    int age;
    char ufrom[30];
    char uto[30];
    char pno[15];
    void getseatno()
    {
        cout<<"Enter total seats to book:";
        cin>>sn;
        while(sn>=0)
        {
            if(sn>5)
            {
                cout<<"Please enter the no. of seats AGAIN!";
                cin>>sn;
            }
            else break;
        }
        cout<<"Enter seat no.:";
        for(i=1;i<=sn;i++)
        {
            cin>>booked[i];

        }

    }
    void putuserinfo()
    {
        cout<<"Enter your first name:" ;
        cin>>name;
        cout<<"Enter your last name:";
        cin>>lastname;
        cout<<"Enter your age:";
        cin>>age;
        cout<<"Enter your Phone Number:";
        cin>>pno;
        cout<<"Enter the place 'From':";
        cin>>ufrom;
        cout<<"Enter the place 'To':";
        cin>>uto;

    }
    void rate()
    {
        fare=550;
        cout<<endl;
        cout<<"Your total ticket cost:"<<fare*sn<<endl;
        fare=fare*sn;
    }
    void confirmtic()
    {
        cout<<"Press Y to confirm or N:";
        cin>>confirm;
    }
    void finaldetail()
    {
        if(confirm=='y'||confirm=='Y')
        {
            cout<<"********************************"<<endl;
            cout<<"| First Name\t:"<<name<<endl;
            cout<<"| Last Name\t:"<<lastname<<endl;
            cout<<"| Age\t\t:"<<age<<endl;
            cout<<"| Phone Number\t:"<<pno<<endl;
            cout<<"| From\t\t:"<<ufrom<<endl;
            cout<<"| To\t\t:"<<uto<<endl;
            cout<<"| Seat No.\t:";
            for(i=1;i<=sn;i++)
            {
                cout<<booked[i];
                if(sn>=2)
                {
                    cout<<",";
                }                                                }

         //    cout<<endl<<"| Total cost\t:"<<fare*sn<<endl;
            cout<<endl;
            cout<<"********************************"<<endl;
            cout<<"\t\t* Your ticket is booked *"<<endl;
        }
        else
        {
            cout<<"Your ticket is cancel.";
        }
    }

    int a,x,n;
    public:
    void thank()
    {
        cout<<"Thank You for booking";
        cout<<"\n";
    }
    void printbooked()
    {
            //First Five
        i=1;
        for(i=i;i<=1;i)
        {
            cout<<"   0"<<i++<<"         0"<<i++<<"\t"<<"     0"<<i++<<"         0"<<i++<<"         0"<<i++<<endl;
        }
        i=5;
        for(i=i;i>=5;i)
        {
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {
                cout<<avail[2];
                cout<<"  ";
            }
            else
            {
                cout<<avail[1];
                cout<<"  ";
            }
            i--;
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {

                cout<<avail[2];
                cout<<"      ";
            }
            else
            {
                cout<<avail[1];
                cout<<"      ";

            }
            i--;
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {
                cout<<avail[2];
                cout<<"  ";
            }
            else
            {
                cout<<avail[1];
                cout<<"  ";
            }
            i-- ;
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {
                cout<<avail[2];
                cout<<"  ";
            }
            else
            {
                cout<<avail[1];
                cout<<"  ";
            }
            i--;
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {
                cout<<avail[2];
                cout<<endl;
            }
            else
            {
                cout<<avail[1];
                cout<<endl;
            }
        }
        //Six to Ten
        i=6;
        for(i=i;i<=6;i)
        {
            cout<<"   "<<i++<<"         0"<<i++<<"\t"<<"     0"<<i++<<"         0"<<i++<<"         0"<<i++<<endl;
        }
        i=10;
        for(i=i;i>=10;i)
        {
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {
                cout<<avail[2];
                cout<<"  ";
            }
            else
            {
                cout<<avail[1];
                cout<<"  ";
            }
            i--;
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {

                cout<<avail[2];
                cout<<"      ";
            }
            else
            {
                cout<<avail[1];
                cout<<"      ";

            }
            i--;
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {
                cout<<avail[2];
                cout<<"  ";
            }
            else
            {
                cout<<avail[1];
                cout<<"  ";
            }
            i-- ;
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {
                cout<<avail[2];
                cout<<"  ";
            }
            else
            {
                cout<<avail[1];
                cout<<"  ";
            }
            i--;
            if(i==booked[1]||i==booked[2]||i==booked[3]||i==booked[4]||i==booked[5])
            {
                cout<<avail[2];
                cout<<endl;
            }
            else
            {
                cout<<avail[1];
                cout<<endl;
            }
        }
    a=11;
    x=6;
    for(n=0;n<9;n++)
    {
        x=x+5;
        for(i=x;i<=x;i++)
        {

            cout<<"   "<<a++<<"         "<<a++<<"\t"<<"     "<<a++<<"         "<<a++<<"         "<<a++<<endl;
        }
        x=x+4;
        for(i=x;i<=x;i++)
        {
            if(x==booked[1]||x==booked[2]||x==booked[3]||x==booked[4]||x==booked[5])
            {
                cout<<avail[2];
                cout<<"  ";
            }
            else
            {
                cout<<avail[1];
                cout<<"  ";
            }
            x--;
            if(x==booked[1]||x==booked[2]||x==booked[3]||x==booked[4]||x==booked[5])
            {

                cout<<avail[2];
                cout<<"      ";
            }
            else
            {
                cout<<avail[1];
                cout<<"      ";

            }
            x--;
            if(x==booked[1]||x==booked[2]||x==booked[3]||x==booked[4]||x==booked[5])
            {
                cout<<avail[2];
                cout<<"  ";
            }
            else
            {
                cout<<avail[1];
                cout<<"  ";
            }
            x-- ;
            if(x==booked[1]||x==booked[2]||x==booked[3]||x==booked[4]||x==booked[5])
            {
                cout<<avail[2];
                cout<<"  ";
            }
            else
            {
                cout<<avail[1];
                cout<<"  ";
            }
            x--;
            if(x==booked[1]||x==booked[2]||x==booked[3]||x==booked[4]||x==booked[5])
            {
                cout<<avail[2];
                cout<<endl;
            }
            else
            {
                cout<<avail[1];
                cout<<endl;
            }
        }
    }
    cout<<endl;
    }
};
int main()
{
    char con;
    char again;
    char confirm;
    char check;
    int i;
    booking d1;
    userinfo b1;
    for(i=0;i<1;)
    {
    d1.disinfo();
    d1.userchoice();
    d1.dischoice();
    d1.disroute();
    cout<<endl;
    cout<<"If your ticket is confirm?";
    cout<<endl;
    cout<<"Press Y for YES";
    cout<<endl;
    cout<<"Press N for NO";
    cout<<endl;
    cin>>confirm;
    if(confirm=='n'||confirm=='N')
    {
        cout<<"Re-enter Your Choice"<<endl<<"Again ";
        d1.userchoice();
        d1.dischoice();
        d1.disroute();
        d1.seatdis();
    }
    else if(confirm=='Y'||confirm=='y')
    {
        d1.seatdis();
    }
    b1.getseatno();
    b1.putuserinfo();
    b1.confirmtic();
    b1.finaldetail();
    b1.rate();
    cout<<endl;
    cout<<"Press Y to CANCEL ticlet";
    cout<<endl;
    cout<<"Press N for CONTINUE";
    cout<<endl;
    cin>>con;
    if(con=='y')
    {
        cout<<"YOUR TICKET IS CANCLE";
    }
    else if(con=='n')
    {
    cout<<"For see booked seat enter Y:"<<endl;
    cin>>check;
    if(check=='y'||check=='Y')
    {
        b1.printbooked();
    }
    else
    {
        b1.thank();
    }
    }
    cout<<"Press Y for book again:";
    cin>>again;
    if(again=='Y'||again=='y')
    {
        i=0;
    }
    else
    {
        i++;
    }
    }
    return 0;
}
