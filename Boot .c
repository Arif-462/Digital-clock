#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<windows.h>
int main()
{
    int h,m,s;
    
    printf("Set your time plese : \n\n");
    printf("Enter hours : ");
    scanf("%d", &h);
    printf("Enter a minutes : ");
    scanf("%d",&m);
    printf("Enter seconds : ");
    scanf("%d",&s);
    if(h>12 || m>60 || s>60)
    {
        printf("Error fff2xxx:");
        return h;
    }
    while(1)
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        if(h>24)
        {
            h=0;
            m=0;
            s=0;
        }
        printf("\n\n\n\t\t\t\t\t\t********** ARIF **********\n\n\n\n");
        printf("\t\t\t\t\t\t   Clock :");
        printf("%02d:%02d:%02d ",h ,m ,s);
        if(h<12)
        {
            printf("AM\n");
        }
        else
        {
            printf("PM\n");
        }
        printf("\n\n\n\t\t\t\t\t\t********** ARIF **********\n");

        sleep(1);
        
        system("cls");       

    }
    return 0;

}