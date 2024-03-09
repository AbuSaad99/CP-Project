#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	//QUESTION # 1:- 
	

	
//=================
//int row , col ,n=4 ;
//for(row=1;row<=n;row++){
//    for(col=1;col<=n-1;col++){
//    	printf(" ");
//	}
//	for(col=1;col<=2*row-1;col++){
//		printf("*");
//	}
//	printf("\n");
//}
//for(row=n-1;row>=1;row--){
//    for(col=1;col<=n-1;col++){
//    	printf(" ");
//	}
//	for(col=1;col<=2*row-1;col++){
//		printf("*");
//	}
//	printf("\n");
//}
	


//===========================	



	
//int i, j ,n=4;
//for(i=1;i<=n;i++){
//	for(j=1;j<=n-i;j++){
//		printf(" ");
//	}
//	for(j=1;j<=2*i-1;j++){
//		printf("*");
//	}
//	printf("\n");
//}	
//for(i=n-1;i>=1;i--){
//	for(j=1;j<=n-i;j++){
//		printf(" ");
//	}
//	for(j=1;j<2*i;j++){
//		printf("*");
//	}
//	printf("\n");
//}
	


//int i , j , k  ;
//for(i=0;i<=7;i++){
//	printf("%d\n",i);
//	for(i=1;i<=6;i++){
//		for(j=6;j>=i;j--){
//			printf("*");
//		}
//		printf("\n");
//		
//	}
//}	



// QUESTION # 3:-


int n1,firstnum,lastnum , fact,i , n2, reminder, sum;

printf("Input starting rang of number:");
scanf("%d",&firstnum);
printf("Input ending rang of number:");
scanf("%d",&lastnum);
for(n1=firstnum;n1<=lastnum;n1++)
{
	n2=n1;
	sum=0;
	while(n2!=0)
	{
		fact=1;
		reminder=n2%10;
		for(i=1;i<=reminder;i++)
		{
			fact*=i;
		}
		sum=sum+fact;
         n2=n2/10;
	}
if(sum==n1){
		printf("The strong number are: %d\t\n",sum);
	}
}

//  int i, n, n1, s1=0,j,k,en,sn;  
//    long fact; 
//
// 
//    printf("Input starting range of number : ");  
//    scanf("%d", &sn);
//    printf("Input ending range of number: ");  
//    scanf("%d", &en); 
//    printf("\n\nThe Strong numbers are :\n"); 
//
// for(k=sn;k<=en;k++)
//   {
//     n1=k;
//     s1=0;  
// 
//    for(j=k;j>0;j=j/10) 
//    {  
//  
//        fact = 1;  
//          for(i=1; i<=j % 10; i++)  
//           {  
//            fact = fact * i;  
//           }  
//            s1 = s1 + fact;  
//    }  
//  
//    if(s1==n1)  
//       
//        printf("%d  ", n1); 
//  }  
//        printf("\n\n"); 
//}

 
 
 return 0;
}

