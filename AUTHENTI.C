#include<stdio.h>
#include<conio.h>
int pinset()
{

	int p,rtp;

	clrscr();
	printf("To set PIN ");
	enter:

	printf("\n\nEnter PIN having 4 digit :: ");
	scanf("%d",&p);



		if(p>=1000&&p<=9999)
		{

		}
		else
		{
		printf("\n\t!!!PIN must be having four Digits only");
		goto enter;
		}


	re:

	printf("Retype PIN :: ");
	scanf("%d",&rtp);


		if(p!=rtp)
		{
			printf("\nPIN did not match ");
			goto re;
		}
	printf("\n\n\t\tPIN is set");
	return p;
}
void main()
{
	char k;
	int pin , upin,t=3,flag=0;
	clrscr();
	pin = pinset();
	getch();
	clrscr();
	while(t>=1)
	{

		printf("\n\tEnter 4 digit PIN :: ");
		scanf("%d",&upin);


		if(upin==pin)
		{
			flag=1;
			break;

		}
		else
		{
			t--;
			if(t!=0)
			{
				printf("\n\t\tWrong PIN, %d try left",t);
				printf("\nTry again? Y/N : ");
				fflush(stdin);
				scanf("%c",&k);
			}
			else
			{
				printf("\n\t\tWrong PIN , %d try left",t);
				getch();
			}

			if(k=='n'||k=='N')
			{
				break;
				goto end;
			}

		}
	}
	end:

	if(flag==1)
	{
		printf("\n\t\tAuthentication Successful");
	}
	else
	{

		printf("\n\n\t\tYou exceeded your trials.\n\t\tAccess Denied");

	}

	getch();
}