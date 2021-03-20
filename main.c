#include <stdio.h>
#include <stdlib.h>

int main()
{
    float convertfrom;
    float convertto;
    float number;

    printf("\n***This Project is Compiled By Faheem Baloch***\n\n***Enter Any Number To Convert it into Square Foot, Meters and inches***\n Number = ");
    scanf("%f",&number);

    printf("\n***Convert From***\n Chose only one Option\n");
    printf("\n 1 for Square foot");
    printf("\n 2 for Meter");
    printf("\n 3 for Inches\n\n Option = ");
    scanf("%f",&convertfrom);

    printf("\n***Convert To***\n Chose only one Option\n");
    printf("\n 1 for Square foot");
    printf("\n 2 for Meter");
    printf("\n 3 for inches\n\n Option = ");
    scanf("%f",&convertto);

    if(convertfrom==1 && convertto==1){
    printf("\n%.1f Square foot = %.1f Square foot\n",number,number);
    }
    if(convertfrom==1 && convertto==2){
    float result=number/10.764/2;
    printf("\n%.1f Square foot = %.1f Meter\n",number,result);
    }
    if(convertfrom==1 && convertto==3){
    float result=number*144/2;
    printf("\n%.1f Square foot = %.1f Inches\n",number,result);
    }
    if(convertfrom==2 && convertto==1){
    float result=number*2*10.764;
    printf("\n%.1f Meter = %.1f Square foot\n",number,result);
    }
    if(convertfrom==2 && convertto==2){
    printf("\n%.1f Meter = %.1f Meter\n",number,number);
    }
    if(convertfrom==2 && convertto==3){
    float result=number*39.37;
    printf("\n%.1f Meter = %.1f inches\n",number,result);
    }
    if(convertfrom==3 && convertto==1){
    float result=number*2/144;
    printf("\n %.1f Inch = %.1f Square foot",number,result);
    }
    if(convertfrom==3 && convertto==2){
    float result=number/39.37;
    printf("\n %.1f Inch = %.1f Meter",number,result);
    }
    if(convertfrom==3 && convertto==3){
    printf("\n %.1f Inch = %.1f Inch",number,number);
    }
}
