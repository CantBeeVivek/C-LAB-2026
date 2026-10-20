#include <stdio.h>

int main() {
    int total=31558150;
    int day=total/86400;
    int r=total%86400;
    int hours=r/3600;
    int ri=r%3600;
    int minute=ri/60;
    int rim=ri%60;
    int second=rim;
    printf("----------------------------------------------------------------------------------------------------------------\n");
    printf("EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS\n");
    printf("----------------------------------------------------------------------------------------------------------------\n");
    printf("It can also be expressed as\n");
    printf("Days        :%d days\n",day);
    printf("Hours       :%d hours\n",hours);
    printf("Minutes     :%d minutes\n",minute);
    printf("Seconds     :%d seconds",second);
}


