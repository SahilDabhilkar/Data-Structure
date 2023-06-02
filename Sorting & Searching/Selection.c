//
//  Selection.c
//  College 
//
//  Created by Sahil Dabhilkar on 15/09/22.
//

#include <stdio.h>

int swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
    return 0;
}

int main()
{
    int array[30];
    int n,i;
printf("Enter the size of array :");
scanf("%d",&n);
        
    for (i=0;i<n ; i++) {
        printf("Enter the array element :");
        scanf("%d",&array[i]);
    }
   
    for (int step = 0; step < n - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < n; i++) {

          if (array[i] < array[min_idx])
            min_idx = i;
        }

        int temp = array[min_idx];
        array[min_idx]= array[step];
        array[step] = temp;
      }
  //
    
for (i = 0; i < n; ++i) {
   printf("%d  ", array[i]);
 }

    
 return 0;
}

