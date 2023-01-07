#include<stdio.h>
#include<math.h>
int main()
{
    char ch;
    float w,x,y,z,a,b,c,n,m,p,o,r,s;
    int q;
    printf("A. unit is 0 to 100\nB. unit is 100 to 300\n");
    printf("C. unit is 300 to 500\nD. unit is above 500");
    printf("Enter the Alphabet is per condition");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A':
        printf("Enter your unit");
        scanf("%d",&q);
        printf("\nEnger charges = %f", w=q*2.90);
        printf("\nFixed charges = %f", y=70);
        printf("\nWeeling charges = %f", x=q*1.57);
        printf("\nConsumer Charges = %f",z=w+x+y);
        printf("\nGoverment ED charges by 16per =%f", a=(16*z)/100);
        printf("\nGoverment Tax = %f",  b=q*0.2604);
        printf("\nTotal Bill Amount == %f",c=z+a+b); 
       break;
       case 'B':
        printf("Enter your unit");
        scanf("%d",&q);
        n=100*2.90;
        m=q-100;
        p=m*4.85;
        o=p+n;
        printf("\nEnger charges = %f", o);
        printf("\nFixed charges = %f", y=110);
        printf("\nWeeling charges = %f", x=q*1.57);
        printf("\nConsumer Charges = %f",z=o+x+y);
        printf("\nGoverment ED charges by 16per =%f", a=(16*z)/100);
        printf("\nGoverment Tax = %f",  b=q*0.2604);
        printf("\nTotal Bill Amount == %f",c=z+a+b);
        break;
        case 'C':
        printf("Enter your unit");
        scanf("%d",&q);
        n=100*2.90;
        r=200*4.85;
        m=300-q;
        p=m*6.65;
        o=p+r+n;
        printf("\nEnger charges = %f", o);
        printf("\nFixed charges = %f", y=110);
        printf("\nWeeling charges = %f", x=q*1.57);
        printf("\nConsumer Charges = %f",z=o+x+y);
        printf("\nGoverment ED charges by 16per =%f", a=(16*z)/100);
        printf("\nGoverment Tax = %f",  b=q*0.2604);
        printf("\nTotal Bill Amount == %f",c=z+a+b);
        break;
        case 'D':
        printf("Enter your unit");
        scanf("%d",&q);
        n=100*2.90;
        r=200*4.85;
        s=200*6.65;
        m=500-q;
        p=m*7.8;
        o=p+r+s+n;
        printf("\nEnger charges = %f", o);
        printf("\nFixed charges = %f", y=110);
        printf("\nWeeling charges = %f", x=q*1.57);
        printf("\nConsumer Charges = %f",z=o+x+y);
        printf("\nGoverment ED charges by 16per =%f", a=(16*z)/100);
        printf("\nGoverment Tax = %f",  b=q*0.2604);
        printf("\nTotal Bill Amount == %f",c=z+a+b);
        break;
    }

}