#include<stdio.h>
#include<conio.h>
void main()
/*

		       // if statement  //

{
int password;
clrscr();
printf("\n Enter your password");
scanf("%d",&password);

if (password==12345)

{
printf(" Welcome ");
}
printf("\n you r entered the main menu");
  getch();

}                                                          */

	     /*	       //	if else    //


{ int age;
clrscr();
 printf("\n Enter your age");
 scanf("%d", &age);

 if(age>=18)
 {
   printf("\n congralation u can vote");
 }
 else
 {
  printf("sorry !! u can't vote");
}
getch();
}
							     */

		 /*
			// if else if statement //

 { int marks;
 clrscr();
 printf("\n Enter your marks");
 scanf("%d",&marks);

 if(marks==100)
 {
	 printf("\n genious");
 }
 else if (marks>=80 && marks==100)
 {
	printf("\n exiclent");
 }
 else if (marks>=40 && marks<=80)
 {
	printf("\n good");
 }
 else if (marks>=30 && marks<=40)
 {
	printf("\n average");
 }
 else
 {
	printf(" \n fail");
 }
    getch();

 }
			   */


	/*		 //  nested if esle  //


 {
 int a=2098,b=3249,c=345;
 clrscr();


	if (a>b)
	{
		if(a>b)
		{
			printf("%d",a);
		}
		else
		{
			printf("%d",b);
		}
	}
	else
	{
		if(b<c)
		{
			printf("%d",c);
		}
		else
		{
			printf("%d",b);
		}
	}
 getch();

 }                                   */

       /*
		  //  switch //


{

int a,b,c ;
int ch;
clrscr();

 printf("\n  Enter the value");
 scanf("%d%d",&a,&b);

 printf("\n Enter your choice");
 scanf("%d",&ch);

     switch(ch)
     {
	case 1: c=a+b;
	printf("%d",c);
	break;

	case 2: c=a-b;
	printf("%d",c);
	break;

	case 3: c=a*b;
	printf("%d",c);
	break;

	case 4: c=a/b;
	printf("%d",c);
	break;

	default: printf(" null");

     }
		getch();

}
					     */


	 /*	//  while loop  //

{ int i=1;
clrscr();

	while(i<=10)
	{ printf("%d",i);
	i++;
	}
	getch();

}                                        */
	   /*	     // do while loop //

{ int i=1;
clrscr();

	do
	{ printf("%d",i);
	i++;
	}
	while(i<=10);
	getch();

}                             */


	      /*		   //     for loop //

{ int i=1;
clrscr();
	for(i;i<=10;i++)
	{
	printf("%d ",i);
	}
	  getch();

}

			// for loop 2  //

{ 	  int i=10;
clrscr();
	for(i;i>=1;i--)
	{
	printf("%d ",i);
	}
	  getch();

}                                           */

      /*	   //     netsed loop //

{
iw ------nt i,j;
clrscr();
	for(i=1;i<=3;i++)
	 {

		for(j=1;j<=i;j++)
		{
		 printf("*");
		 }
		 printf("\n");
	 }
	 getch();

}                    */

	     /*	// break loop //
{ int i;
clrscr();
for(i=1;i<=10;i++)
{
if(i==5)
break;
printf("%d",i);
}
printf("learn coding");
getch();
}                */
			 // continue loop//
	    /*
{ int i;
clrscr();
for(i=1;i<=10;i++)
{
if(i==5)
continue;
printf("%d",i);
}
printf("learn coding");
getch();
}
	      */

	      /*
			//  exit loop//
#include<stdlib.h>    //written in starting for speciallly in exit only //
{
int i;
clrscr();
for (i=1;i<=10;++i)
{

	printf("%d",i);
	exit(0);
}
	printf("\n learn coding");
	getch();
}
			   */
	    /*	   // string //
{
 //  #include<string.h>  used for in this . //

   char str[50];
   clrscr();
   puts("\n enter the number");
   gets(str);
   puts(str);
   getch();

}             */

	      /*		// lower string //

 { char str[50];
 puts("\n enter the number");
 gets(str);
 puts(strlwr(str));
 getch();
 }              */

	       /*          // string upr //

 { char str[50];
 puts("\n enter the number");
 gets(str);
 puts(str upr(str));
 getch();
 }               */

 /*                  // string rev //

 { char str[50];
 puts("\n enter the number");
 gets(str);
 puts(str rev(str));
 getch();
 }               */


	      /*	       // string length  //

 { char str[50];
 puts("\n enter the number");
 gets(str);
 printf("%d",strlen(str));
 getch();
 }              */

	 /*		 // copy string //

 { char str[50] ,str2[89];
 clrscr();
	puts("\n enter the number");
	gets(str);
	strcpy(str2,str);
	puts(str2);
	getch();
 }         */

	/*	    //   compare string //

 {
 char str[50], str2[89];
 clrscr();
 puts("\n emter the number");
 gets(str);
 puts("\n enter the second number");
 gets(str2);
 if (strcmp(str,str2)==0)
 puts("\n boths r same");
 else
 puts(" \n both r not eqall ");
 getch();

 }             */

	    /*	     //	merge string //

{
char str[56],str2[90];
clrscr();
puts("\n enter the number");
gets(str);
puts("enter the second number");
gets(str2);
strcat(str,str2);
puts(str);
getch();
}                           */

		  /*	// merging string //

{
int a=10,*p,**q;
clrscr();
p=&a;
q=&p;
printf("%d\n ",a);
printf("%d\n ",&a);
printf("%d\n ",p);
printf("%d\n ",*p);
printf("%d\n ",q);
printf("%d\n ",*q);
printf("%d\n",**q);
getch();
}                          */

	       /*		    // function  //



int sum (int a, int b)           // no void main () is put in this//
{
 return a+b;
}
void main()
{
int store = sum(10,20);
printf("%d", store);
getch();
}                */


	      /*			//storage class  //\


{
  clrscr();
{ static int a=10;
	 if (1==1)
      {
static int b=20;       // replace the static into  auto see whats happing //
printf("%d\n ",a);
rintf("%d\n ",b);
      }
      printf("%d\n ",a);
getch();
}
}           */


   /*

			 //  structure //


struct stu
{
 int roll;
 char name[20];
 double marks;
};
 void main()
 {
  struct stu s;
  clrscr();
  printf("enter the record");
  scanf("%d\n %s\n %lf\n  ", &s.roll ,&s.name, &s.marks);

  printf("%d\n %s\n %lf\n ", s.roll,s.name, s.marks);
  getch();
 }
		   */

