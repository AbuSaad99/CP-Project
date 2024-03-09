#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//==============================================

//			QUESTION#1:-     


//    int arr[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};     
//        
//    
//    int length = sizeof(arr)/sizeof(arr[0]);   
//	int i; 
//        
//
//    int fr[length];    
//    int visited = -1;    
//        
//    for(i = 0; i < length; i++){    
//        int count = 1;    
//        int j;
//        for( j = i+1; j < length; j++){    
//            if(arr[i] == arr[j]){    
//                count++;    
//               
//                fr[j] = visited;    
//            }    
//        }    
//        if(fr[i] != visited)    
//            fr[i] = count;    
//    }    
//        
//    printf("---------------------\n");    
//    printf(" Element | Frequency\n");    
//    printf("---------------------\n");    
//    for( i = 0; i < length; i++){    
//        if(fr[i] != visited){    
//            printf("    %d", arr[i]);    
//            printf("    |  ");    
//            printf("  %d\n", fr[i]);    
//        }    
//    }    
//    printf("---------------------\n");    


    //==========================================   
    

//			QUESTION#2:-  
	    
//        int arr1[100], n,count=0;
//    	int i, j, k;
//
//       printf("Input the number of elements to be stored in the array: ");
//       scanf("%d",&n);
//       printf("Input %d elements in the array :\n",n);
//       for(i=0;i<n;i++)
//            {
//	      printf("element - %d : ",i);
//	      scanf("%d",&arr1[i]);
//	    }
//    printf("\nThe unique elements found in the array are: \n");
//    for(i=0; i<n; i++)
//    {
//        count=0;
//        for(j=0,k=n; j<k+1; j++)
//        {
//            /*Increment the counter when the seaarch value is duplicate.*/
//            if (i!=j)
//            {
//		       if(arr1[i]==arr1[j])
//              {
//                 count++;
//               }
//             }
//        }
//       if(count==0)
//        {
//          printf("%d ",arr1[i]);
//        }
//    }
//       printf("\n\n");
//       
       
	   //=================================================
       
//			QUESTION#3:-  
       
   int arr[10], i, s, j, p;

   printf("Enter size of an array:");
   scanf("%d", &s);

   printf("Enter array elements:");
   for (i = 0; i < s; i++) {
       scanf("%d", &arr[i]);
   }

   printf("All prime list is:");
   for (i = 0; i < s; i++) {
       j = 2;
       p = 1;
       while (j < arr[i]) {
           if (arr[i] % j == 0) {
               p = 0;
               break;
           }
           j++;
       }
       if (p == 1) {
           printf("%d ", arr[i]);
       }
   }
   
   
       
	return 0;
}
