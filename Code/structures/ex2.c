#include<stdio.h>

struct Cricket
{
    char team1[20];
    char team2[20];
    char ground[18];
    int result;
}match[4] = {
              {"IND","AUS","PUNE",1},
              {"IND","PAK","NAGPUR",1},
              {"IND","NZ","MUMBAI",0},
              {"IND","SA","DELHI",1}
            }, *ptr;

void main() 
{

    ptr=match;
//struct Cricket *ptr = match;   // By default match[0]
for(int i=0;i<4;i++) 
    {
    printf("\nMatch : %d",i+1);
    printf("\n%s Vs %s",ptr->team1,ptr->team2);
    printf("\nPlace : %s",ptr->ground);

    if(match[i].result == 1)
        printf("nWinner : %s",ptr->team1);
    else
        printf("nWinner : %s",ptr->team1);
    printf("\n");

    // Move Pointer to next structure element
    ptr++;
    }
}
