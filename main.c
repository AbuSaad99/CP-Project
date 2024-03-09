#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Print(int arr [],int num,int start){
	
	if(start>=num){
		return;
	}
	else{
	printf("%d",arr);
    }

}



int display(){
	printf("GOOD MORNING\n");
	printf("GOOD EVENING\n");
	printf("GOOD NIGHT\n");
}

int fac(int num){
	int f;
	if(num==0){
		return 0;
	}
	if(num==1){
		return 0;
	}
	else{
		f = num*fac(num-1);
		return f; 
	}
}

int sum(int num){
	if(num==0 || num==1){
		return 1;
	}
	else{
		return num+sum(num-1);
	}
}

int fab(int num){
	if(num==0){
		return 0;
	}
	if(num==1){
		return 0;
	}
	else{
		return fab(num-2) + fab(num-1);
	}
}
int pow(int base, int exp){
	if(exp==0){
		return 1;
	}
	else{
		return base * pow(base, exp-1);
    }
}
int swap(int *a,int *b){
	int z;
	z = *a;
	*a = *b;
	*b = z;	
	printf("\nAfter Swaping a = %d and b = %d",*a, *b);
}
void palidrom(char *str){
	char *ptr, *rev;
	ptr =str;
	
	while(*ptr != '\0'){
		++ptr;
	}
	--ptr;
	for(rev=str;res>=ptr;){
		if(*ptr==*rev){
			--ptr;
			rev++;
		}
		else
		break;
	}
	if(rev>ptr)
}

int main(int argc, char *argv[]) {
//int num1, num2;
//printf("Enter number-1:");
//scanf("%d",&num1); 
//printf("Enter number-2:");
//scanf("%d",&num2);
//printf("Before swaping a = %d and b = %d",num1, num2);
//swap(&num1,&num2);

//	char c;
//	int lower, upper;
//	printf("Enetr character:");
//	scanf("%c",&c);
//	lower = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
//	upper = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
//	if(lower || upper){
//		printf("%c is a veowel", c);
//	}
//	else{
//		printf("%c is not veowel",c);
//	}
	
//	char c;
//	printf("Enter the character:");
//	scanf("%d",&c);
//	if(c >='a' && c <= 'z'){
//		printf("%c is lowercase.", c);
//	}
//	if(c >= 'A' && c <= 'Z'){
//		printf("%c is uppercase.", c);
//	}
//	else{
//		printf("%c is not a character.", c);
//	}





















//int arr[6]= {2,1,3,4,5,6};
//int i,j=2,p,n=7;
//
//for(i=0;i<n;i++){
//	p=1;
//	while(j<arr[i]){
//		if(arr[i] % 2 == 0){
//			 	p=0;
//			 	break;
//		}
//		j++;
//	}	
//	if(p==1){
//		printf("%d\t",arr[i]);
//	}
//}















//int num = 10;
//int res;
//res = pow(2,2);
//printf("%d",res);

	
//	int num=10,i;
//	int res ;
////	res= res*fac(num);
//	printf("The factorial of %d is %d", num,fac(num));
	
	
//	int arr[100], num, i;
//	printf("Enter the limit: ");
//	scanf("%d",&num);
//	printf("Enter the elements:");
//	for(i=1;i<=num;i++){
//		scanf("%d",&arr);
//	}

//display();
//	Print(arr,num,0);



//int i,j,n=4;
//for(i=1;i<=n;i++){
//	for(j=1;j<=n-i;j++){
//		printf("");
//	}
//	for(j=1;j<=2*i-1;j++){
//		printf("*");
//	}
//	printf("\n");
//}
//for(i=n-1;i>=1;i--){
//	for(j=1;j<=n-i;j++){
//		printf("");
//	}
//	for(j=1;j<=2*i;j++){
//		printf("*");
//	}
//	printf("\n"); 
//}

//int n1,firstnum,lastnum , fact,i , n2,
//reminder, sum;
//printf("Input starting rang of number:");
//scanf("%d",&firstnum);
//printf("Input ending rang of number:");
//scanf("%d",lastnum);
//for(n1=firstnum;n1<=lastnum;n1++){
//n2=n1;
//sum=0;
//while(n2!=0)
//{
//fact=1;
//reminder=n2%10;
//for(i=1;i<=reminder;i++){
//fact*=i;
//}
//sum=sum+fact;
//
//n2=n2/10;
//}
//if(sum==n1){
//
//printf("The strong number are: %d\t\n",sum);
//}
//}




//int arr[10],i;
//int max = arr[0];
//int min = arr[0];
//
//printf("Enter the elements:");
//for(i=1;i<=10;i++){
//	scanf("%d",&arr[i]);
//}
//for(i=1;i<=10;i++){
//	if(arr[i]>max){
//		max=arr[i];
//	}
//	if(arr[i]<min){
//		min=arr[i];
//	}
//}
//printf("min: %d",min);
//printf("max: %d",max);


//int arr[100], n, position, value, i;
//printf("Enter the limit:");
//scanf("%d",&n);
//printf("Enetr the elements:");
//for(i=1;i<=n;i++){
//	scanf("%d",&arr[i]);
//}
//printf("Enter the position:");
//scanf("%d",&position);
//printf("Enetr tthe value:");
//scanf("%d",&value);
//for(i=position-1;i<=n-1;i++){
//	arr[i]=arr[i+1];
//}
//
//for(i=1;i<=n;i++){
//	printf("%d",arr[i]);
//}

//int arr1[3][3], arr2[3][3], resarr[3][3], i, j;
//printf("Enter the elements of arr-1:");
//for(i=0;i<3;++i){
//	for(j=0;j<3;++j){
//		scanf("%d",&arr1[i][j]);
//	}
//}
//printf("Enter the elements of arr-2:");
//for(i=0;i<3;++i){
//	for(j=0;j<3;++j){
//scanf("%d",&arr2[i][j]);
//	}
//}	
//printf("The Resultant Array is:");
//for(i=0;i<3;++i){
//	printf("\n");
//	for(j=0;j<3;++j){
//		resarr[i][j] = arr1[i][j] - arr2[i][j];
//		printf("%d ",resarr[i][j]);
//	}
//}

 













	return 0;
}
