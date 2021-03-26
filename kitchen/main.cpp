#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   char o,y,n,p;
    int d,q;
    cout<<"\t---------------------------------"<<endl;
    cout<<"\t|\"Welcome TO Smart Kitchen   \"|"<<endl;
    cout<<"\t---------------------------------"<<endl;
    cout<<"\n\nWhich Dish you want to Eat...?"<<endl;
    cout<<"__________________"<<setw(25)<<"_________________"<<setw(25)<<"_________________"<<endl;
    cout<<"| 1 = Burger     |"<<setw(25)<<"| 2 = Fish      |"<<setw(25)<<"| 3 = Wings     |"<<endl;
    cout<<"------------------"<<setw(25)<<"-----------------"<<setw(25)<<"-----------------"<<endl;
    cout<<"__________________"<<setw(25)<<"_________________"<<setw(25)<<"_________________"<<endl;
    cout<<"| 4 = Fruit Salad|"<<setw(25)<<"| 5 = Donuts    |"<<setw(25)<<"| 6 = Pizza     |"<<endl;
    cout<<"------------------"<<setw(25)<<"-----------------"<<setw(25)<<"-----------------"<<endl;
  do{
    cout<<"\nEnter The Order no :";cin>>d;
    cout<<"Enter the quantity :";cin>>q;




switch(d)
{
case 1:
    {cout<<"\nYou have Selected Burger\nThe Amount for "<<q<<" Burger is Rs :"<<" | "<< q*60 <<" |"<<endl;
     cout<<"\nDO you want it Parcel...??\nY to Yes\nN to No"<<endl;cin>>o;
       switch(o)
    {case 'y':
     cout<<"\nYour Parcel will be ready within 10 minutes...\n\n\t\tThanks For Visit!";break;
     case 'n':
     cout<<"\nPlease sit on table no 4.We'll give you a service within 8.5 minutes\n\n\t\tThanks For Visit!";break;
}break;}


case 2:
    {cout<<"\nYou have Selected Fish\nThe Amount for "<<q<<" kg Fish is Rs :"<<" | "<< q*450 <<" |"<<endl;
     cout<<"\nDO you want it Parcel...??\nY to Yes\nN to No"<<endl;cin>>o;
       switch(o)
    {case 'y':
     cout<<"\nYour Parcel will be ready within 10 minutes...\n\n\t\tThanks For Visit!";break;
     case 'n':
     cout<<"\nPlease sit on table no 4.We'll give you a service within 8.5 minutes\n\n\t\tThanks For Visit!";break;
}break;}


case 3:
    {cout<<"\nYou have Selected Wings\nThe Amount for "<<q<<" Wings are Rs :"<<" | "<< q*14 <<" |"<<endl;
     cout<<"\nDO you want it Parcel...??\nY to Yes\nN to No"<<endl;cin>>o;
       switch(o)
    {case 'y':
     cout<<"\nYour Parcel will be ready within 10 minutes...\n\n\t\tThanks For Visit!";break;
     case 'n':
     cout<<"\nPlease sit on table no 4.We'll give you a service within 8.5 minutes\n\n\t\tThanks For Visit!";break;
}break;}



case 4:
    {cout<<"\nYou have Selected Fruit salad\nThe Amount for "<<q<<" kg Salad is Rs :"<<" | "<< q*120 <<" |"<<endl;
     cout<<"\nDO you want it Parcel...??\nY to Yes\nN to No"<<endl;cin>>o;
       switch(o)
    {case 'y':
     cout<<"\nYour Parcel will be ready within 10 minutes...\n\n\t\tThanks For Visit!";break;
     case 'n':
     cout<<"\nPlease sit on table no 4.We'll give you a service within 8.5 minutes\n\n\t\tThanks For Visit!";break;
}break;}




case 5:
    {cout<<"\nYou have Selected Donuts.\nThe Amount for "<<q<<" Donuts are Rs :"<<" | "<< q*45 <<" |"<<endl;
     cout<<"\nDO you want it Parcel...??\nY to Yes\nN to No"<<endl;cin>>o;
       switch(o)
    {case 'y':
     cout<<"\nYour Parcel will be ready within 10 minutes...\n\n\t\tThanks For Visit!";break;
     case 'n':
     cout<<"\nPlease sit on table no 4.We'll give you a service within 8.5 minutes\n\n\t\tThanks For Visit!";break;
}break;}


case 6:
    {cout<<"\nYou have Selected Pizza.\nPlease tell us about size...\nl = large\nm = Medium\ns = Small"<<endl;
      cin>>p;
          switch(p){
           case'l':cout<<"\nThe Amount for "<<q<< " large Pizza is Rs :"<<" | "<< q*750 <<" |"<<endl;break;
            case'm':cout<<"\nThe Amount for "<<q<< " medium Pizza is Rs :"<<" | "<< q*550 <<" |"<<endl;break;
             case's':cout<<"\nThe Amount for "<<q<< " small Pizza is Rs :"<<" | "<< q*350 <<" |"<<endl;break;}

        cout<<"\nDO you want to Parcel...??\nY to Yes\nN to No"<<endl;cin>>o;
       switch(o)
        {case 'y':
         cout<<"\nYour Parcel will be ready in 10 minutes...\n\n\t\tThanks For Visit!";break;
         case 'n':
         cout<<"\nPlease sit on table no 4.We'll give you a service within 8.5 minutes\n\n\t\tThanks For Visit!";break;
}break;}


}
cout<<endl<<endl<<endl<<endl;}while(q=-1);
}
