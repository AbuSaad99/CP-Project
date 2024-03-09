#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int print_60(int *num){
	int res ;
	
	*num = *num * 0.6; 

}
int swap(int *a,int *b){
	
   int x = 4, y = 5, temp;
 
   printf("Before Swapping x = %d,y = %d\n", x, y);
 
   a = &x;
   b = &y;
 
   temp = *b;
   *b = *a;
   *a = temp;
 
   printf("After Swapping x = %d,y = %d\n", x, y);
 	
}







int main(int argc, char *argv[]) {
	
//question#1:-

//	int num = 100;
//	
//	printf("%d\n",num);
//	
//	print_60(&num);
//	
//	printf("%d\n",num);

	
//question#2:

//   int x = 4, y = 5, *a, *b;	
//   a = &x;
//   b = &y;	
//   swap(*a, *b);	





	
//	#include <stdio.h>
//void pointerfunction(int *number){
//	*number=*nu0mber*0.6;
//}
//
//int main( ) {
//	int r,number;
//	scanf("%d",&number);
//	printf("before=%d\n",number);
//	pointerfunction(&number);
//	printf("after=%d\n",number);
//	return 0;
//}
	return 0;
}
