#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


float Overhead_bill_for_each()
{
        float Mon_Serv = 60+9.99*3;
	float Govt_Fee = 6.47+2.49+2.52+3.96;
     	return (Mon_Serv+Govt_Fee)/4;
}

float HX_bill()
{
        float sum = 0;
	sum = Overhead_bill_for_each() + 4.99 + 15.00 +5.00 - 7.65 + 0.6;
	return sum;
}

float LXX_bill()
{
        float sum = 0;
	sum = Overhead_bill_for_each() + 4.99 + 15.00 + 1.47 + 0.2;
	return sum;
}

float HYF_bill()
{
        float sum = 0;
	sum = Overhead_bill_for_each() + 15.00 + 0.8 + 4.65;
	return sum;
}

float LB_bill()
{
        float sum = 0;
	sum = Overhead_bill_for_each() + 15.00 + 20.0 - 1.56;
	return sum;
}
int main()
{
        printf("This program is print out the cell phone bill of October\n");
	printf("HX_bill: $ %f\n",HX_bill());
	printf("LXX_bill: $ %f\n",LXX_bill());
	printf("HYF_bill: $ %f\n",HYF_bill());
	printf("LB_bill: $ %f\n",LB_bill());
	printf("Total amount is $ %f\n",HX_bill()+LXX_bill()\
	       +HYF_bill()+LB_bill());
	exit(0);
}
