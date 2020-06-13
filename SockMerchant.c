/*John works at a clothing store. He has a large pile of socks that he must pair by color for sale. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

For example, there are  n=7 socks with colors ar=[1, 2, 1, 2, 1, 3, 2] . There is one pair of color 1 and one of color 2. There are three odd socks left, one of each color. The number of pairs is 2.*/


#include<stdio.h>
int main()
{
    int a[100],i,j,n;
    int count,pairs=0,value;
    int k=0,l;
    int v[200];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        value=0;
        count=1;
        for(l=0;l<k;l++)
        {
            if(a[i]==v[l])
            {
                value++;
                break;
            }
        }
        if(value==1)
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                v[k]=a[i];
                count++;
            }
        }
        pairs=pairs+(count/2);
        k++;
    }
    printf("%d",pairs);
    return 0;
}
