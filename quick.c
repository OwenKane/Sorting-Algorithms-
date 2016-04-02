#include<stdio.h>
#include<conio.h>
void qsort(int arr[20], int first, int last);
int main()
{
 int arr[30];
 int i,size;
 printf("Enter total no. of the elements : ");
    
 scanf("%d",&size);
 printf("Enter total %d elements : \n",size);
    
 for(i=0; i<size; i++)
 {
    scanf("%d",&arr[i]);
 }
 
 qsort(arr,0,size-1);
 
 printf("Quick sorted elements are as  : \n");
 
 for(i=0; i<size; i++)
 {
    printf("%d\t",arr[i]);
 }
 
 getch();
 
 return 0;
}



void qsort(int arr[20], int first, int last)
{
 int i,j,pivot,tmp;
 //int test, ttemp = 0;
    
 if( first < last )
 {
    printf("\nRESTART \n");
   pivot=first;
    printf("pivot is %d, \n",pivot );
   i=first;
    printf("i is %d \n", i);
   j=last;
    printf("j is %d, \n",j );
    
   while(i<j)
   {
     while(arr[i] <= arr[pivot] && i < last)
     {
        i++;
        printf("i is %d, ",i );
     }
     printf("\n");
         
     while(arr[j] > arr[pivot])
     {
        j--;
        printf("j is %d, ",j ); 
     }
     printf("\n");
     
     if(i < j)
     {
        tmp=arr[i];
        printf("Temp is %d, ",tmp );
        arr[i]=arr[j];
        printf("array[i] %d, ",arr[i] );
        arr[j]=tmp; 
        printf("array[j] is %d, ",arr[j] );
     }
     printf("\n");
   }
   
   tmp=arr[pivot];
   printf("tmp is %d, \n",tmp );
   arr[pivot]=arr[j];
   printf("arr[j] is %d, \n",arr[j] );
   arr[j]=tmp;
   printf("tmp is %d , \n",tmp );
   
   
 
   
   qsort(arr,first,j-1);
   qsort(arr,j+1,last);
 }
}