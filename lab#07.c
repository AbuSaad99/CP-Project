#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void printnegative(int midmarks[30], int size){
	int i;
	printf("The negative number in array are =");
	for(i=0;i<size;i++){
		if(midmarks[i]< 0){
			printf("%d\n",midmarks[i]);
		}
	}
}


void printsum(int midmarks[30], int size){
	int sum=0 , i;
	for(i=0;i<size;i++){
		sum += midmarks[i];
	}
	printf("The sum  of array is %d",sum);
}

void printminmax(int midmarks[30], int size){
	int min = midmarks[0];
	int max = midmarks[0];
	int i;
	for(i=0;i<size;i++){
	
	if(midmarks[i]>max){
		max = midmarks[i];
	}
	if(midmarks[i]<min){
		min = midmarks[i];
	}
																																
	}
	printf("The maximum number in array is %d \n",max);
	printf("The minimum number in array is %d \n",min);}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////}

void printsecoundmax(int midmarks[30], int size){
	int i;
	int  max = midmarks[0];
	int secmax = midmarks[0]; 
	for(i=0;i<size;i++){
		if(max > secmax){
			secmax = max;
			max = midmarks[i];
		}
	}
	printf("The secound max is %d",secmax);
}


void inputarray(int midmarks[30], int size){
	int i;
	printf("Enter array elements =");
	for(i=0;i<size;i++){
		scanf("%d",&midmarks[i]);
	}	
}

void printarray(int midmarks[30], int size){
	int i;
	printf("The elements of array are");
	for(i=0;i<size;i++){
		printf("%d\n",midmarks[i]);
}
}

void oddarray(int midmarks[30], int size){
	int i;
	printf("odd numbers in array are \n");
	for(i=0;i<size;i++){
	if(midmarks[i] % 2 == 1){
	printf("%d\n",midmarks[i]);
	}
}
}
void reversearray(int midmarks[30], int size){
	int k;
	printf("Thr reverse is =");
	for(k=size;k>=0;k--){
		printf("%d\n",midmarks[k]);
	}
}

//========================

void primenum(int midmarks[30], int size){
	int i,j,flag=0;
	printf("The prime numbers are = ");
	for(i=0;i<size;i++){
		flag=0;
		for(j=2;j<midmarks[i]/2;j++){
			if(midmarks[i]%j == 0){
				flag = 1;
				break;
			}
		}
		
		if(flag == 0){
			printf("%d is a prime number\n", midmarks[i]);
		}
	}

}

int main(int argc, char *argv[]) {
	
	int size, Midmarks[30];
	printf(" Enter the size of array = ");
	scanf("%d",&size);
	inputarray(Midmarks, size);
	printsecoundmax(Midmarks,size);
	printminmax(Midmarks, size);
//	printnegative(Midmarks, size);
//	printsum(Midmarks, size);	
//	printarray(Midmarks, size);
//	oddarray(Midmarks, size);
//	reversearray(Midmarks, size);
//	primenum(Midmarks, size);
	
	return 0;
}
