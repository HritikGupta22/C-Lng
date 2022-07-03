#include <stdio.h>
int main()
{
    float kmtomiles = 0.621371;
    float inchtofoot = 0.0833333;
    float cmstoinches = 0.393701;
    float poundtokg = 0.453592;
    float inchestomtr = 0.0254;
    char input;
    float first, second;
    printf("enter the charector no to select cases and q to quit \n 1.km to miles\n 2.inch to foot\n 3.cm to inches\n 4.pound to kg \n 5.inches to meter\n ");
    scanf(" %c", &input);

    while (1)
    {
        switch (input)
        {
        case 'q':
            printf("you are quiting\n");
            goto end;
            break;
        case '1':
            printf("enter the number for conversion::");
            scanf("%f", &first);
            second = first * kmtomiles;
            printf("%f km is equals to %f miles\n", first, second);
            break;
        case '2':
            printf("enter the number for conversion::");
            scanf("%f", &first);
            second = first * inchtofoot;
            printf("%f inch is equals to %f foots\n", first, second);
            break;
        case '3':
            printf("enter the number for conversion::");
            scanf("%f", &first);
            second = first * cmstoinches;
            printf("%f cm is equals to %f inches\n", first, second);
            break;
        case '4':
            printf("enter the number for conversion::");
            scanf("%f", &first);
            second = first * poundtokg;
            printf("%f pound is equals to %f kg\n", first, second);
            break;
        case '5':
            printf("enter the number for conversion::");
            scanf("%f", &first);
            second = first * inchestomtr;
            printf("%f inches is equals to %f meter\n", first, second);
            break;

        default:
            break;
        }
    }
end:

    return 0;
}