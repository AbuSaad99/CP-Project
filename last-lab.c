#include<stdio.h>
#include<conio.h>
#include<math.h>
//int fab(num){
//	if(num == 0){
//		return 0 ;
//	}
//	else if(num == 1){
//		return 1;
//	}
//	else 
//	return fab(num-1)+fab(num-2);
//}
//
//
//
int main()
{

    int i,j,k,num,a,b,count;
    num = 30000;     //it print all taxicab numbers till 30000, and it start from 1720
    for(i=1;i<=num;i++){
        count=0;
       for (j = 1; j <= pow(i, 1.0/3); j++)
          for (k = j + 1; k <= pow(i, 1.0/3); k++)
              if (j*j*j + k*k*k == i)
                  count++;
        
       if (count == 2){
            printf("%d\n",i);
        }
//        for(a=1;a*a*a<i;a++){
//            for(b=a;a*a*a+b*b*b<=i;b++)
//            {
//                if(a*a*a+b*b*b==i){
//                  count++;
//                }
//            }
//        }
//        if(count==2){
//            printf("%d\n",i);
//        }
    }

// Starting from 1, check every number if
    // it is Taxicab until count reaches N.
//    int i = 1, count = 0, N, j, k;
//    printf("Enter the number = ");
//    scanf("%d",&N);
//    while (count < N)
//    {
//       int int_count = 0;
//
//       for (j = 1; j <= pow(i, 1.0/3); j++)
//          for (k = j + 1; k <= pow(i, 1.0/3); k++)
//              if (j*j*j + k*k*k == i)
//                  count++;
//        
//       if (int_count == 2){
//            printf("%d\n",i);
//        }
//}
////==========================================================================================================================
//
//	int res, num = 10;
//	res = fab(num);
//	printf("result = %d",res);

//int num = 3, *p1 = &num, **p2 = &p1;
//printf("num is : %d \n*p1 is : %d \n**p2 is : %d \n", num , p1 ,p2);
//
//printf("Address of num is : %d \nAddress of *p1 is : %d\nAddress of **p2 is : %d \n", &num , &p1 , &p2);
//printf("Value of num using num var is : %d \nvalue of num using *p1 is : %d \nvalue of num using **p2 is : %d \n", num , *p1 , **p2);
//    
    return 0;
}
