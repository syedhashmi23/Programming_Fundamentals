#include<stdio.h>
int main()
{
	int score,wicket;
    printf("enter the score to make\n");

	scanf("%d",&score);
	scanf("%d",&wicket);
	int score_req=300-score;
	if(score>=0&&wicket>=0)
	{
		if(score>=300&&wicket>0)
		{
			printf("pakistan won by %d wickets",wicket);
		}
		else if(score=300&&wicket==0)
		{
			printf("match is draw");
		}
		else if(score<300&&score>=0)
		{
			printf("pakistan need %d runs to win",score_req);
		}
	}
	else 
	printf("wrong input");
	return 0;
}
