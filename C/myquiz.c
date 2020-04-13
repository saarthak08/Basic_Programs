#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<errno.h>
#include<signal.h>

int score=0;

double total;

clock_t start,end;

void end_game(int sig)  //The function which we run after ending game, int sig is the signal number
{
	printf("\n\nYour Score = %d\n",score);
	end=clock();
	total=((double)(end-start))/CLOCKS_PER_SEC;
	printf("Time of execution of program is %f seconds\n",total);
	exit(0);
}

int catch_signal(int sig,void(*handler)(int))
{
	struct sigaction action;
	action.sa_handler=handler;
	sigemptyset(&action.sa_mask);
	action.sa_flags=0;
	return sigaction(sig,&action,NULL);
}

void time_up(int sig)
{
	printf("\nTime's Up!\n");
	raise(SIGINT);
}

int main()
{
	int i,k;
	char txt[5];
	printf("Hello");
	x:printf("\n\nWelcome to the multiplication quiz test.\nTest your skills.\nYou can quit at any time by entering \'Ctrl + C\'.\nYou will be given 5 seconds for each question\nPress \'Enter\' to start the game\n");
	getchar();
	start=clock();
	catch_signal(SIGALRM,time_up);
	catch_signal(SIGINT,end_game);
	srandom(time(0));
	while(1)
	{
		int a=random()%11;
		int b=random()%11;
		alarm(5);
		printf("\nWhat is %d times %d?\n",a,b);
		scanf("%[^\n]%*c",txt);
		i=atoi(txt);
		if(i==(a*b))
		{
			score++;
		}
		else
		{
		printf("\nYour final score:%d",score);
		break;
		}
	}
		printf("\nDo you want to play again?\nPress \'1\' for Yes\nPress \'2\' for No\n");
		scanf("%d%*c",&k);
		if(k==1)
		{
			goto x;
			alarm(15);
		}
		else
		{
		end=clock();
		total=((double)(end-start))/CLOCKS_PER_SEC;
		printf("Time of execution of program is %f seconds\n",total);
		}
		return 0;
}
