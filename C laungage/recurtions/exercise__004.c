#include<stdio.h>
int main()
{
    char inp;
    float kilometres_to_miles=0.621;
    float inches_to_foot=0.083;
    float cm_to_inches=0.393;
    float pound_to_kilograms=0.453;
    float inches_to_metres=0.025;
    float first,second ;

    while (1)
    {
        printf("input the charactors . q for quit \n 1.kms to miles \n 2.inches to foot\n 3.cms to inches\n 4.pound to kgs\n 5.inches to metres\n");
        scanf("%c",&inp);
        printf("enter quantity in terms of first unit\n");
        
        switch (inp)
        {
        case 'q':
            printf("quiting this program .....\n"); 
            goto end;
            break;

            case "1":
            second=first*kilometres_to_miles;
            printf("%f kmeter is equal to %f miles \n" , first,second);
            break;

            case "2":
            second=first*inches_to_foot;
            printf("%f inches is equal to %f foot\n" , first,second);
            break;

            case "3":
            second=first*cm_to_inches;
            printf("%f centimetres is equal to %f inches \n" , first,second);
            break;

            case "4":
            second=first*pound_to_kilograms;
            printf("%f pound is equal to %f kilograms\n" , first,second); 
            break;

            case "5":
            second=first*inches_to_metres;
            printf("%f inches is equal to %f metres \n" , first,second);
          
            break;
        
        default:
            break;
        }

        
    }
    end:
    return 0;
}

