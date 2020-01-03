#include<iostream>
#include<cstring>
#include<conio.h>
#include<fstream>

using namespace std;

class quiz{


public:
    char id[20];
    char name[20];
    char s[100],ans;
    float point;
//    contest();
    void define();
    void display();
    void store();
};


void quiz::store(){

     ofstream scorefile;
     scorefile.open("file.txt");

     cout<<"\t\t   Please enter Your Name:";
     cin.getline(name, 20);
     scorefile << name << endl;

     cout<<"\t\t   Please enter Your ID:";
     cin.getline(id,20);
     scorefile<< id << endl;

     scorefile<<point;  //for getting score points.


scorefile.close();


}


void  quiz :: define()
{
   ifstream quizfile;
   char a,b,c,d,e,f,g;
      int i=0;
   quizfile.open("quiz4.txt");
    while(quizfile.eof()==0)
    {
    quizfile.getline(s,100);  // get 100 characters line
    cout<<endl<<s;
        if(i==8)      //get total line at a time

         {quizfile.get();
                  i=-1; //for stop i++

          cout<<"\n Give your answer:";
         cin>>ans;

            point=0;
            if(ans==a)   //for get answer
                {point=point+3;
                }
                else if(ans==b)
                {point=point+5;}
            else if(ans==c)
                {point=point+1;}
            else if(ans==d)
                {point=point+7;}
            else if(ans==e)
                {point=point+4;}
            else if(ans==a)
                {point=point+6;}
            else if(ans==g)
                {point=point+2;}
            else{
                cout<<" \n You made a Mistake, Please start again"<< endl;
            }
    }


    i++;
    }
   quizfile.close();
}



void quiz :: display()
   {
         cout<<"\t"<<"name: \t"<<name<<" \n \t   ID: \t"<<id<<" \n you got total "<< point <<" Numbers.. \n";

  cout<<"\n **Result:\n";
            if(point<21)     //for showing answer
                { cout<<" Under 20 points. \n People think you are shy, nervous, and indecisive, someone who needs looking after, who always wants someone else to make the decisions and who doesn't want to get involved with anyone or anything! They see you as a worrier who always sees problems that don't exist. Some people think you're boring. Only those who know you well, know that you aren't. \n"<< endl ;
                }

            else if(point<=30){
                cout<<" 21 to 30 points. \n Your friends see you as painstaking and fussy. They see you as very cautious, extremely careful, a slow and steady plodder. It would really surprise them if you ever did something impulsively or on the spur of the moment, expecting you to examine everything carefully from every angle and then, usually decide against it. They think this reaction is caused partly by your careful nature. \n"<< endl ;
            }
            else if(point<=40){
                cout<<"31 to 40 points. \n Others see you as sensible, cautious, careful & practical. They see you as clever, gifted, or talented, but modest. Not a person who makes friends too quickly or easily, but someone who's extremely loyal to friends you do make and who expects the same loyalty in return. Those who really get to know you, realize it takes a lot to shake your trust in your friends, but equally that it takes you a long time to get over if that trust is ever broken. \n"<< endl ;
            }
            else if(point<=50){
                cout<<"41 to 50 points. \n Others see you as fresh, lively, charming, amusing, practical, and always interesting, someone who's constantly in the center of attention, but sufficiently well-balanced not to let it go to their head. They also see you as kind, considerate, and understanding, someone who'll always cheer them up and help them out. \n"<< endl ;
            }
            else if(point<=60){
                cout<<" 51 to 60 points. \n Others see you as an exciting, highly volatile, rather impulsive personality, a natural leader, who's quick to make decisions, though not always the right ones. They see you as bold and adventuresome, someone who will try anything once, someone who takes chances and enjoys an adventure. They enjoy being in your company because of the excitement you radiate. \n"<< endl ;
            }
            else if(point>60){
                cout<<" Over 60 points. \n Others see you as someone they should handle with care. You're seen as vain, self-centered, and extremely dominant. Others may admire you, wishing they could be more like you, but don't always trust you, hesitating to become too deeply involved with you. \n"<< endl ;
            }
            else {
                cout<<"You Made A Mistake, Please try Again."<<endl;
            }

   }

int main()
{
    quiz r;

        r.store();
        r.define();
        r.display();

         //store result

       getch();

}
