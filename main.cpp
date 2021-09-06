#include <iostream>
#include<stdio.h>
#include<fstream>
#include<cstdlib>
#include <windows.h>            //This is the header file for windows.
using namespace std;
class login
{
public:
    char name[20];
    int age;
    void details_of_cand()
    {

        cout<<"ENTER YOUR NAME : ";
        SetColor(15);
        cin.get(name,20);
        cout<<"                      ";
        SetColor(9);
        cout<<"ENTER YOUR AGE  : ";
        SetColor(15);
        cin>>age;
    }
    void display()
    {
        SetColor(11);
         system("cls");
    cout<<"******************************************************************************\n";
    cout<<endl;
    cout<<" CONTESTENT NAME : ";
    cout<<name;cout<<endl;
    cout<<"                                            ";cout<<"YOUR LIFE-LINES ARE : 1.DOUBLE-DIP"<<endl;
    cout<<"                                                                  2.ASK EXPERT\n";
    cout<<"******************************************************************************\n";
    cout<<endl;
    cout<<endl;
    }
    void wait()
    {
        for(int i=1;i<=32767;i++)
             for(int j=1;j<=32767;j++)
             {

             }
    }
    void cheque(int sum1)
{

   cout<<"     ";
   for(int i=0;i<50;i++)
   {
       cout<<"*";
   }
   cout<<endl;
   cout<<"                           CHEQUE\n";
   cout<<"     ";
   for(int i=0;i<50;i++)
   {
       cout<<"*";
   }
   cout<<endl;
   cout<<"     "; cout<<"*                                        AXIS BANK\n";
   cout<<"     "; cout<<"*   NAME:"<<name<<"                 \n";
   cout<<"     "; cout<<"*    AGE:"<<age<<"                  \n";
   cout<<"     "; cout<<"* AMOUNT:"<<sum1<<"                BY: AMITABH BACHCHAN\n";
   for(int i=0;i<2;i++)
    {
        cout<<"     ";
        for(int j=0;j<50;j++)
        {

                cout<<"*";
        }
        cout<<endl;
    }
}
void SetColor(int ForgC)
{
     WORD wColor;
     //This handle is needed to get the current background attribute

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     //csbi is used for wAttributes word

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          //To mask out all but the background attribute, and to add the color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}
};
void SetColor(int ForgC)
{
     WORD wColor;
     //This handle is needed to get the current background attribute

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     //csbi is used for wAttributes word

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          //To mask out all but the background attribute, and to add the color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}

char ch[100],ans,opt,expert;
int lifeline,val,VALUE;
static int counter=0;
static int counter1=0;
static int counter2=0;
int life_line(char value,char VALUE)
{
   SetColor(10);
   for(int i=1;i<=32767;i++)
             for(int j=1;j<=32767;j++)
             {

             }
   ab:
   cout<<"YOU CAN OPT FOR A LIFE-LINE ALSO... \n\n";
   for(int i=1;i<=32767;i++)
             for(int j=1;j<=32767;j++)
             {

             }
   cout<<"DO YOU WANT LIFE-LINE : PRESS Y OR N : ";
   cin>>opt;
   if(opt=='n'||opt=='N')
   {
   cout<<"CHOOSE YOUR OPTION : ";cin>>ans;
   if(ans==value||ans==VALUE)
       return 1;
   else
    return 0;
   }
   else if(opt=='y'||opt=='Y')
   {
       counter++;
       xy:
       yx:
       cout<<" CHOOSE YOUR LIFE LINE : 1 OR 2 : ";
       cin>>lifeline;
       if(lifeline==1)
       {
            if(counter1++<1)
            {
             cout<<"CHOOSE YOUR FIRST OPTION : ";
             cin>>ans;
               if(ans==value||ans==VALUE)
                  return 1;
                else
               {
                cout<<" WRONG CHOICE\n";
                cout<<" ENTER ANOTHER OPTION : ";cin>>ans;
                if(ans==value||ans==VALUE)
                   return 1;
                else
                   return 0;
               }
            }
            else
            {
                cout<<" THIS LIFE-LINE IS FINISHED USE ANOTHER ONE\n";
                goto xy;
            }
       }
        else if(lifeline==2)
        {
           if(counter2++<1)
           {
             cout<<" ACCORDING TO EXPERT....";
             for(int i=1;i<=32767;i++)
             for(int j=1;j<=32767;j++)
             {

             }
             cout<<" THE ANSWER IS : "<<ans<<endl;
             cout<<" DO YOU WANT TO GO WITH EXPERT :PRESS Y OR N : ";
             cin>>expert;
             if(expert=='y'||expert=='Y')
               return 1;
             else
             {
              cout<<"ENTER YOUR OPTION : ";cin>>ans;
              if(ans==value||ans==VALUE)
               return 1;
              else
               return 0;
             }
            }
            else
            {
                cout<<" THIS LIFE-LINE IS FINISHED USE ANOTHER ONE\n";
                goto yx;
            }
       }
   }
   else
   {
    cout<<"YOU HAVE ENTERED WRONG CHOICE \n";
    goto ab;
   }
}
int check_condition(char val_small,char val_big)
{
    if(counter<2)
   {
       val=life_line(val_small,val_big);
       return val;
   }
   else
   {
       cout<<" ENTER YOUR OPTION : ";
       cin>>ans;
       if(ans==val_small||ans==val_big)
        return 1;
       else
        return 0;
   }
}
int question1()
{
    SetColor(15);
    ifstream obj("one.txt");
    while(!obj.eof())
    {
       obj.getline(ch,100);
       cout<<ch<<endl;
    }
    obj.close();
     cout<<"\n";
     cout<<" A.APJ ABDUL KALAM         B.PRANAB MUKHERJEE \n C.HAMID ANSARI            D.INDIRA GANDHI\n\n\n";
     VALUE=check_condition('c','C');
     return VALUE;
   }
int question2()
{
    SetColor(15);
    ifstream obj("two.txt");
    while(!obj.eof())
    {
       obj.getline(ch,100);
       cout<<ch<<endl;
    }
    obj.close();
     cout<<"\n";
     cout<<" A.RAGHU RAMRAJAN    B.GOVINDRAM APTE\n C.URJIT PATEL       D.SUSHMA SWARAJ\n\n\n";
     VALUE=check_condition('c','C');
     return VALUE;
}
int question3()
{
    SetColor(15);
    ifstream obj("three.txt");
    while(!obj.eof())
    {
       obj.getline(ch,100);
       cout<<ch<<endl;
    }
    obj.close();
     cout<<"\n";
     cout<<" A.JAPAN           B.INDIA\n C.AUSTRALIYA      D.FRANCE\n\n\n ";
     VALUE=check_condition('d','D');
     return VALUE;
}
int question4()
{
    SetColor(15);
    ifstream obj("four.txt");
    while(!obj.eof())
    {
       obj.getline(ch,100);
       cout<<ch<<endl;
    }
    obj.close();
     cout<<"\n";
     cout<<" A.SNAPCHAT          B.LINKEDIN\n C.TUMBLR            D.PINTEREST\n\n\n ";
     VALUE=check_condition('b','B');
     return VALUE;
}
int question5()
{
    SetColor(15);
    ifstream obj("five.txt");
    while(!obj.eof())
    {
       obj.getline(ch,100);
       cout<<ch<<endl;
    }
    obj.close();
     cout<<"\n";
     cout<<" A.23       B.21\n C.20       D.19\n\n\n ";
     VALUE=check_condition('a','A');
     return VALUE;
}
int question6()
{
    SetColor(15);
    ifstream obj("six.txt");
    while(!obj.eof())
    {
       obj.getline(ch,100);
       cout<<ch<<endl;
    }
    obj.close();
     cout<<"\n";
     cout<<"A.VLADIMIR PUTIN       B.XI JINPING\nC.FRANK HOLLANDE       D.BAN KI-MOON\n\n\n ";
     VALUE=check_condition('d','D');
     return VALUE;
}
int question7()
{
    SetColor(15);
    ifstream obj("seven.txt");
    while(!obj.eof())
    {
       obj.getline(ch,100);
       cout<<ch<<endl;
    }
    obj.close();
    cout<<"\n";
    cout<<" A.TOM HANKS            B.CLINT EASTWOOD\n C.DANIEL DAY LEWIS     D.ROBERT DE NERO\n\n\n ";
    VALUE=check_condition('c','C');
    return VALUE;
}
static int sum=0;
int answer;
int main()
{
    int i=0;
    cout<<endl;
    SetColor(9);
    cout<<"******************************************************************************\n";
    cout<<"                             WELCOME TO KBC                                  \n";
    cout<<"******************************************************************************\n";
    login obj;
    cout<<endl;
    cout<<"                      ";
    obj.details_of_cand();
    cout<<endl<<endl<<endl;
    SetColor(9);
    cout<<"                SO LET'S BEGIN THE GAME WITH ";
    cout<<obj.name;
    obj.wait();
    cout<<endl<<endl;
    obj.display();
    cout<<"HERE'S THE "<<++i<<" QUESTION ON YOUR SCREEN FOR 1000 Rs\n";
    answer=question1();
    cout<<" \n LET'S CHECK YOUR ANSWER......\n";
    obj.wait();
    if (answer==1)
    {
        sum=1000;
        cout<<" \nTHE ANSWER IS CORRECT-YOU HAVE WON TOTAL "<<sum<<" Rs";
    }
    else
    {
        system("cls");
        cout<<" \n\nSORRY YOUR ANSWER WAS WRONG-YOU HAVE WON TOTAL "<<sum<<" Rs\n\n";
        SetColor(11);
        obj.cheque(sum);
        SetColor(15);
        exit(0);
    }
    cout<<endl<<endl;
    obj.wait();
    obj.display();
    cout<<"\nHERE'S THE "<<++i<<" QUESTION ON YOUR SCREEN FOR 5000 Rs\n";
    answer=question2();
    cout<<" \n LET'S CHECK YOUR ANSWER......\n";
    obj.wait();
    if (answer==1)
    {
        sum=5000;
        cout<<" \nTHE ANSWER IS CORRECT-YOU HAVE WON TOTAL "<<sum<<" Rs";
    }
    else
    {
        system("cls");
        cout<<" \n\nSORRY YOUR ANSWER WAS WRONG-YOU HAVE WON TOTAL "<<sum<<" Rs\n\n";
        obj.cheque(sum);
        exit(0);
    }
    cout<<endl<<endl;
    obj.wait();
    obj.display();
    cout<<"\nHERE'S THE "<<++i<<" QUESTION ON YOUR SCREEN FOR 10000 Rs\n";
    answer=question3();
    cout<<" \n LET'S CHECK YOUR ANSWER......\n";
    obj.wait();
    if (answer==1)
    {
        sum=10000;
        cout<<" \nTHE ANSWER IS CORRECT-YOU HAVE WON TOTAL "<<sum<<" Rs";
    }
    else
    {
        system("cls");
        cout<<" \n\nSORRY YOUR ANSWER WAS WRONG-YOU HAVE WON TOTAL "<<sum<<" Rs\n\n";
        obj.cheque(sum);
        exit(0);
    }
    cout<<endl<<endl;
    obj.wait();
    obj.display();
    cout<<"\nHERE'S THE "<<++i<<" QUESTION ON YOUR SCREEN FOR 25000 Rs\n";
    answer=question4();
    cout<<" \n LET'S CHECK YOUR ANSWER......\n";
    obj.wait();
    if (answer==1)
    {
        sum=25000;
        cout<<" \nTHE ANSWER IS CORRECT-YOU HAVE WON TOTAL "<<sum<<" Rs";
    }
    else
    {
        system("cls");
        cout<<" \n\nSORRY YOUR ANSWER WAS WRONG-YOU HAVE WON TOTAL "<<sum<<" Rs\n\n";
        obj.cheque(sum);
        exit(0);
    }
    cout<<endl<<endl;
    obj.wait();
    obj.display();
    cout<<"\nHERE'S THE "<<++i<<" QUESTION ON YOUR SCREEN FOR 50000 Rs\n";
    answer=question5();
    cout<<" \n LET'S CHECK YOUR ANSWER......\n";
    obj.wait();
    if (answer==1)
    {
        sum=50000;
        cout<<" \nTHE ANSWER IS CORRECT-YOU HAVE WON TOTAL "<<sum<<" Rs\n\n";
    }
    else
    {
        system("cls");
        cout<<" \n\nSORRY YOUR ANSWER WAS WRONG-YOU HAVE WON TOTAL "<<sum<<" Rs\n\n";
        obj.cheque(sum);
        exit(0);
    }
    cout<<endl<<endl;
    obj.wait();
    obj.display();
    cout<<"\nHERE'S THE "<<++i<<" QUESTION ON YOUR SCREEN FOR 100000 Rs\n";
    answer=question6();
    cout<<" \n LET'S CHECK YOUR ANSWER......\n";
    obj.wait();
    if (answer==1)
    {
        sum=100000;
        cout<<" \nTHE ANSWER IS CORRECT-YOU HAVE WON TOTAL "<<sum<<" Rs\n\n";
    }
    else
    {
        system("cls");
        cout<<" \n\nSORRY YOUR ANSWER WAS WRONG-YOU HAVE WON TOTAL "<<sum<<" Rs\n\n";
        obj.cheque(sum);
        exit(0);
    }
    cout<<endl<<endl;
    obj.wait();
    obj.display();
    cout<<"\nHERE'S THE "<<++i<<" QUESTION ON YOUR SCREEN FOR 500000 Rs\n";
    answer=question7();
    cout<<" \n LET'S CHECK YOUR ANSWER......\n";
    obj.wait();
    if (answer==1)
    {
        system("cls");
        sum=500000;
        cout<<"     \nCONGRATULATIONS YOU ARE THE NEW WINNER OF KBC\n";
        cout<<" \nTHE ANSWER IS CORRECT-YOU HAVE WON TOTAL "<<sum<<" Rs\n\n";
        obj.cheque(sum);
        exit(0);
    }
    else
    {
        system("cls");
        cout<<" \n\nSORRY YOUR ANSWER WAS WRONG-YOU HAVE WON TOTAL "<<sum<<" Rs\n\n";
        obj.cheque(sum);
        exit(0);
    }
    return 0;
}
