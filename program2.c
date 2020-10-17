#include <stdio.h>
float avg(float a, float b)
{float avg;
avg=(a+b)/2;
return avg;
}

int main()
{
    float ans;
    
    ans = avg(4,5);
    printf("Average of the numbers is: %f",ans);

    
}
