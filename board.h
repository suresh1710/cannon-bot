// #ifndef BOARD_H
// #define	BOARD_H

#include <utility> 
#include <bits/stdc++.h>
using namespace std;

// class soldiers
// {
// public:
// 	int x;
// 	int y;
// 	int id;
// 	int alive;
// public:
// 	int is_alive()
// 	{

// 	}
// 	Soldiers(int x,int y,)

// };

class Cannon
{
public:
	int slope;
	pair<int,int> s1,s2,s3;


}
class Step
{
public:
	Move[2] m;
public:
	Step(Move m1,Move m2){
		m[0]=m1;
		m[1]=m2;
	}
};

class Move
{
	public:
		ch type;
		int x;
		int y;
	public:
		Move(){};
		Move(ch ty,int i1,int i2){
			type=ty;
			x=i1;
			y=i2;
		};

};

class Board
{
  public:

      int[8][8] battel_area; 
      int id;
      vector<pair<int,int>> mysoldiers;
      vector<pair<int,int>> oppsoldiers;
      int mytownhalls;
      int opptownhalls;
  public:
      void Board(int id)
      {
      }
      bool on_board(int x,int y)
      {
      	if(x>=0&&x<8&&y>=0&&y<8) return true;
      	else return false;
      }
      Move select_soldier()
      {

      } 
      //if id =1 
      void get_valid_moves( vector<Step>& valid_moves,int id)
      {
       
      Move m1,m2;
      int x,y;

      ///soldier moves
      for (int i = 0; i < 12; i++)
      {
      	if(mysoldiers[i].x<0)
      	{

      	}
      	else
      	{
           m1.type='S';
           m1.x=mysoldiers[i].x;
           m1.y=mysoldiers[i].y;
           x=m1.x;
           y=m1.y;
            	//forward
            	if(on_board(x-1,y-1*id))
            	{
            		if(battel_area[x-1][y-1*id]==0||battel_area[x-1][y-1*id]==-1)
            		{   
                    m2.type='M';
                    m2.x=x-1;
                    m2.y=y-1*id;
                    valid_moves.push_back(Step(m1,m2));

                    }


            	}
                if(on_board(x,y-1*id))
            	{
            		if(battel_area[x][y-1*id]==0||battel_area[x][y-1*id]==-1)
            		{   
                    m2.type='M';
                    m2.x=x;
                    m2.y=y-1*id;
                    valid_moves.push_back(Step(m1,m2));

                    }
                     

            	}
            	if(on_board(x+1,y-1*id))
            	{
            		if(battel_area[x+1][y-1*id]==0||battel_area[x+1][y-1*id]==-1)
            		{   
                    m2.type='M';
                    m2.x=x+1;
                    m2.y=y-1*id;
                    valid_moves.push_back(Step(m1,m2));

                    }
                     

            	}
            	//kills
            	if(on_board(x-1,y))
            	{
            		if(battel_area[x-1][y]==-1)
            		{   
                    m2.type='M';
                    m2.x=x-1;
                    m2.y=y;
                    valid_moves.push_back(Step(m1,m2));

                    }
                     

            	}

            	if(on_board(x+1,y))
            	{
            		if(battel_area[x+1][y]==-1)
            		{   
                    m2.type='M';
                    m2.x=x+1;
                    m2.y=y;
                    valid_moves.push_back(Step(m1,m2));

                    }
                     

            	}
            	//back tracking
            	if(on_board(x-2,y+2*id))
            	{
            		if(battel_area[x-1][y+1*id]==0&&battel_area[x-2][y+2*id]==0)
            		{   
                    m2.type='M';
                    m2.x=x-2;
                    m2.y=y+2*id;
                    valid_moves.push_back(Step(m1,m2));

                    }
                     

            	}
            	if(on_board(x,y+2*id))
            	{
            		if(battel_area[x][y+1*id]==0&&battel_area[x][y+2*id]==0)
            		{   
                    m2.type='M';
                    m2.x=x;
                    m2.y=y+2*id;
                    valid_moves.push_back(Step(m1,m2));

                    }
                     

            	}
            	if(on_board(x+2,y+2*id))
            	{
            		if(battel_area[x+1][y+1*id]==0&&battel_area[x+2][y+2*id]==0)
            		{   
                    m2.type='M';
                    m2.x=x+2;
                    m2.y=y+2*id;
                    valid_moves.push_back(Step(m1,m2));

                    }                     

            	}

      	}
      }


      //cannon moves





      }
      void execute_move(Step s,int id)
      {

      }
};
// #endif /* Board_H */