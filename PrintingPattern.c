/*In this problem, you need to print the pattern of the following form containing the numbers from  1 to n.

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   */
                            
                            

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void print(int n,int i)
{
    int t,p,d; 
        d=n;
        for(p=1;p<=i;p++)
        {
            
            printf("%d ",d);
            d--;
        }
        for(t=1+i;t<2*n-i;t++)
        {
            printf("%d ",n-i);
        }
        for(p=1;p<=i;p++)
        {
            d++;
            printf("%d ",d);
        }
    }
int main() 
{
    int i,j,temp,k;
    int n;
    scanf("%d", &n);
    temp=n-2;
    for(i=0;i<(2*n)-1;i++)
    {
        if(i<n)
        {
            print(n,i);
        }
        else {
            print(n,temp);
            temp--;
        }
        printf("\n");
    }
  	// Complete the code to print the pattern.
    return 0;
}
