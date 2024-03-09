#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


//int row,col,nocol, norow;
//printf("take number n:");
//scanf("%d",&norow);
//printf("take number n:");
//scanf("%d",&nocol);
//for(row = 1; row<=norow; row++){
// for(col = 1; col<=nocol; col++){
// 	printf("*");	
//}
//printf("\n");	
//}
	
	
//int row,col,nocol, norow;
//printf("take number n:");
//scanf("%d",&norow);
//printf("take number n:");
//scanf("%d",&nocol);
//for(row = 1; row<=norow; row++){
// for(col = 1; col<=nocol; col++){
// 	if (col % 2 == 0){
// 		printf("*");
//	 }
//	 else{
//	 	printf("+");
//	 }
//	 
// }
//printf("\n");
//}		
	
	
	
//=====================
	
	
//int row,col,nocol, norow;
//printf("take number n:");
//scanf("%d",&norow);
//printf("take number n:");
//scanf("%d",&nocol);
//for(row = 1; row<=norow; row++){
// for(col = 1; col<=nocol; col++){
// 	
//// 	printf("* +");
// 	if (row % 2 == 0){
// 		printf("*");
//	 }
//	 else{
//	 	printf("+");
//	 }
//	 
// }
//printf("\n");
//}



int value = 56782 , reminder , reverse=0 , result ;  

while(value!=0){

	reminder = value%10;
	reverse = reverse*10 + reminder ;
    value = value/10;
  printf("%d\n",reminder);    

}

//int value = 56782 , reminder , reverse=0 , result, count=0, sum=0 ;  
//
//while(value!=0){
//	count += 1;
//	reminder = value%10;
//	reverse = reverse*10 + reminder ;
//    value = value/10;    
//   result = pow(reminder,count);
//   printf("power of %d is ->%d\n",reminder,result);
//   sum +=result;
//}
//printf("The total sum %d",sum);


//int num=110, reminder , reverse=0 , decimal=0 , count=0;
//while(num!=0){
//	reminder= num%10;
//	count+=1;
//	if (reminder == 0 || reminder == 1){
//		decimal+= (reminder*pow(2,count));
//		num/=10;
//	}
//	else{
//		printf("invalid binary number");
//	}
//} 
//printf("The decimal of your binary is %d",decimal);





return 0;



}



