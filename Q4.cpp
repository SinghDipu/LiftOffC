#include<stdio.h>
int main()
{
	int math,chem,phy,bio,comp;
	int tot;
	float per;
	printf("enter marks in maths");
	scanf("%d",&math);
	printf("enter marks in chemistry");
	scanf("%d",&chem);
	printf("enter marks in physics");
	scanf("%d",&phy);
	printf("enter marks in biology");
	scanf("%d",&bio);
	
	tot=math+chem+phy+bio+comp;
	per=tot/5;
	
	printf("percentage is :" ,per );
	
	if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
	
}
