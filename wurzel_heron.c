#include <stdio.h>
float wurzel_via_heron(float num){
    float start = num;
    float save;
    do {
        save = start;
        start = (start +(num/start))/2;
        // printf("%f\n", start);
    } while(save != start);
    return start;
}


int main()
{
    int num = 10; 
    float w = wurzel_via_heron(num);
    printf("%f", w);
    return 0; 
}
