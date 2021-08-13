#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;
int player1score=0,player2score=0,player3score=0,player4score=0;
void disp()
{
 cout<<"player 1 score is ="<<player1score<<endl;
 cout<<"player 2 score is ="<<player2score<<endl;
 cout<<"player 3 score is ="<<player3score<<endl;
 cout<<"player 4 score is ="<<player4score<<endl;
}
void roll_1()
{
 srand(time(NULL));
 cout<<"player 1 ,press enter to roll the dice and get the number"<<endl;
 getch();
 int k=rand()%6;
 cout<<"the number is "<<k<<endl;
 player1score+=k;
 cout<<"scores of all the players are"<<endl;
 disp();
 cout<<endl;
}
void roll_2()
{
 srand(time(NULL));
 cout<<"player 2 ,press enter to roll the dice and get the number"<<endl;
 getch();
 int k=rand()%6;
 cout<<"the number is "<<k<<endl;
 player2score+=k;
 cout<<"scores of all the players are"<<endl;
 disp();
 cout<<endl;
}
void roll_3()
{
 srand(time(NULL));
 cout<<"player 3 ,press enter to roll the dice and get the number"<<endl;
 getch();
 int k=rand()%6;
 cout<<"the number is "<<k<<endl;
 player3score+=k;
 cout<<"scores of all the players are"<<endl;
 disp();
 cout<<endl;
}
void roll_4()
{
 srand(time(NULL));
 cout<<"player 4 ,press enter to roll the dice and get the number"<<endl;
 getch();
 int k=rand()%6;
 cout<<"the number is "<<k<<endl;
 player4score+=k;
 cout<<"scores of all the players are"<<endl;
 disp();
 cout<<endl;
}
int main()
{
 cout<<"Hello,Welcome to Pig Game.There will be four players in the game.Player which reaches the sum >=100 first,will be the winner.Enjoy the game."<<endl<<endl;
 while(1)
{
 roll_1();
 if(player1score>=100)
 {
 cout<<"player 1 wins"<<endl;
 break;
 }
 roll_2();
 if(player2score>=100)
 {
 cout<<"player 2 wins"<<endl;
 break;
 }
 roll_3();
 if(player3score>=100)
 {
 cout<<"player 3 wins"<<endl;
 break;
 }
 roll_4();
 if(player4score>=100)
 {
 cout<<"player 4 wins"<<endl;
 break;
 }
}
 return 1;
}
