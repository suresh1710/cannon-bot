#include "Board.h"

void Board::Board(int id)
{
	for (int i = 0; i < 8; i++)
	{
		for (int i1 = 0; i1 < 8;i1++)
		{
			battel_area[i][i1]==0;
		}
	}

	battel_area[0][0]=2*-id;
	battel_area[2][0]=2*-id;
	battel_area[4][0]=2*-id;
	battel_area[6][0]=2*-id;


	battel_area[1][7]=-2*-id;
	battel_area[3][7]=-2*-id;
	battel_area[5][7]=-2*-id;
	battel_area[7][7]=-2*-id;

	for (int i = 1; i < 8; i=i+2)
	{
		for (int i1 = 0; i1 < 3; i1++)
		{
			battel_area[i][i1]=1*-id;
			if(id==1)
			oppsoldiers.push_back(make_pair(i,i1));
		    else
		    	mysoldiers.push_back(make_pair(i,i1));


		}
	}
   
	for (int i = 0; i < 8; i=i+2)
	{
		for (int i1 = 5; i1 < 8; i1++)
		{
			battel_area[i][i1]=-1*-id;
			if(id==1)
			mysoldiers.push_back(make_pair(i,i1));
		   else
		    oppsoldiers.push_back(make_pair(i,i1));
		}
	}
	mytownhalls=4;
	opptownhalls=4;

}

void Board::execute_move(Step s,int id,int player)
{
 ch s1,s1;
 int x1,x2,y1,y2;
 s1=s.m[0].type;
 s2=s.m[1].type;
 x1=s.m[0].x;
 x2=s.m[1].x;
 y1=s.m[0].y;
 y2=s.m[1].y;


 

if (id==player)
{    

		 if (s2=='M')
		 {
		 	battel_area[x1][y1]=0;
		 	battel_area[x2][y2]=1;
		 	if(battel_area[x2][y2]==-1)
		 	{
		       for (int i = 0; i < 12; i++)
		       {
		       	
		       	if (oppsoldiers[i].first==x2&&oppsoldiers[i].second==y2)
		       	{
		       		oppsoldiers[i].first=-10;
		       		oppsoldiers[i].second=-10;
		       		break;
		       	}
		       }
		 	}


		 }
		 else
		 {
		   if(battel_area[x2][y2]==-2)
		   {
		   	opptownhalls=opptownhalls-1;
		   	battel_area[x2][y2]=0;
		   }
		   else if(battel_area[x2][y2]==-1)
		   {
		   	battel_area[x2][y2]=0;

		     for (int i = 0; i < 12; i++)
		       {
		       	
		       	if (oppsoldiers[i].first==x2&&oppsoldiers[i].second==y2)
		       	{
		       		oppsoldiers[i].first=-10;
		       		oppsoldiers[i].second=-10;
		       		break;
		       	}
		       }

		   }

		 }

  }

  else
  {
    if (s2=='M')
		 {
		 	battel_area[x1][y1]=0;
		 	battel_area[x2][y2]=-1;
		 	if(battel_area[x2][y2]==1)
		 	{
		       for (int i = 0; i < 12; i++)
		       {
		       	
		       	if (mysoldiers[i].first==x2&&mysoldiers[i].second==y2)
		       	{
		       		mysoldiers[i].first=-10;
		       		mysoldiers[i].second=-10;
		       		break;
		       	}
		       }
		 	}


		 }
		 else
		 {
		   if(battel_area[x2][y2]==2)
		   {
		   	mytownhalls=mytownhalls-1;
		   	battel_area[x2][y2]=0;
		   }
		   else if(battel_area[x2][y2]==1)
		   {
		   	battel_area[x2][y2]=0;

		     for (int i = 0; i < 12; i++)
		       {
		       	
		       if (mysoldiers[i].first==x2&&mysoldiers[i].second==y2)
		       	{
		       		mysoldiers[i].first=-10;
		       		mysoldiers[i].second=-10;
		       		break;
		       	}
		       }

		   }

		 }

  }

}

// void move_soldier(int x1,int y1,int x2,int y2,int id)
// {
// 	if(battel_area[x2][y2]==0)
// 	{

// 	}
// 	else if(battel_area[x2][y2]==)
// 	{

// 	}


// }

