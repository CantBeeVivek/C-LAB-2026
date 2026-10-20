#include <stdio.h>

int main() {
    printf("PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND. \n");
    int h,m,s;
    printf("-----------------------------------------------------------------------------------------------\n");
    printf("PLEASE US A SEPERATOR ':' BETWEEN HOURS,MINUTES, SECONDS\n");
    printf("-----------------------------------------------------------------------------------------------\n");
    printf("Enter your time in the format (hour:min:sec) ");
    scanf("%d:%d:%d",&h,&m,&s);
    int sec= (h*3600)+(m*60)+s;
    printf("The provided time in seconds is %d",sec);
    return 0;
}
