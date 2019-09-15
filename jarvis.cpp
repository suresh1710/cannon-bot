
#include "Board.h"

int player,n,m,current_player;
float time_left;
Board game;


void play()
{
   Step s; 
   Move m1,m2;

	if(player==-1)
	{ current_player=1;
     cin>>m1.type;
     cin>>m1.x;
     cin>>m1.y;
     cin>>m2.type;
     cin>>m2.x;
     cin>>m2.y;
     s=Step(m1,m2);
     game.execute_move(s,current_player,player);


	}
}
int main()
{
	cin>>player;
	if(player==1)
	{
		player=1;
	}
	else
		player=-1;
	cin>>n;
	cin>>m;
	cin>>time;

	game=Board(player);
	play();

}
