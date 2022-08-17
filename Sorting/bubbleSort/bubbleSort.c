#include<stdio.h>

void bubbleSort(int a[]);

int main(){
     int arr[] = {2,3,57,8,9};
     
     bubbleSort(arr);

    return 0; 
}




void bubbleSort(int a[]){
       int i,j,temp;

       for (i=0;i<5;i++){

           for (j=i+1;j<5;j++){

               if(a[j]<a[i]){
                   temp = a[i];
                   a[i] = a[j];
                   a[j] = temp;
               }
           }
       }

       printf("Print sorted arr\n");

       for (i=0;i<5;i++){
           printf("%d ",a[i]);
       }
}