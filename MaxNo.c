/*
 Problem statement :
 Accept N numbers from user and return the largest (Maximum) number.
 
 Input :
 Value of N : 5
 Numbers are :  5   3   7   1   2
 Output : 7

 Input :
 Value of N : 4
 Numbers are :  5   -3   7   11
 Output : 11
 
 Input :
 Value of N : 9
 Numbers are :  5   -4   7   8   0    5     0   -8    1
 Output : 8
 
 Input :
 Value of N : 9
 Numbers are :  -5   -4   -7   -8    -5     -8    -1
 Output : -1
 
 Input :
 Value of N : 9
 Numbers are :  11  11  11  11    11      11  11  11  11
 Output : 11

 Input :
 Value of N : 5
 Numbers are :  0   0   0   0   0
 Output : 0
 */
 
 #include<stdio.h>
 #include<stdlib.h>
 
  int Maximum(int iSize,int arr[])
  {
	int iMax = 0;
	int iCnt = 0;
	
	if(arr == NULL)
	{
	  printf("Invalid adress");
	  return 0;
	}
	if(iSize <= 0)
	{
	  printf("Invalid size \n");
	  return 0;
	}
	
	iMax = arr[0];
	
	for(iCnt = 1;iCnt <iSize; iCnt++)
	{
	   if(arr[iCnt] > iMax)
	   {
	     iMax = arr[iCnt];
	   }
	}
	return iMax;
  }
  
 int main()
 {
   int iNo = 0;
   int *ptr = NULL;
   int iRet = 0;
   int iCnt = 0;
   
   printf("Enter The N Numbers \n");
   scanf("%d",&iNo);
   
   if(iNo == 0)
   {
	   printf("Error : Invalid Input \n");
	   return -1;
   }
   ptr = (int*) malloc (sizeof(int) * iNo);
   
   if(ptr == NULL)
   {
	   printf("Error : unable to allocate memory \n");
	   return -1;
   }
   printf("Enter the values\n");
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      scanf("%d",&ptr[iCnt]);
   }
   
   printf("values are \n");
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      printf("%d\n",ptr[iCnt]);
   }
   
   iRet = Maximum(iNo,ptr);
   
   printf("\n Maximum no is : %d",iRet);
   
      free(ptr);
 return 0;
 }
 
 
 /*
 
 output
 
 D:\ProgramTopicWise\LB\3ProblemsOnNNumbers\Maximum>gcc MaxNo.c -o myexe

D:\ProgramTopicWise\LB\3ProblemsOnNNumbers\Maximum>myexe
Enter The N Numbers
5
Enter the values
0
0
0
0
0
values are
0
0
0
0
0

 Maximum no is : 0
D:\ProgramTopicWise\LB\3ProblemsOnNNumbers\Maximum>myexe
Enter The N Numbers
9
Enter the values
5
-4
7
8
0
5
0
-8
1
values are
5
-4
7
8
0
5
0
-8
1

 Maximum no is : 8
D:\ProgramTopicWise\LB\3ProblemsOnNNumbers\Maximum>myexe
Enter The N Numbers
4
Enter the values
5
-3
7
11
values are
5
-3
7
11

 Maximum no is : 11
 */