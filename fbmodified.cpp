
    #include<bits/stdc++.h>
    #include<time.h>
    #include<conio.h>
    #include<list>
    int flag=0;
    int loop=0;
    void delay(unsigned int mseconds)
    {
        clock_t goal = mseconds + clock();
        while (goal > clock());
    }



    using namespace std;

    class msgs
    {
        public:
        string from;
        string to;
        string data;
    };


    class Address
    {
        public:
        string city;
        string state;
        string country;
    };


    class Basic_detail
    {
        public:
        string uname;
        string gender;
        string dob;
        Address *ptr;
        Basic_detail()           //Aggregation
        {
            uname=gender=dob="NA";
            ptr=new Address;
            ptr->city=ptr->state=ptr->country="NA";
        }

        Basic_detail(int x)           //Aggregation
        {
            uname=gender=dob="NA";
            ptr=new Address;
            ptr->city=ptr->state=ptr->country="NA";
        }

    //string address;
    string email;
    virtual void func()
    {
        cout<<uname<<gender<<dob<<ptr->city<<ptr->state<<ptr->country;
    }
    };
    class friends
    {
        public:
        string name;
        friends()
        {
            name="NA";
        }
    };
    class user  : public Basic_detail
    {
        public:
        string user_id;
        string password;
        string status;
        user()
        {
            status="NotEnteredYet";
        }
            msgs objmsgs;
            friends objfriends;
            void enter()
            {
                cout<<"\nEnter details.\n\n\nEnter user id  :  ";
                getline(cin,user_id);
                  password ="";
                cout<<"\n\n\nEnter password :  ";
                //getline(cin,password;
    char p;
    //cout << "Enter pass\n";
    p = _getch();
    while(p != 13)//character 13 is enter
    {
    if(p!=8)
    {
    password.push_back(p);
    cout <<'*';
    }
    else
    {
    password.resize(password.size()-1);
    int t=8;
    cout<<(char)t;
    cout<<"\n";
    cout<<(char)t;
    }
    p = _getch();      }              cout<<endl<<endl;
            }

        void enter(string x)
        {
            system("CLS");
            cout<<"\n\n\n\t\tEnter user name  :  ";
            getline(cin,uname);
            system("CLS");
            cout<<"\n\n\t\tEnter gender  :  ";
            getline(cin,gender);
            system("CLS");
            cout<<"\n\n\t\tEnter date of birth  :  ";
            getline(cin,dob);
            system("CLS");
            cout<<"\n\n\n\t\tEnter Address -  ";
            cout<<"\n\n\t\tCity  :  ";
            getline(cin,ptr->city);
            cout<<"\n\n\t\tState  :  ";
            getline(cin,ptr->state);
            cout<<"\n\n\t\tCountry  :  ";
            getline(cin,ptr->country);
        }
    };

    /*
    template <typename t>

    t top_userid(t a,t b,t c)
    {
    t big;
    if(a>b)
    if(a>c)
    big=a;
    else
    big=c;
    else
    if(b>c)
    big=b;
    else
    big=c;

    }

    */
    int main()
    {x:
    try
    {
    cout<<"Enter your choice. \n\n\n\t 1. Sign up \n\n\n\t 2. Login \n\n\n\t ";
    char x;
    x=getch();
    cout<<endl;
    system("CLS");
    user obj,objtemp;
    objtemp.enter();
    ifstream f1("pro_user.txt");
    while(getline(f1,obj.user_id)  &&  getline(f1,obj.password) && getline(f1,obj.status))
    {
        if(obj.user_id==objtemp.user_id)
        {
            flag=1;
            break;
        }
    }
    f1.close();
    if(x=='1')
    {
    if(flag==1)
    {
        cout<<"Username already exists, try another username please.\n";
        flag=0;
    }
    else
    {

        ofstream f2("pro_user.txt",ios::app);
        f2<<objtemp.user_id<<"\n"<<objtemp.password<<"\n";
        cout<<"\n\nEnter your status please...What's on your mind ?  :  ";
        getline(cin,objtemp.status);
        f2<<objtemp.status<<endl;
        f2.close();

        string temp=objtemp.user_id;
        temp=temp+".txt";
        f2.open(temp.c_str());
        f2.close();
        temp=objtemp.user_id;
        temp=temp+"flist";
        temp=temp+".txt";
        f2.open(temp.c_str());
        f2.close();
        system("CLS");

        cout<<"\n\nYou are signed up on facebook :)";
        x='0';
        cout<<"\n\nPress 1 to continue to your profile  :  ";
        x=getch();
        if(x=='1')
        system("CLS");


            system("CLS");
        cout<<"\n\n\n\n     STATUS  :  "<<objtemp.status<<"\n\n\n";
        cout<<"\n\n\n\t\t1.MESSAGES\n\n\n\t\t2.FRIENDS\n\n\n\t\t3.BASIC DETAILS\n\n\n\t\t4.LOGOUT\n\n\n";
        char ch;
        ch=getch();
        switch(ch)
        {
            case '1':
                system("CLS");
                cout<<"\n\n\n\t\tMESSAGES\n\n\t\t";
                cout<<"Send / View : Enter s or v  :  ";
                char c;
                c=getch();
                if(c=='s' || 'S')
                {
                    cout<<"\n\t\tEnter user id to whom you want to send the message  :  ";
                    string to;
                    getline(cin,to);
                    int flag3=0;
                    f1.open("pro_user.txt");
                    string s1,s2,s3;
                    while(getline(f1,s1) && getline(f1,s2) && getline(f1,s2))
                    {
                        if(s1==to)
                        {
                            flag3=1;
                            break;
                        }
                    }
                    if(!flag3)
                    {
                        cout<<"\n\n\t\tUser doesn't exist.";
                        exit(1);
                    }
                    string temp;
                    temp=to+".txt";
                    f2.open(temp.c_str(),ios::app);
                    cout<<"\n\t\tEnter your message please  : ";
                    string data;
                    getline(cin,data);
                    f2<<objtemp.user_id<<"\n"<<data<<"\n";
                     cout<<"\n\n\t\t1.BACK\n\n\t\t2.LOGOUT\n\n\t\t" ;
    char con;
        con=getch();
        system("CLS");
        if(con=='1')
            {
                goto y;
                loop=1;
            }
        else
            if(con=='2')
            goto x;
        else
        {
            cout<<"\n\n\n\n\t\t\tWrong input entered.";
            system("CLS");
            goto x;
        }

                }
            else
                if(c=='v' || c=='V')
                {
                    string s1,s2;
                    temp=objtemp.user_id+".txt";
                    ifstream f1(temp.c_str());
                    while(getline(f1,s1) && getline(f1,s2))
                    {
                        cout<<"From :  "<<s1<<"Message is  :  "<<s2<<endl;
                    }

                    f1.close();
                     cout<<"\n\n\t\t1.BACK\n\n\t\t2.LOGOUT\n\n\t\t" ;
    char con;
        con=getch();
        system("CLS");
        if(con=='1')
            {
                goto y;
                loop=1;
            }
        else
            if(con=='2')
            goto x;
        else
        {
            cout<<"\n\n\n\n\t\t\tWrong input entered.";
            system("CLS");
            goto x;
        }
                }
            else
                {
                cout<<"\n\n\t\t\tWrong input entered \t\t\t";
                }
            break;
        case '2':
            system("CLS");
            cout<<"\n\n\n\t\tFRIENDS";
            cout<<"\n\n\t\t1.Add Friend\n\n\t\t2.Friends List\n\n\t\t";
            char y;
            y=getch();
            if(y=='1')
            {
                cout<<"Enter user id to whom you want to add as friend  :  ";
                int flag2=0;
                string to;
                getline(cin,to);
                f1.open("pro_user.txt");
                string s,d1,d2;
                while( getline(f1,s)&&getline(f1,d1)&&getline(f1,d2))
                {
                    if(s==to)
                    {
                        flag2=1;
                        break;
                }
            }
            if(flag2==0)
            {
                cout<<"\n\n\t\tUser whom you want to add as friend doesn't exist.";
                 cout<<"\n\n\t\t1.BACK\n\n\t\t2.LOGOUT\n\n\t\t" ;
        char con;
        con=getch();
        system("CLS");
        if(con=='1')
            {
                goto y;
                loop=1;
            }
        else
            if(con=='2')
            goto x;
        else
        {
            cout<<"\n\n\n\n\t\t\tWrong input entered.";
            system("CLS");
            goto x;
        }
            }
            f1.close();
            string temp=objtemp.user_id;
            temp=temp+"flist";
            temp=temp+".txt";
            f2.open(temp.c_str(),ios::app);
            f2<<s<<"\n";
            f2.close();
            cout<<"\n\n\t\t"<<s<<"  is added to your friendlist.\n\n";
            temp=to;
            temp+="flist";
            temp+=".txt";
            f2.open(temp.c_str(),ios::app);
            f2<<objtemp.user_id<<"\n";
            f2.close();
            cout<<"\n\n\t\t1.BACK\n\n\t\t2.LOGOUT\n\n\t\t" ;
    char con;
        con=getch();
        system("CLS");
        if(con=='1')
            {
                goto y;
                loop=1;
            }
        else
            if(con=='2')
            goto x;
        else
        {
            cout<<"\n\n\n\n\t\t\tWrong input entered.";
            system("CLS");
            goto x;
        }
        }
        else
        {
            string temp=objtemp.user_id;
            temp=temp+"flist";
            temp=temp+".txt";
            f1.open(temp.c_str());
            cout<<"\t\tYour friends are -\n";
            string outlist;
        while(getline(f1,outlist))
        {

            cout<<"\n\t\t"<<outlist<<"\n";
        }
        cout<<"\n\n\t\t1.BACK\n\n\t\t2.LOGOUT\n\n\t\t" ;
        char con;
        con=getch();
        system("CLS");
        if(con=='1')
            {
                goto y;
                loop=1;
            }
        else
            if(con=='2')
            goto x;
        else
        {
            cout<<"\n\n\n\n\t\t\tWrong input entered.";
            system("CLS");
            goto x;
        }
    }
    break;
    case '3':
        system("CLS");
        cout<<"\n\n\n\t\tBASIC DETAILS";
        system("CLS");
        cout<<"\n\n\n\t\tYour Profile\n\n";
        cout<<"\n\t\t1.Update profile\n\n\t\t2.See profile\n";
        c=getch();
        system("CLS");
        if(c=='1')
        {
            objtemp.enter(objtemp.user_id);
            string profile;
            profile=objtemp.user_id;
    profile+="profile.txt";
    f2.open(profile.c_str());
    f2<<objtemp.user_id<<"\n"<<objtemp.uname<<"\n"<<objtemp.gender<<"\n"<<objtemp.dob<<"\n"<<objtemp.ptr->city<<"\n"<<objtemp.ptr->state<<"\n"<<objtemp.ptr->country<<endl;
    f2.close();
      cout<<"\n\n\t\t1.BACK\n\n\t\t2.LOGOUT\n\n\t\t" ;
    char con;
        con=getch();
        system("CLS");
        if(con=='1')
            {
                goto y;
                loop=1;
            }
        else
            if(con=='2')
            goto x;
        else
        {
            cout<<"\n\n\n\n\t\t\tWrong input entered.";
            system("CLS");
            goto x;
        }
    }
    else
    if(c=='2')
    {
        int flag2=0;
        string profile;
        profile=objtemp.user_id;
        profile+="profile.txt";
        f1.open(profile.c_str());
        string a,b,c,d,e,f,g;
        while(getline(f1,a) && getline(f1,b) && getline(f1,c) && getline(f1,d) && getline(f1,e) && getline(f1,f) && getline(f1,g))
    {
    if(a==objtemp.user_id)
    {
    flag2=1;
    break;
    }
    }
    if(flag2==0)
    {
    cout<<"\n\n\t\tUser details are not entered yet \n";
      cout<<"\n\n\t\t1.BACK\n\n\t\t2.LOGOUT\n\n\t\t" ;
    char con;
        con=getch();
        system("CLS");
        if(con=='1')
            {
                goto y;
                loop=1;
            }
        else
            if(con=='2')
            goto x;
        else
        {
            cout<<"\n\n\n\n\t\t\tWrong input entered.";
            system("CLS");
            goto x;
        }
    }
    cout<<"\n\n\n\t\tUser id  :  "<<objtemp.user_id<<"\n\n\t\tUser name  :  "<<b<<"\n\n\t\tGender  :  "<<c<<"\n\n\t\tDate of Birth  :  "<<d<<"\n\n\t\tAddress -\n\t\tCity  :  "<<e<<"\n\t\tState  :  "<<f<<"\n\t\tCountry  :  "<<g<<endl;
    f1.close();
      cout<<"\n\n\t\t1.BACK\n\n\t\t2.LOGOUT\n\n\t\t" ;
    char con;
        con=getch();
        system("CLS");
        if(con=='1')
            {
                goto y;
                loop=1;
            }
        else
            if(con=='2')
            goto x;
        else
        {
            cout<<"\n\n\n\n\t\t\tWrong input entered.";
            system("CLS");
            goto x;
        }
    }
    else
    {
    system("CLS");
    cout<<"Wrong input entered";
      cout<<"\n\n\t\t1.BACK\n\n\t\t2.LOGOUT\n\n\t\t" ;
    char con;
        con=getch();
        system("CLS");
        if(con=='1')
            {
                goto y;
                loop=1;
            }
        else
            if(con=='2')
            goto x;
        else
        {
            cout<<"\n\n\n\n\t\t\tWrong input entered.";
            system("CLS");
            goto x;
        }
    }
    break;
    case '4':
    system("CLS");
    cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\tGood Bye\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    delay(1000);
    system("CLS");
    cout<<"\n\n\t\tDo you want to continue using facebook  y/n ?  :  ";
    char con;
    con=getch();
    system("CLS");
    if(con=='y' || con=='Y')
    goto x;
    }
    }
    }
    else if(x=='2')
    {
    if(flag==1)
    {
    flag=0;
    if(objtemp.password!=obj.password)
    {   system("CLS");
    cout<<"\n\n\n\n\n\n\n\t\t\t\tWrong password entered.\n\n";
    delay(1500);
    system("CLS");
    goto x;
    }
    cout<<"Please wait logging in to your account.\n\n LOADING...\n";
    system("CLS");
      y:
    cout<<"  \n\n\n\n     STATUS  :    "<<obj.status;
    cout<<"\n\n\n\t\t1.MESSAGES\n\n\n\t\t2.FRIENDS\n\n\n\t\t3.BASIC DETAILS\n\n\n\t\t4.LOGOUT\n\n\n";
    char ch;
    ch=getch();
    switch(ch)
    {
    case '1':
    {
    system("CLS");
    cout<<"\n\n\n\t\tMESSAGES\n\n\t\t";
    cout<<"Send / View : Enter s or v  :  ";
    char chh;
    chh=getch();
    if(chh=='s' || chh=='S')
    {
    cout<<"\n\t\tEnter user id to whom you want to send the message  :  ";
    int flag2=0;
    string to;
    getline(cin,to);
    f1.open("pro_user.txt");
    string s,d1,d2; while(  getline(f1,s)&&getline(f1,d1)&& getline(f1,d2))
    {
    if(s==to)
    {
    flag2=1;
    break;
    }
    }
    if(flag2==0)
    {
    cout<<"\n\n\t\tUser doesn't exist.";
    exit(1);
    }
    string temp;
    temp=to+".txt";
    ofstream  f2(temp.c_str(),ios::app);
    cout<<"\n\t\tEnter your message please  : ";
    string data;
    getline(cin,data);
    f2<<objtemp.user_id<<"\n"<<data<<"\n";

      cout<<"\n\n\t\t1.BACK\n\n\t\t2.LOGOUT\n\n\t\t" ;
    char con;
        con=getch();
        system("CLS");
        if(con=='1')
            {
                goto y;
                loop=1;
            }
        else
            if(con=='2')
            goto x;
        else
        {
            cout<<"\n\n\n\n\t\t\tWrong input entered.";
            system("CLS");
            goto x;
        }
        }
    else
    if(chh=='v' || chh=='V')
    {
    string temp,rfrom,rdata;
    temp=objtemp.user_id+".txt";
    ifstream f1(temp.c_str());
    while( getline(f1,rfrom)&&getline(f1,rdata))
    {
    cout<<"\nSent From  :  "<<rfrom<<"\nMessage is  :  "<<rdata<<endl;
    }
    f1.close();
      cout<<"\n\n\t\t1.BACK\n\n\t\t2.LOGOUT\n\n\t\t" ;
    char con;
        con=getch();
        system("CLS");
        if(con=='1')
            {
                goto y;
                loop=1;
            }
        else
            if(con=='2')
            goto x;
        else
        {
            cout<<"\n\n\n\n\t\t\tWrong input entered.";
            system("CLS");
            goto x;
        }
    }
    else
    {
    cout<<"\n\n\t\t\tWrong input entered \t\t\t";
      cout<<"\n\n\t\t1.BACK\n\n\t\t2.LOGOUT\n\n\t\t" ;
    char con;
        con=getch();
        system("CLS");
        if(con=='1')
            {
                goto y;
                loop=1;
            }
        else
            if(con=='2')
            goto x;
        else
        {
            cout<<"\n\n\n\n\t\t\tWrong input entered.";
            system("CLS");
            goto x;
        }
    }
    break;
    }

    case '2':
    system("CLS");
    cout<<"\n\n\n\t\tFRIENDS";

    cout<<"\n\n\t\t1.Add Friend\n\n\t\t2.Friends List\n\n\t\t";
    char y;
    y=getch();
    if(y=='1')
    {
    cout<<"Enter user id to whom you want to add as friend  :  ";
    int flag2=0;
    string to;
    getline(cin,to);
    f1.open("pro_user.txt");
    string s,d1,d2;
    while(getline(f1,s)&& getline(f1,d1)&&getline(f1,d2))
    {

    if(s==to)
    {
    flag2=1;
    break;
    }
    }
    if(flag2==0)
    {
    cout<<"\n\n\t\tUser whom you want to add as friend doesn't exist.";
      cout<<"\n\n\t\t1.BACK\n\n\t\t2.LOGOUT\n\n\t\t" ;
        char con;
        con=getch();
        system("CLS");
        if(con=='1')
        {
            goto y;
            loop=1;
        }
        else
            if(con=='2')
            goto x;
        else
        {
            cout<<"\n\n\n\n\t\t\tWrong input entered.";
            system("CLS");
            goto x;
        }
    }
    f1.close();
    string temp=objtemp.user_id;
    temp=temp+"flist";
    temp=temp+".txt";
    ofstream f2(temp.c_str(),ios::app);
    f2<<s<<"\n";
    f2.close();
    cout<<"\n\t\t"<<s<<"  is added to your friendlist.";
    temp=to;
    temp+="flist";
    temp+=".txt";
    f2.open(temp.c_str(),ios::app);
    f2<<objtemp.user_id<<"\n";
    f2.close();
    }
    else
    {
    string temp=objtemp.user_id;
    temp=temp+"flist";
    temp=temp+".txt";
    f1.open(temp.c_str());
    cout<<"\t\tYour friends are -\n ";
    string outlist;
    while(getline(f1,outlist))
    {

    cout<<"\n\t\t"<<outlist<<"\n";
    }
    }
      cout<<"\n\n\t\t1.BACK\n\n\t\t2.LOGOUT\n\n\t\t" ;
    char con;
        con=getch();
        system("CLS");
        if(con=='1')
            {
                goto y;
                loop=1;
            }
        else
            if(con=='2')
            goto x;
        else
        {
            cout<<"\n\n\n\n\t\t\tWrong input entered.";
            system("CLS");
            goto x;
        }
    break;
    case '3':
    system("CLS");
    cout<<"\n\n\n\t\tYour Profile\n\n";
    cout<<"\n\t\t\n\n1.Update profile\t\t2.See profile\n";
    char c;
    c=getch();
    system("CLS");
    if(c=='1')
    {
    string profile;
    profile=objtemp.user_id;
    profile+="profile.txt";
    ofstream f2(profile.c_str());
    objtemp.enter(objtemp.user_id);
    f2<<objtemp.user_id<<"\n"<<objtemp.uname<<"\n"<<objtemp.gender<<"\n"<<objtemp.dob<<"\n"<<objtemp.ptr->city<<"\n"<<objtemp.ptr->state<<"\n"<<objtemp.ptr->country<<endl;
    f2.close();
      cout<<"\n\n\t\t1.BACK\n\n\t\t2.LOGOUT\n\n\t\t" ;
    char con;
        con=getch();
        system("CLS");
        if(con=='1')
            {
                goto y;
                loop=1;
            }
        else
            if(con=='2')
            goto x;
        else
        {
            cout<<"\n\n\n\n\t\t\tWrong input entered.";
            system("CLS");
            goto x;
        }
    }
    else
    if(c=='2')
    {
    string profile;
    profile=objtemp.user_id;
    profile+="profile.txt";
    f1.open(profile.c_str());
    int flag2=0;
    string a,b,c,d,e,f,g; while(  getline(f1,a)&&getline(f1,b)&& getline(f1,c)&&getline(f1,d)&&getline(f1,e)&&getline(f1,f)&& getline(f1,g))
    {

    if(a==objtemp.user_id)
    {
    flag2=1;
    break;
    }
    }
    if(flag2==0)
    {
    cout<<"\n\n\t\tUser details are not entered yet \n";
      cout<<"\n\n\t\t1.BACK\n\n\t\t2.LOGOUT\n\n\t\t" ;
    char con;
        con=getch();
        system("CLS");
        if(con=='1')
            {
                goto y;
                loop=1;
            }
        else
            if(con=='2')
            goto x;
        else
        {
            cout<<"\n\n\n\n\t\t\tWrong input entered.";
            system("CLS");
            goto x;
        }
    }
    f1.close();
    cout<<"\n\n\n\t\tUser id  :  "<<objtemp.user_id<<"\n\n\t\tUser name  :  "<<b<<"\n\n\t\tGender  :  "<<c<<"\n\n\t\tDate of Birth  :  "<<d<<"\n\n\t\tAddress -\n\t\tCity  :  "<<e<<"\n\t\tState  :  "<<f<<"\n\t\tCountry  :  "<<g<<endl;
      cout<<"\n\n\t\t1.BACK\n\n\t\t2.LOGOUT\n\n\t\t" ;
    char con;
        con=getch();
        system("CLS");
        if(con=='1')
            {
                goto y;
                loop=1;
            }
        else
            if(con=='2')
            goto x;
        else
        {
            cout<<"\n\n\n\n\t\t\tWrong input entered.";
            system("CLS");
            goto x;
        }
    }
    else
    {
    system("CLS");
    cout<<"Wrong input entered";
      cout<<"\n\n\t\t1.BACK\n\n\t\t2.LOGOUT\n\n\t\t" ;
    char con;
        con=getch();
        system("CLS");
        if(con=='1')
            {
                goto y;
                loop=1;
            }
        else
            if(con=='2')
            goto x;
        else
        {
            cout<<"\n\n\n\n\t\t\tWrong input entered.";
            system("CLS");
            goto x;
        }
    }
    break;
    case '4':
    system("CLS");
    cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\tGood Bye\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    delay(1000);
    system("CLS");
    cout<<"\n\n\t\tDo you want to continue using facebook  y/n ?  :  ";

    con=getch();
    system("CLS");
    if(con=='y' || con=='Y')
    goto x;
    break;
    default:
    exit(1);
    }
    }
    else
    cout<<"Username doesn't exist(or wrong username entered) , please sign up\n";
    }
    else
    throw "Wrong input\n";
    }
    catch(const char* msg)
    {
    cout<<msg<<endl;
    }
    cout<<"\n\n\t\tDo you want to continue using facebook  y/n  ?  :  " ;
    char con;
    con=getch();
    system("CLS");
    if(con=='y' || con=='Y')
    goto x;
    else
    cout<<"\n\n\n\n\t\t\t\n\n\n";
    return 0;
    }