//
//  binary.c
//  collage
//
//  Created by Sahil Dabhilkar on 10/09/22.
//

// Binary Search in C

#include <stdio.h>

int main(void) {
int array[30];
int n;
    int x,i,low = 0,high,a=-1;
printf("Enter the size of array :");
scanf("%d",&n);
    
    for (i=0;i<n ; i++) {
printf("Enter the array element :");
scanf("%d",&array[i]);
}
printf("Enter the searching element :");
scanf("%d",&x);
high = n-1;
while (low <= high) {
int  mid = (low + high) / 2;
    if (array[mid] == x){
        a=mid;
        break;
    }


    else if (array[mid] < x){
        low = mid + 1;
    }

    else{
        high = mid - 1;
    }
}
    
if(a == -1)
{
    printf("Not found");
}
  else
{
    printf("Element is found at index position %d ",a);
}
  return 0;
}
    
