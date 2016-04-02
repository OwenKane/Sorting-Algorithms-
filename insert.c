#include<stdio.h>
#define MAX 4

struct masterstuck
{
    int num[MAX];
    int year[MAX];
};

struct studentinput
{
    int num[1];
    int year[1];
};

int main(){

    int i,j,temp;
    int stutemp;
    
    struct masterstuck master;
    struct studentinput studentin[MAX];
    
    for(int i = 0; i < MAX; i++)
    {
        printf("Please enter your student number given to you by your pervious college\n");
        scanf("%d",&studentin[i].num[0]);
        
        printf("Please enter what year you are in\n");
        scanf("%d",&studentin[i].year[0]);
        
        printf("\n\n");
    }
    
    for(int i = 0; i < MAX; i++)
    {
        master.num[i] = studentin[i].num[0];
        master.year[i] = studentin[i].year[0];
    }
    

    for(i=1;i<MAX;i++)
    {
        temp=master.year[i];
        stutemp = master.num[i];
        
        j=i-1;
        
        while((temp<master.year[j])&&(j>=0))
        {
            master.year[j+1]=master.year[j];
            master.num[j+1] = master.num[j];
            
            j=j-1;
        }
        
        master.year[j+1]=temp;
        master.num[j+1] = stutemp;
    }

    printf("After sorting: ");
  
    for(i=0;i<MAX;i++)
    {
        printf("%d, ",master.year[i]);
    }
    
    printf("\n\n");
    
    printf("Student array:");
    for(i=0;i<MAX;i++)
    {
        printf("%d, ",master.num[i]);
    }

    getchar();
    getchar();
    getchar();

}