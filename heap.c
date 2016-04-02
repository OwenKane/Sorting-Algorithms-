#include <stdio.h>
 
void main()
{
    int heap[10], no, i, j, c, root, temp;
    int student[4] = {1, 2, 3, 4};
    int stutemp;
    int stuc;
    int sturoot;
    int stuj;
 
    printf("\nEnter no of elements :\n");
    scanf("%d", &no);
    
    printf("\nEnter the numbers : \n");
    
    for (i = 0; i < no; i++)
    {
       scanf("%d", &heap[i]);
    }
    for (i = 1; i < no; i++)
    {
        c = i;
        
        do
        {
            root = (c - 1) / 2;
            
            
            if (heap[root] < heap[c])   /* to create MAX heap array */
            {
                temp = heap[root];
                stutemp = student[root];//here
                
                heap[root] = heap[c];
                student[root] = student[c];//here
                
                heap[c] = temp;
                student[c] = stutemp;//here
            }
            c = root;
            
            //stuc = sturoot;//here
            
        } while (c != 0);
    }
    
    for (j = no - 1; j >= 0; j--)
    {
        temp = heap[0];
        stutemp = student[0];//here
        
        heap[0] = heap[j];   /* swap max element with rightmost leaf element */
        student[0] = student[j];//here
        
        heap[j] = temp;
        student[j] = stutemp;//here
        
        root = 0;
        //sturoot = 0;//here
        do 
        {
            c = 2 * root + 1;    /* left node of root element */
            if ((heap[c] < heap[c + 1]) && c < j-1)
            {
                c++;
                //stuc++;//here
            }
            
            if (heap[root]<heap[c] && c<j)    /* again rearrange to max heap array */
            {
                temp = heap[root];
                stutemp = student[root];//here
                
                heap[root] = heap[c];
                student[root] = student[c];//here
                
                heap[c] = temp;
                student[c] = stutemp;//here
                
                
            }
            root = c;
            //sturoot = c;//here
        } while (c < j);
    }
    
    printf("\n\n\nThe sorted array is : ");
    for (i = 0; i < no; i++)
    {
       printf("\t %d", heap[i]);
    }
    
    printf("\n\n\n");
    
     printf("The student array is : ");
    for (i = 0; i < no; i++)
    {
       printf("\t %d", student[i]);
    }
    
    
    getchar();
    getchar();
    getchar();
    getchar();
}