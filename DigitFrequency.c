#include <stdio.h>
/* digit frequency in a string */




#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[1000];
    char b[]="0123456789";
    int i,count=0,l,j;
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<10;i++)
    {
        for(j=0;j<l;j++)
        {
            if(b[i]==a[j])
            {
                count++;
            }
        }
        printf("%d ",count);
        count=0;
    }



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
