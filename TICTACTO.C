#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	//char sign;
	int winner=0,count=0;
	int i,j,k,flag,a[9],index,sign,player;
	clrscr();
	j=49;
	for(i=0;i<9;i++,j++)
	{
		a[i]=' ';
	}

	while(count<9)
	{
		clrscr();
		printf("\n\n");
		printf("\n%c|%c|%c",a[0],a[1],a[2]);
		printf("\n------");
		printf("\n%c|%c|%c",a[3],a[4],a[5]);
		printf("\n------");
		printf("\n%c|%c|%c",a[6],a[7],a[8]);

		if(count%2==0)
		{
			sign='X';
			player=1;
		}
		else
		{
			sign='O';
			player=2;
		}

		printf("\nMove of player %d\n",player);
		scanf("%d",&index);

		if(index<1||index>9)
		{
			printf("\nInvalide input\nPress Enter");
			getch();
			continue;
		}
		if(a[index-1]=='X'||a[index-1]=='O')
		{
			printf("\nPosition already oqupied\nPress Enter");
			getch();
			continue;
		}
		a[index-1]=sign;
		count++;

		for(k=0;k<9;k=k+3)
		{
			if(a[k]==sign&&a[k+1]==sign&&a[k+2]==sign)
			{
				winner=1;
				goto win;
			}
		}
		for(k=0;k<3;k++)
		{
			if(a[k]==sign&&a[k+3]==sign&&a[k+6]==sign)
			{
				winner=1;
				goto win;
			}
		}
		if((a[0]==sign&&a[4]==sign&&a[8]==sign)||(a[2]==sign&&a[4]==sign&&a[6]==sign))
		{
			winner=1;
			goto win;
		}
	       winner = 0;
	}
	win:
		clrscr();
		printf("\n\n");
		printf("\n%c|%c|%c",a[0],a[1],a[2]);
		printf("\n------");
		printf("\n%c|%c|%c",a[3],a[4],a[5]);
		printf("\n------");
		printf("\n%c|%c|%c",a[6],a[7],a[8]);
	if(winner)
	{
		printf("\n\nPlayer %d Wins ,\n\tCongrats!!",player);
	}
	else
	{
		printf("\nMatch Draws!!!");
	}

	getch();
}